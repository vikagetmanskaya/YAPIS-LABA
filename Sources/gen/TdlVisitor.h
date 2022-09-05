
// Generated from Tdl.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "TdlParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by TdlParser.
 */
class  TdlVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by TdlParser.
   */
    virtual antlrcpp::Any visitTdl(TdlParser::TdlContext *context) = 0;

    virtual antlrcpp::Any visitGlobal_scope(TdlParser::Global_scopeContext *context) = 0;

    virtual antlrcpp::Any visitProgram(TdlParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitType(TdlParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitMath_operator(TdlParser::Math_operatorContext *context) = 0;

    virtual antlrcpp::Any visitComparison_operator(TdlParser::Comparison_operatorContext *context) = 0;

    virtual antlrcpp::Any visitOp(TdlParser::OpContext *context) = 0;

    virtual antlrcpp::Any visitRow_expr(TdlParser::Row_exprContext *context) = 0;

    virtual antlrcpp::Any visitTable_expr(TdlParser::Table_exprContext *context) = 0;

    virtual antlrcpp::Any visitIf_body(TdlParser::If_bodyContext *context) = 0;

    virtual antlrcpp::Any visitElse_body(TdlParser::Else_bodyContext *context) = 0;

    virtual antlrcpp::Any visitWhile_body(TdlParser::While_bodyContext *context) = 0;

    virtual antlrcpp::Any visitUntil_body(TdlParser::Until_bodyContext *context) = 0;

    virtual antlrcpp::Any visitFor_body_three(TdlParser::For_body_threeContext *context) = 0;

    virtual antlrcpp::Any visitFor_body_in(TdlParser::For_body_inContext *context) = 0;

    virtual antlrcpp::Any visitExpr_parenthesis(TdlParser::Expr_parenthesisContext *context) = 0;

    virtual antlrcpp::Any visitExpr_true_constant(TdlParser::Expr_true_constantContext *context) = 0;

    virtual antlrcpp::Any visitExpr_float_constant(TdlParser::Expr_float_constantContext *context) = 0;

    virtual antlrcpp::Any visitExpr_operator(TdlParser::Expr_operatorContext *context) = 0;

    virtual antlrcpp::Any visitExpr_name(TdlParser::Expr_nameContext *context) = 0;

    virtual antlrcpp::Any visitExpr_negation(TdlParser::Expr_negationContext *context) = 0;

    virtual antlrcpp::Any visitExpr_integer_constant(TdlParser::Expr_integer_constantContext *context) = 0;

    virtual antlrcpp::Any visitExpr_false_constant(TdlParser::Expr_false_constantContext *context) = 0;

    virtual antlrcpp::Any visitExpr_cast(TdlParser::Expr_castContext *context) = 0;

    virtual antlrcpp::Any visitExpr_table_expr(TdlParser::Expr_table_exprContext *context) = 0;

    virtual antlrcpp::Any visitExpr_row_expr(TdlParser::Expr_row_exprContext *context) = 0;

    virtual antlrcpp::Any visitExpr_function_call(TdlParser::Expr_function_callContext *context) = 0;

    virtual antlrcpp::Any visitExpr_element_access(TdlParser::Expr_element_accessContext *context) = 0;

    virtual antlrcpp::Any visitExpr_string_constant(TdlParser::Expr_string_constantContext *context) = 0;

    virtual antlrcpp::Any visitExpr_scan_call(TdlParser::Expr_scan_callContext *context) = 0;

    virtual antlrcpp::Any visitBlock_statement(TdlParser::Block_statementContext *context) = 0;

    virtual antlrcpp::Any visitStatement(TdlParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitPrint_expr(TdlParser::Print_exprContext *context) = 0;

    virtual antlrcpp::Any visitPrint_signature(TdlParser::Print_signatureContext *context) = 0;

    virtual antlrcpp::Any visitBuiltin_print(TdlParser::Builtin_printContext *context) = 0;

    virtual antlrcpp::Any visitBuiltin_scan(TdlParser::Builtin_scanContext *context) = 0;

    virtual antlrcpp::Any visitRet(TdlParser::RetContext *context) = 0;

    virtual antlrcpp::Any visitBlock(TdlParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitSignature_arguments(TdlParser::Signature_argumentsContext *context) = 0;

    virtual antlrcpp::Any visitFunction_signature(TdlParser::Function_signatureContext *context) = 0;

    virtual antlrcpp::Any visitFunction_definition(TdlParser::Function_definitionContext *context) = 0;

    virtual antlrcpp::Any visitCall_signature(TdlParser::Call_signatureContext *context) = 0;

    virtual antlrcpp::Any visitFunction_call(TdlParser::Function_callContext *context) = 0;


};

