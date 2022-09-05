#pragma once
#include "TdlTools.hpp"

#define TDL_BEGIN_TEMPLATE \
	"namespace global {\n" \
	"\tusing namespace tdl;\n" \

#define TDL_PROGRAM_TEMPLATE \
	"	void run() {\n"

#define TDL_PROGRAM_END_TEMPLATE \
	"	}// void run()\n"

#define TDL_END_TEMPLATE \
	"} // namespace global\n\n" \
	"int main(int argc, char **argv) {\n" \
	"	(void)argc;\n" \
	"	(void)argv;\n" \
	"	//global::argc = argc;\n" \
	"	try {\n" \
	"		global::run();\n" \
	"	}\n" \
	"	catch (std::runtime_error err) {\n" \
	"		std::cerr << err.what();\n" \
	"		return 1;" \
	"	}\n" \
	"}\n"
