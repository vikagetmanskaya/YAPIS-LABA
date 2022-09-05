#pragma once
extern "C" {
#include <unistd.h>//
}
#include <TdlVisitor.h>
#include <istream>
#include <ostream>
#include <iostream>
#include "TdlTemplates.hpp"
#ifdef _WIN32
#include <windows.h>
#undef min
#undef max
#endif

template<class T>
concept HasToken = requires(T* t) {
	{ t->getSymbol() };
};

template<class T>
concept HasLine = requires(T* t) {
	{ t->getLine() };
};

template<class T>
concept HasText = requires(T* t) {
	{ t->getText() };
};

template<class T>
concept HasStart = requires(T* t) {
	{ t->start };
};

enum class Type {
	INVALID,
	VOID,
	INT,
	FLOAT,
	TABLE,
	COLUMN,
	ROW,
	STRING,
	FUNCTION,
	BOOL
};

const char *c_str(Type type) {
	switch (type) {
		break; case Type::INVALID:
			return "invalid";
		break; case Type::VOID:
			return "void";
		break; case Type::INT:
			return "int";
		break; case Type::FLOAT:
			return "float";
		break; case Type::TABLE:
			return "table";
		break; case Type::COLUMN:
			return "column";
		break; case Type::ROW:
			return "row";
		break; case Type::FUNCTION:
			return "invalid";
		break; case Type::BOOL:
			return "bool";
		break; case Type::STRING:
			return "string";
		default:
			return "invalid";
	}
}

std::ostream& operator <<(std::ostream& stream, Type type) {
	stream << c_str(type);
	return stream;
}

template<HasText T>
std::ostream& operator <<(std::ostream& stream, T *type) {
	stream << type->getText();
	return stream;
}
template<HasText T>
std::ostream& operator <<(std::ostream& stream, T &type) {
	stream << type.getText();
	return stream;
}

class Symbol : public std::vector<Type> {
	public:
		using Base = std::vector<Type>;
	public:
		template<class... Args>
		Symbol(Type ret = Type::INVALID, Args&&... args):Base(std::forward<Args>(args)...), m_Type(ret){}
	public:
		bool IsFunction() const {
			return m_Function;
		}
		Type Return() const {
			return m_Type;
		}
		void SetReturn(Type t) {
			m_Type = t;
		}
		void MakeFunction() {
			m_Function = 1;
		}
	private:
		Type m_Type = Type::INVALID;
		bool m_Function = 0;
};

class Visitor : public TdlVisitor {
	public:
		using Base = TdlVisitor;
	public:

	Visitor(std::ostream& out, std::ostream& err
	, void (*color_red)() = 0, void (*color_default)() = 0)
	: m_Out(out), m_Err(err)
	, m_ColorRed(color_red)
	, m_ColorDefault(color_default) {}

	antlrcpp::Any visitTdl(TdlParser::TdlContext *context) override {
		m_Out << tdl_tools_template << TDL_BEGIN_TEMPLATE;
		IncrementScope();
		for (const auto& e : context->global_scope()) {
			visitGlobal_scope(e);
		}
		for (const auto& e : context->function_definition()) {
			FunctionDeclare(e);
		}
		for (const auto& e : context->function_definition()) {
			visitFunction_definition(e);
		}
		visitProgram(context->program());
		DecrementScope();
		m_Out << TDL_END_TEMPLATE;
		return antlrcpp::Any{};
	}


	void DeclareGlobal_scope(TdlParser::Global_scopeContext *context) {
		visitType(context->type());
		Out(context->NAME());
		Outcln(";");
	}

    antlrcpp::Any visitGlobal_scope(TdlParser::Global_scopeContext *context) override {
		VariableDoesntExists(context->NAME());
		Type type = visitType(context->type());
		Out(context->NAME());
		CreateVariable(context->NAME()->getText(), Symbol{type});
		if (context->ASSIGN()) {
			Out("=");
			IsOfTypeExpr(context->expr()
			, visit(context->expr()), type);
		}
		else Out("= {}");
		Outcln(";");
		return antlrcpp::Any{};
	}

	antlrcpp::Any visitProgram(TdlParser::ProgramContext *context) override {
		IncrementScope();
		m_Out << TDL_PROGRAM_TEMPLATE;
		visitBlock(context->block());
		m_Out << TDL_PROGRAM_END_TEMPLATE;
		DecrementScope();
		return antlrcpp::Any{};
	}

