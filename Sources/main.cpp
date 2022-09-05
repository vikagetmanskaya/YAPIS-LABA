extern "C" {
#include <unistd.h>
#include <sys/wait.h>
}
#include <TdlParser.h>
#include <Visitor.hpp>
#include <TdlTemplates.hpp>
#include <TdlLexer.h>
#include <string>

template<class... Args>
void Log(const Args&... args) {
	(std::cout << ... << args);
}

void ColorRed() {
	Log("\e[31;1m");
}

void ColorDefault() {
	Log("\e[0m");
}

void ColorRedErr() {
	std::cerr << "\e[31;1m";
}

void ColorDefaultErr() {
	std::cerr << "\e[0m";
}

template<class... Args>
void fork_exec(const char *name, Args... args) {
	pid_t i = fork();
	if (i == 0)
		execlp(name, name, args..., nullptr);
}

void parse(const char *inputName, const char *execName = "a.out"){
	std::string interPath = "intermediate.cpp";
	for (uint64_t i = 0; access(interPath.c_str(), F_OK) != -1; ++i) {
		interPath = "intermediate(" + std::to_string(i) + ").cpp";
	}
	{
	if (access(inputName, R_OK) == -1) {
		ColorRed();
		Log("Error: ");
		ColorDefault();
		std::cout << std::flush;
		perror(inputName);
		return;
	}
	std::string p = inputName;
	antlr4::ANTLRFileStream fileStream(p);
	TdlLexer lexer(&fileStream);
	antlr4::CommonTokenStream tokens(&lexer);
	tokens.fill();
	TdlParser parser(&tokens);
	antlr4::tree::ParseTree* tree = parser.tdl();
	if (parser.getNumberOfSyntaxErrors()) {
		ColorRedErr();
		std::cerr << "Syntax errors occured";
		ColorDefaultErr();
		std::cerr << " total errors: "
			<< parser.getNumberOfSyntaxErrors() << '\n';
		return;
	}
	std::ofstream intermediate(interPath.c_str());
	Visitor visitor{intermediate, std::cerr, ColorRed, ColorDefault};
	visitor.visit(tree);
	if (visitor.GetErrors()) {
		ColorRed();
		std::cerr << "Syntax errors occured";
		ColorDefault();
		std::cerr << " total errors: "
			<< visitor.GetErrors() << '\n';
		intermediate.close();
		remove(interPath.c_str());
		return;
	}
	}
	fork_exec("clang++", interPath.c_str(), "-std=c++2a", "-o", execName);
	wait(0);
	remove(interPath.c_str());
}

int main(int argc, char **argv) {
	if (argc < 2) {
		ColorRed();
		Log("Error: ");
		ColorDefault();
		Log( "no input file.\n");
		return 2;
	} else {
		if (argc > 2)
			parse(argv[1], argv[2]);
		else if (argc == 2)
			parse(argv[1]);
		else {
			errno = E2BIG;
			perror("main");
			return 1;
		}
	}
	return 0;
}