	antlrcpp::Any visitType(TdlParser::TypeContext *context) override {
		std::string name = context->getText();
		Out(name);
		return antlrcpp::Any{TypeFromString(name)};
	}

	antlrcpp::Any visitMath_operator(TdlParser::Math_operatorContext *context) override {
		Out(context->getText());
		return antlrcpp::Any{};
	}

	antlrcpp::Any visitComparison_operator(TdlParser::Comparison_operatorContext *context) override {
		Out(context->getText());
		return antlrcpp::Any{};
	}

	antlrcpp::Any visitOp(TdlParser::OpContext *context) override {
		Out(context->getText());
		return antlrcpp::Any{};
	}
/*
	antlrcpp::Any visitLiteral_or_var(TdlParser::Literal_or_varContext *context) override {
		Out(context->getText());
		if (context->INTEGER_CONSTANT())
			return antlrcpp::Any{Type::INT};
		if (context->FLOAT_CONSTANT())
			return antlrcpp::Any{Type::FLOAT};
		if (context->NAME()) {
			Symbol* sym = VariableExists(context->NAME());
			if (!sym)
				return antlrcpp::Any{Type::INVALID};
			return sym->IsFunction() ? Type::FUNCTION : sym->Return();
		}
		if (context->function_call())
			return visitFunction_call(context->function_call());
		if (context->STRING_LITERAL()) {
			Outc("_s");
			return antlrcpp::Any{Type::STRING};
		}
		return antlrcpp::Any{Type::INVALID};
	}
*/
	antlrcpp::Any visitRow_expr(TdlParser::Row_exprContext *context) override {
		auto temp = context->expr();
		if (temp.empty()) {
			Out("row{}");
			return antlrcpp::Any{Type::ROW};
		}
		Out("row{(column)");
		m_NoSpace = 1;
		Type type = visit(temp[0]);
		if (type == Type::INVALID)
			return antlrcpp::Any{Type::ROW};
		if (type != Type::STRING && type != Type::INT
				&& type != Type::FLOAT && type != Type::BOOL)
			IsOfTypeExpr(temp[0], type, Type::COLUMN);
		for (size_t i = 1; i != temp.size(); ++i) {
			Outc(",");
			type = visit(temp[i]);
			if (type != Type::STRING && type != Type::INT
				&& type != Type::FLOAT && type != Type::BOOL)
				IsOfTypeExpr(temp[i], type, Type::COLUMN);
		}
		Outc("}");
		return antlrcpp::Any{Type::ROW};
	}

	antlrcpp::Any visitTable_expr(TdlParser::Table_exprContext *context) override {
		auto temp = context->expr();
		if (temp.empty()) {
			Out("table{}");
			return antlrcpp::Any{Type::ROW};
		}
		Out("table{");
		m_NoSpace = 1;
		Type type = visit(temp[0]);
		if (type == Type::INVALID)
			return antlrcpp::Any{Type::TABLE};
		IsOfTypeExpr(temp[0], type, Type::ROW);
		for (size_t i = 1; i != temp.size(); ++i) {
			Outc(",");
			IsOfTypeExpr(temp[0], visit(temp[i]), Type::ROW);
		}
		Outc("}");
		return antlrcpp::Any{Type::TABLE};
	}

	antlrcpp::Any visitIf_body(TdlParser::If_bodyContext *context) override {
		Out("if (");
		m_NoSpace = 1;
		IsOfTypeExpr (context->expr(), visit(context->expr()), Type::BOOL);
		Outcln(") {");
		IncrementScope();
		visitBlock(context->block());
		DecrementScope();
		Outln("}");
		if (context->else_body())
			visit(context->else_body());
		return antlrcpp::Any{};
	}

	antlrcpp::Any visitElse_body(TdlParser::Else_bodyContext *context) override {
		if (!context->block()) {
			Out("else");
			visitIf_body(context->if_body());
			return antlrcpp::Any{};
		}
		Outln("else {");
		IncrementScope();
		visitBlock(context->block());
		DecrementScope();
		Outln("}");
		return antlrcpp::Any{};
	}

	antlrcpp::Any visitWhile_body(TdlParser::While_bodyContext *context) override {
		Outln("while (", context->expr()->getText(), ") {");
		IsOfTypeExpr(context->expr(), visit(context->expr()).as<Type>(), Type::BOOL);
		IncrementScope();
		visitBlock(context->block());
		DecrementScope();
		Outln("}");
		return antlrcpp::Any{};
	}

	antlrcpp::Any visitUntil_body(TdlParser::Until_bodyContext *context) override {
		Out("while (!(");
		IsOfTypeExpr(context->expr(), visit(context->expr()).as<Type>(), Type::BOOL);
		Outln(")) {");
		//IsOfTypeExpr(context->expr(), visit(context->expr()).as<Type>(), Type::BOOL);
		IncrementScope();
		visitBlock(context->block());
		DecrementScope();
		Outln("}");
		return antlrcpp::Any{};
	}

	antlrcpp::Any visitFor_body_three(TdlParser::For_body_threeContext *context) override {
		IncrementScope();
		Out("for (");
		if (context->statement()) {
			visitStatement(context->statement());
		}
		Out(';');
		if (context->expr(0)) {
			IsOfTypeExpr(context->expr(0), visit(context->expr(0)).as<Type>(), Type::BOOL);
		}
		Out(';');
		if (context->expr(1)) {
			visit(context->expr(1));
		}
		Outln(") {");
		visitBlock(context->block());
		DecrementScope();
		Outln("}");
		return antlrcpp::Any{};
	}
	antlrcpp::Any visitFor_body_in(TdlParser::For_body_inContext *context) override {
		IncrementScope();
		--m_Tab;
		Type type_iterator = TypeFromString(context->type()->getText());
		Type type_container;
		//Out(context->NAME()[0]);
		if (context->function_call()) {
			Out("{auto container = ");
			type_container = visitFunction_call(context->function_call());
			Outcln(";");
		}
		else {
			Symbol* sym = VariableExists(context->NAME()[1]);
			type_container = sym ? sym->Return() : Type::INVALID;
			Outcln("{auto& container = ", context->NAME()[1], ";");
		}
		Outln("auto it = container.begin();");
		Outln("auto end = container.end();");
		Outln("for (;it != end; ++it) {");
		++m_Tab;
		Outcln(type_iterator, "& ", context->NAME()[0], " = *it;");
		CreateVariable(context->NAME()[0]->getText(), Symbol{type_iterator});
		if (type_iterator != Type::INVALID)
		switch (type_container) {
			break; case Type::TABLE:
				IsOfType(context->NAME()[0], Type::ROW);
			break; case Type::ROW:
				IsOfType(context->NAME()[0], Type::COLUMN);
			break; default:
				if (context->function_call()) {
					Err(context->function_call()
						, (context->function_call()
						, "is not of type table or row"));
				} else {
					Err(context->NAME()[1]
						, context->NAME()[1]->getText()
						, "is not of type table or row");
				}
		}
		visitBlock(context->block());
		DecrementScope();
		Outln("}}");
		return antlrcpp::Any{};
	}

	antlrcpp::Any visitExpr_cast(TdlParser::Expr_castContext *context) override {
		Type to = TypeFromString(context->type()->getText());
		Out("(");
		Outc(to, ")(");
		m_NoSpace = 1;
		Type from = visit(context->expr());
		Outc(")");
		IsConvertableExpr(context, from, to);
		return antlrcpp::Any{to};
	}

	antlrcpp::Any visitExpr_parenthesis(TdlParser::Expr_parenthesisContext *context) override {
		Outc("(");
		Type ret = visit(context->expr()).as<Type>();
		Outc(")");

		return antlrcpp::Any{ret};
	}

	antlrcpp::Any visitExpr_function_call(TdlParser::Expr_function_callContext *context) override {
		return visitFunction_call(context->function_call());
	}

	antlrcpp::Any visitExpr_table_expr(TdlParser::Expr_table_exprContext *context) override {
		return visitTable_expr(context->table_expr());
	}

	antlrcpp::Any visitExpr_operator(TdlParser::Expr_operatorContext *context) override {
		Type left = visit(context->expr(0)).as<Type>();
		visitOp(context->op());
		Type right = visit(context->expr(1)).as<Type>();
		if (left == Type::INVALID || right == Type::INVALID)
			return antlrcpp::Any{Type::INVALID};
		Type ret = CheckOperator(left, context->op()->getText(), right);
		if (ret == Type::INVALID)
			Err(context, context->expr(1), "no matching operator to call to ", left, context->op()->getText(), right);
		return antlrcpp::Any{ret};
	}

	antlrcpp::Any visitExpr_name(TdlParser::Expr_nameContext *context) override {
		Out(context->NAME()->getText());
		Symbol* sym = VariableExists(context->NAME());
		if (!sym)
			return antlrcpp::Any{Type::INVALID};
		return antlrcpp::Any{sym->Return()};
	}

	antlrcpp::Any visitExpr_false_constant(TdlParser::Expr_false_constantContext *context) override {
		Out(context);
		return antlrcpp::Any{Type::BOOL};
	}
	antlrcpp::Any visitExpr_true_constant(TdlParser::Expr_true_constantContext *context) override {
		Out(context);
		return antlrcpp::Any{Type::BOOL};
	}
	antlrcpp::Any visitExpr_float_constant(TdlParser::Expr_float_constantContext *context) override {
		Out(context);
		return antlrcpp::Any{Type::FLOAT};
	}
	antlrcpp::Any visitExpr_integer_constant(TdlParser::Expr_integer_constantContext *context) override {
		Out(context);
		return antlrcpp::Any{Type::INT};
	}
	antlrcpp::Any visitExpr_string_constant(TdlParser::Expr_string_constantContext *context) override {
		Out(context);
		Outc("_s");
		return antlrcpp::Any{Type::STRING};
	}

	antlrcpp::Any visitExpr_negation(TdlParser::Expr_negationContext *context) override {
		Out("!");
		return antlrcpp::Any{visit(context->expr())};
	}

	antlrcpp::Any visitExpr_element_access(TdlParser::Expr_element_accessContext *context) override {
		Type left = visit(context->expr(0)).as<Type>();
		Outc("[");
		m_NoSpace = 1;
		Type index = visit(context->expr(1)).as<Type>();
		Outc("]");
		IsOfTypeExpr(context, index, Type::INT);
		switch (left) {
			case Type::TABLE:
				return antlrcpp::Any{Type::ROW};
			case Type::ROW:
				return antlrcpp::Any{Type::COLUMN};
			default: ;
		}
		Err(context->expr(0), context->getText()
				, "element access expression can only be of type matrix or vector");
		return antlrcpp::Any{Type::INVALID};
	}

	antlrcpp::Any visitExpr_row_expr(TdlParser::Expr_row_exprContext *context) override {
		visitRow_expr(context->row_expr());/*
		for (const auto& e : context->number_or_var()) {
			Type ret = visitNumber_or_var(e);
			IsOfTypeExpr(e, ret, Type::NUMBER);
		}*/
		return antlrcpp::Any{Type::ROW};
	}

	antlrcpp::Any visitBlock_statement(TdlParser::Block_statementContext *context) override {
		if (context->statement()) {
			visitStatement(context->statement());
			Outcln(";");
		}
		else if (context->for_body()) {
			visit(context->for_body());
		}
		else if (context->while_body()) {
			visitWhile_body(context->while_body());
		} else if (context->until_body()) {
			visitUntil_body(context->until_body());
		} else {
			visitIf_body(context->if_body());
		}
		return antlrcpp::Any{};
	}

	antlrcpp::Any visitStatement(TdlParser::StatementContext *context) override {
		if (context->NAME() && !context->type()) {
			Out(context->NAME()->getText(), "=");
			Type ret =  visit(context->expr());
			Symbol* sym = VariableExists(context->NAME());
			if (sym)
				IsOfTypeExpr(context->expr(), ret, sym->Return());
			return antlrcpp::Any{ret};
		}
		if (context->NAME()) {
			std::string ret_name = context->type()->getText();
			std::string name = context->NAME()->getText();
			Type ret = TypeFromString(ret_name);
			VariableDoesntExists(context->NAME());
			CreateVariable(context->NAME()->getText()
					, Symbol{ret});
			Out(ret_name, name);
			if (context->ASSIGN()) {
				Out("=");
				Type ret_expr = visit(context->expr()).as<Type>();
				IsOfTypeExpr(context->expr(), ret_expr, ret);
			} else Out("= {}");
			return antlrcpp::Any{ret};
		}
		if (context->function_call()) {
			return visitFunction_call(context->function_call());
		}
		if (context->builtin_print()) {
			return visitBuiltin_print(context->builtin_print());
		}
		return antlrcpp::Any{Type::INVALID};
	}

	antlrcpp::Any visitPrint_expr(TdlParser::Print_exprContext *context) override {
		if (context->expr()) {
			Type ret = visit(context->expr()).as<Type>();
			if (ret == Type::VOID || ret == Type::INVALID) {
				Err(context->expr(), context->getText(), "invalid print argument");
			}
		} else {
			Out(context->STRING_LITERAL()->getText());
			Outc("_s");
		}
		return antlrcpp::Any{Type::VOID};
	}

	antlrcpp::Any visitPrint_signature(TdlParser::Print_signatureContext *context) override {
		auto arr = context->print_expr();
		visitPrint_expr(arr.front());
		for (size_t i = 1; i != arr.size(); ++i) {
			Outc(",");
			visitPrint_expr(arr[i]);
		}

		return antlrcpp::Any{};
	}

	antlrcpp::Any visitBuiltin_print(TdlParser::Builtin_printContext *context) override {
		Out("print(");
		m_NoSpace = 1;
		visitPrint_signature(context->print_signature());
		Outc(")");
		return antlrcpp::Any{};
	}

	antlrcpp::Any visitBuiltin_scan(TdlParser::Builtin_scanContext *context) override {
		Out("scan<");
		Outc(context->type(), ">()");//
		return antlrcpp::Any{TypeFromString(context->type()->getText())};
	}

	antlrcpp::Any visitRet(TdlParser::RetContext *context) override {
		Out("return");
		if (context->expr()) {
			return visit(context->expr());
		}
		return antlrcpp::Any{Type::VOID};
	}

	antlrcpp::Any visitBlock(TdlParser::BlockContext *context) override {
		for (const auto& e : context->block_statement()) {
			visitBlock_statement(e);
		}
		if (context->ret()) {
			Type ret = visitRet(context->ret()).as<Type>();
			Outcln(";");
			if (ret != m_ReturnType)
				Err(context->ret(), context->ret()->getText()
					, "invalid return type. Expected", m_ReturnType);
		}
		return antlrcpp::Any{};
	}

	antlrcpp::Any visitSignature_arguments(TdlParser::Signature_argumentsContext *context) override {
		//Out(context->getText());
		Symbol sym;
		auto temp = context;
		if (temp) {
			sym.push_back(visitType(temp->type()).as<Type>());
			if (temp->NAME()) {
				CreateVariable(temp->NAME()->getText(), Symbol(sym.back()));
				Out(temp->NAME()->getText());
			}
			temp = temp->signature_arguments();
		}
		while (temp) {
			Outc(",");
			sym.push_back(visitType(temp->type()));
			if (temp->NAME()) {
				CreateVariable(temp->NAME()->getText(), Symbol(sym.back()));
				Out(temp->NAME()->getText());
			}
			temp = temp->signature_arguments();
		}
		return antlrcpp::Any{sym};
	}

	antlrcpp::Any visitFunction_signature(TdlParser::Function_signatureContext *context) override {
		Outc("(");
		Symbol sym;
		if (context->signature_arguments())
			sym = visitSignature_arguments(context->signature_arguments());
		Outc(")");
		return antlrcpp::Any{sym};
	}

	void FunctionDeclare(TdlParser::Function_definitionContext *context) {
		if (context->type())
			visitType(context->type());
		else Out("void");
		Out(context->NAME()->getText());
		visitFunction_signature(context->function_signature());
		Outcln(";");
	}

	antlrcpp::Any visitFunction_definition(TdlParser::Function_definitionContext *context) override {
		//if (!context->type()) {
			m_ReturnType = Type::VOID;
			Type ret;
			if (context->type()) {
				ret = visitType(context->type());
			}
			else {
				ret = Type::VOID;
				Out("void");
			}
			Out(context->NAME()->getText());
			IncrementScope();
			Symbol sym = visitFunction_signature(context->function_signature()).as<Symbol>();
			if (context->type()) {
				sym.SetReturn(ret);
				m_ReturnType = sym.Return();
			}
			else {
				sym.SetReturn(Type::VOID);
				m_ReturnType = Type::VOID;
			}
			FunctionDoesntExist(context->NAME());
			CreateFunction(context->NAME()->getText(), std::move(sym));
			Outln("{");
			visitBlock(context->block());
			DecrementScope();
			Outln("}");
			return antlrcpp::Any{};
		//}
		/*
		std::string typeStr = context->type()->getText();
		m_ReturnType = TypeFromString(typeStr);
		IncrementScope();
		CreateFunction(context->NAME()->getText(), std::move(sym));
		visitSub_program_signature(context->sub_program_signature());
		visitBlock(context->block());
		DecrementScope();
		return antlrcpp::Any{};
		*/
	}

	antlrcpp::Any visitCall_signature(TdlParser::Call_signatureContext *context) override {
		//Out(context->getText());
		Outc("(");
		Symbol sym;
		auto arr = context->expr();
		if (arr.size() == 1) {
			sym.push_back(visit(arr.front()).as<Type>());
			Outc(")");
			return sym;
		}
		if (arr.size() > 1) {
			sym.push_back(visit(arr.front()).as<Type>());
			for (auto it = arr.begin() + 1, end = arr.end(); it != end; ++it) {
				Outc(",");
				sym.push_back(visit(*it).as<Type>());
			}
		}
		Outc(")");
		return antlrcpp::Any{sym};
	}

	antlrcpp::Any visitFunction_call(TdlParser::Function_callContext *context) override {
		Out(context->NAME());
		Symbol sign = visitCall_signature(context->call_signature());
		const Symbol* actual = FunctionExists(context->NAME());
		if (!actual)
			return antlrcpp::Any{Type::INVALID};
		if (sign.size() != actual->size()) {
			Err(context, context->getText(), "wrong number of arguments");
			return antlrcpp::Any{actual->Return()};
		}
		for (size_t i = 0; i != sign.size(); ++i) {
			if (sign[i] != (*actual)[i]) {
				Err(context, context->getText(), "wrong argument(s) type(s)");
				return antlrcpp::Any{actual->Return()};
			}
		}
		return antlrcpp::Any{actual->Return()};
	}

	antlrcpp::Any visitExpr_scan_call(TdlParser::Expr_scan_callContext *context) override {
		return visitBuiltin_scan(context->builtin_scan());
	}

	auto GetErrors() const {
		return m_ErrorCount;
	}
	private:
	template<class First, class... Args>
	void Out(const First& first, const Args&... args) {
		if (m_NotTabbed) {
			for (int i = 0; i != m_Tab; ++i) {
				m_Out << '\t';
			}
			m_NotTabbed = 0;
		}
		else if (m_NoSpace) m_NoSpace = 0; else m_Out << ' ';
		m_Out << first;
		((m_Out << ' ' << args), ...);
		//m_Out << std::flush;
	}
	template<class First, class... Args>
	void Outc(const First& first, const Args&... args) {
		if (m_NotTabbed) {
			for (int i = 0; i != m_Tab; ++i) {
				m_Out << '\t';
			}
			m_NotTabbed = 0;
		}
		m_Out << first;
		((m_Out << args), ...);
		//m_Out << std::flush;
	}

	template<class First, class... Args>
	void Outln(const First& first, const Args&... args) {
		if (m_NotTabbed) {
			for (int i = 0; i != m_Tab; ++i) {
				m_Out << '\t';
			}
			m_NotTabbed = 0;
		}
		else if (m_NoSpace) m_NoSpace = 0; else m_Out << ' ';
		m_Out << first;
		((m_Out << ' ' << args), ...);
		Line();
		//m_Out << std::flush;
	}
	template<class First, class... Args>
	void Outcln(const First& first, const Args&... args) {
		if (m_NotTabbed) {
			for (int i = 0; i != m_Tab; ++i) {
				m_Out << '\t';
			}
			m_NotTabbed = 0;
		}
		m_Out << first;
		((m_Out << args), ...);
		Line();
		//m_Out << std::flush;
	}

	void Line() {
		m_Out << '\n';
		m_NotTabbed = 1;
	}

	void ColorRed() {
		if (m_ColorRed)
			m_ColorRed();
	}

	void ColorDefault() {
		if (m_ColorDefault)
			m_ColorDefault();
	}

	template<HasStart First, class... Args>
	void Err(const First* first, const Args&... args) {
		ColorRed();
		m_Err << "Error:";
		ColorDefault();
		m_Err << "line: "
			<< first->start->getLine() << ':' << first->start->getCharPositionInLine() << ' ';
		((m_Err << ' ' << args), ...);
		m_Err << "\n\n";
		++m_ErrorCount;
	}

	template<HasLine First, class... Args>
	void Err(const First* first, const Args&... args) {
		ColorRed();
		m_Err << "Error:";
		ColorDefault();
		m_Err << "line: "
			<< first->getLine() << ':' << first->getCharPositionInLine() << ' ';
		((m_Err << ' ' << args), ...);
		m_Err << "\n\n";
		++m_ErrorCount;
	}

	template<HasToken First, class... Args>
	void Err(First* first, const Args&... args) {
		ColorRed();
		m_Err << "Error:";
		ColorDefault();
		m_Err << "line: "
			<< first->getSymbol()->getLine() << ':'
			<< first->getSymbol()->getCharPositionInLine() << ' ';
		((m_Err << ' ' << args), ...);
		m_Err << "\n\n";
		++m_ErrorCount;
	}

	void IncrementScope() {
		++m_Tab;
		m_Symbols.emplace_front();
	}
	void DecrementScope() {
		--m_Tab;
		m_Symbols.pop_front();
	}
	/*
	Symbol* VariableExists(const std::string& name) {
		for (auto& e : m_Symbols) {
			auto found = e.find(name);
			if (found != e.end()) {
				return &found->second;
			}
		}
		return 0;
	}*/
	template<HasText Node>
	Symbol* FunctionDoesntExist(Node* node) {
		std::string name = node->getText();
		auto found = m_Symbols.back().find(name);
		if (found != m_Symbols.back().end()) {
			if (found->second.IsFunction()) {
				Err(node, name, "is already defined");
			}
			return &found->second;
		}
		return 0;
	}
	template<HasText Node>
	Symbol* FunctionExists(Node* node) {
		std::string name = node->getText();
		auto found = m_Symbols.back().find(name);
		if (found != m_Symbols.back().end()) {
			if (!found->second.IsFunction()) {
				Err(node, name, "is not a function");
			}
			return &found->second;
		}
		Err(node, name, "sub_program does not exists");
		return 0;
	}
	template<HasText Node>
	Symbol* VariableExists(Node* node) {
		std::string name = node->getText();
		for (auto& e : m_Symbols) {
			auto found = e.find(name);
			if (found != e.end()) {
				if (found->second.IsFunction()) {
					Err(node, name, "invalid sub_program usage. Must have ()");
				}
				return &found->second;
			}
		}
		Err(node, name, "variable does not exist");
		return 0;
	}
	template<HasText Node>
	Symbol* VariableDoesntExists(Node* node) {
		std::string name = node->getText();
		auto found = m_Symbols.front().find(name);
		if (found != m_Symbols.front().end()) {
			Err(node, name, "variable already exists");
			return &found->second;
		}
		return 0;
	}
	bool CreateVariable(const std::string& name, Symbol&& sym) {
		return m_Symbols.front().insert({name, std::forward<Symbol>(sym)}).second;
	}
	bool CreateFunction(const std::string& name, Symbol&& sym) {
		sym.MakeFunction();
		return m_Symbols.back().insert({name, std::forward<Symbol>(sym)}).second;
	}
	bool IsConvertableHelper(Type type, Type to) {
		if (type == to)
			return 1;
		switch(type) {
			break; case Type::INVALID:
				return 0;
			break; case Type::VOID:
				return 0;
			break; case Type::INT:
				return to == Type::FLOAT
					|| to == Type::STRING
					|| to == Type::BOOL
					|| to == Type::COLUMN;
			break; case Type::COLUMN:
				return to == Type::FLOAT
					|| to == Type::INT
					|| to == Type::STRING
					|| to == Type::BOOL;
			break; case Type::ROW:
				return to == Type::TABLE;
			break; case Type::TABLE:
				return to == Type::ROW;
			break; case Type::FUNCTION:
				return 0;
			break; case Type::BOOL:
				return to == Type::FLOAT
					|| to == Type::INT
					|| to == Type::STRING
					|| to == Type::COLUMN;
			break; case Type::STRING:
				return to == Type::FLOAT
					|| to == Type::INT
					|| to == Type::BOOL
					|| to == Type::COLUMN;
			break; case Type::FLOAT:
				return to == Type::INT
					|| to == Type::STRING
					|| to == Type::BOOL
					|| to == Type::COLUMN;
		}
	}
	template<class T>
	bool IsConvertableExpr(T* d, Type type, Type to) {
		if (!IsConvertableHelper(type, to)) {
			Err(d, d->getText(), "expression is of type", type, "is not convertable to type", to);
			return 0;
		}
		return 1;
	}
	template<class T>
	bool IsConvertableVar(const T* d, Type type, Type to) {
		auto found = VariableExists(d->getText());
		if (!found)
			return 0;
		if (!IsConvertableHelper(found->Return(), to)) {
			Err(d, d->getText(), "expression is of type", type, "is not convertable to type", to);
			return 0;
		}
	}
	template<class T>
	bool IsOfType(T* node, Type type) {
		std::string name = node->getText();
		Symbol *sym = VariableExists(node);
		if (!sym) {
			Err(node, name, "is not declared");
			return 0;
		}
		if (sym->IsFunction() || sym->Return() != type) {
			Err(node, name, "is not of type", type);
			return 0;
		}
		return 1;
	}
	template<HasToken T>
	bool IsOfTypeExpr(const T* node, Type expr, Type type) {
		if (expr != type) {
			std::string name = node->getSymbol()->getText();
			Err(node, name, "expression is not of type", type);
			return 0;
		}
		return 1;
	}
	template<HasText T>
	bool IsOfTypeExpr(T* node, Type expr, Type type) {
		std::string name = node->getText();
		if (expr != type) {
			Err(node, name, "expression is not of type", type);
			return 0;
		}
		return 1;
	}
	Type TypeFromString(const std::string& name) {
		static const std::map<std::string, Type> map = {
			  {"int", Type::INT}
			, {"float", Type::FLOAT}
			, {"table", Type::TABLE}
			, {"column", Type::COLUMN}
			, {"row", Type::ROW}
			, {"string", Type::STRING}
			, {"bool", Type::BOOL}
		};
		auto it = map.find(name);
		if (it == map.end())
			return Type::INVALID;
		return it->second;
	}

	Type CheckOperator(Type left, const std::string& op, Type right) {
		enum Op {
			PLUS,
			MINUS,
			MULTIPLY,
			DIVISION,
			PIPE,
			NEGATION,
			EQUAL,
			NOT_EQUAL,
			LESS,
			GREAT,
			ASSIGN,
			GREAT_EQ,
			LESS_EQ,
		};
		static const std::unordered_map<std::string, Op> map = {
			{"+", PLUS}, {"-", MINUS}, {"*", MULTIPLY},
			{"/", DIVISION}, {"!", NEGATION},
			{"==", EQUAL}, {"!=", NOT_EQUAL}, {"<", LESS},
			{">", GREAT}, {"=", ASSIGN}, {">=", GREAT_EQ},
			{"<=", LESS_EQ}
		};
		if (left == Type::ROW || left == Type::TABLE)
			return (map.find(op)->second == ASSIGN && right == left)
			? left : Type::INVALID;
		if (right == Type::ROW || right == Type::TABLE)
			return Type::INVALID;
		if (left == Type::COLUMN) {
			if (map.find(op)->second == ASSIGN)
			switch (right) {
				case Type::INT:
				case Type::FLOAT:
				case Type::STRING:
				case Type::BOOL:
				return left;
				default:
				return Type::INVALID;
			}
			return Type::INVALID;
		}
		if (right == Type::COLUMN)
			return Type::INVALID;
		auto s = map.find(op);
		if (s == map.end())
			return Type::INVALID;
		switch(map.find(op)->second) {
			case DIVISION:
			case MULTIPLY:
			case MINUS:
				if (left == Type::STRING)
					return Type::INVALID;
			case PLUS:
				return (left == right) ? left : Type::INVALID;
			case EQUAL:
			case NOT_EQUAL:
			case LESS:
			case GREAT:
			case GREAT_EQ:
			case LESS_EQ:
				return left == right ? Type::BOOL : Type::INVALID;
			case ASSIGN:
				return (left == right) ? left : Type::INVALID;
			break; default:
				return Type::INVALID;
		}
	}

	private:
	std::deque<std::map<std::string, Symbol>> m_Symbols;
	std::ostream& m_Out;
	std::ostream& m_Err;
	void (*m_ColorRed)();
	void (*m_ColorDefault)();
	Type m_ReturnType = Type::VOID;
	int m_Tab = 0;
	uint32_t m_ErrorCount = 0;
	bool m_NotTabbed = 1;
	bool m_NoSpace = 0;
};
