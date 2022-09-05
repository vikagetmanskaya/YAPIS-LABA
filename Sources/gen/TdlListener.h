
// Generated from Tdl.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "TdlParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by TdlParser.
 */
class  TdlListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterTdl(TdlParser::TdlContext *ctx) = 0;
  virtual void exitTdl(TdlParser::TdlContext *ctx) = 0;

  virtual void enterGlobal_scope(TdlParser::Global_scopeContext *ctx) = 0;
  virtual void exitGlobal_scope(TdlParser::Global_scopeContext *ctx) = 0;

  virtual void enterProgram(TdlParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(TdlParser::ProgramContext *ctx) = 0;

  virtual void enterType(TdlParser::TypeContext *ctx) = 0;
  virtual void exitType(TdlParser::TypeContext *ctx) = 0;

  virtual void enterMath_operator(TdlParser::Math_operatorContext *ctx) = 0;
  virtual void exitMath_operator(TdlParser::Math_operatorContext *ctx) = 0;

  virtual void enterComparison_operator(TdlParser::Comparison_operatorContext *ctx) = 0;
  virtual void exitComparison_operator(TdlParser::Comparison_operatorContext *ctx) = 0;

  virtual void enterOp(TdlParser::OpContext *ctx) = 0;
  virtual void exitOp(TdlParser::OpContext *ctx) = 0;

  virtual void enterRow_expr(TdlParser::Row_exprContext *ctx) = 0;
  virtual void exitRow_expr(TdlParser::Row_exprContext *ctx) = 0;

  virtual void enterTable_expr(TdlParser::Table_exprContext *ctx) = 0;
  virtual void exitTable_expr(TdlParser::Table_exprContext *ctx) = 0;

  virtual void enterIf_body(TdlParser::If_bodyContext *ctx) = 0;
  virtual void exitIf_body(TdlParser::If_bodyContext *ctx) = 0;

  virtual void enterElse_body(TdlParser::Else_bodyContext *ctx) = 0;
  virtual void exitElse_body(TdlParser::Else_bodyContext *ctx) = 0;

  virtual void enterWhile_body(TdlParser::While_bodyContext *ctx) = 0;
  virtual void exitWhile_body(TdlParser::While_bodyContext *ctx) = 0;

  virtual void enterUntil_body(TdlParser::Until_bodyContext *ctx) = 0;
  virtual void exitUntil_body(TdlParser::Until_bodyContext *ctx) = 0;

  virtual void enterFor_body_three(TdlParser::For_body_threeContext *ctx) = 0;
  virtual void exitFor_body_three(TdlParser::For_body_threeContext *ctx) = 0;

  virtual void enterFor_body_in(TdlParser::For_body_inContext *ctx) = 0;
  virtual void exitFor_body_in(TdlParser::For_body_inContext *ctx) = 0;

  virtual void enterExpr_parenthesis(TdlParser::Expr_parenthesisContext *ctx) = 0;
  virtual void exitExpr_parenthesis(TdlParser::Expr_parenthesisContext *ctx) = 0;

  virtual void enterExpr_true_constant(TdlParser::Expr_true_constantContext *ctx) = 0;
  virtual void exitExpr_true_constant(TdlParser::Expr_true_constantContext *ctx) = 0;

  virtual void enterExpr_float_constant(TdlParser::Expr_float_constantContext *ctx) = 0;
  virtual void exitExpr_float_constant(TdlParser::Expr_float_constantContext *ctx) = 0;

  virtual void enterExpr_operator(TdlParser::Expr_operatorContext *ctx) = 0;
  virtual void exitExpr_operator(TdlParser::Expr_operatorContext *ctx) = 0;

  virtual void enterExpr_name(TdlParser::Expr_nameContext *ctx) = 0;
  virtual void exitExpr_name(TdlParser::Expr_nameContext *ctx) = 0;

  virtual void enterExpr_negation(TdlParser::Expr_negationContext *ctx) = 0;
  virtual void exitExpr_negation(TdlParser::Expr_negationContext *ctx) = 0;

  virtual void enterExpr_integer_constant(TdlParser::Expr_integer_constantContext *ctx) = 0;
  virtual void exitExpr_integer_constant(TdlParser::Expr_integer_constantContext *ctx) = 0;

  virtual void enterExpr_false_constant(TdlParser::Expr_false_constantContext *ctx) = 0;
  virtual void exitExpr_false_constant(TdlParser::Expr_false_constantContext *ctx) = 0;

  virtual void enterExpr_cast(TdlParser::Expr_castContext *ctx) = 0;
  virtual void exitExpr_cast(TdlParser::Expr_castContext *ctx) = 0;

  virtual void enterExpr_table_expr(TdlParser::Expr_table_exprContext *ctx) = 0;
  virtual void exitExpr_table_expr(TdlParser::Expr_table_exprContext *ctx) = 0;

  virtual void enterExpr_row_expr(TdlParser::Expr_row_exprContext *ctx) = 0;
  virtual void exitExpr_row_expr(TdlParser::Expr_row_exprContext *ctx) = 0;

  virtual void enterExpr_function_call(TdlParser::Expr_function_callContext *ctx) = 0;
  virtual void exitExpr_function_call(TdlParser::Expr_function_callContext *ctx) = 0;

  virtual void enterExpr_element_access(TdlParser::Expr_element_accessContext *ctx) = 0;
  virtual void exitExpr_element_access(TdlParser::Expr_element_accessContext *ctx) = 0;

  virtual void enterExpr_string_constant(TdlParser::Expr_string_constantContext *ctx) = 0;
  virtual void exitExpr_string_constant(TdlParser::Expr_string_constantContext *ctx) = 0;

  virtual void enterExpr_scan_call(TdlParser::Expr_scan_callContext *ctx) = 0;
  virtual void exitExpr_scan_call(TdlParser::Expr_scan_callContext *ctx) = 0;

  virtual void enterBlock_statement(TdlParser::Block_statementContext *ctx) = 0;
  virtual void exitBlock_statement(TdlParser::Block_statementContext *ctx) = 0;

  virtual void enterStatement(TdlParser::StatementContext *ctx) = 0;
  virtual void exitStatement(TdlParser::StatementContext *ctx) = 0;

  virtual void enterPrint_expr(TdlParser::Print_exprContext *ctx) = 0;
  virtual void exitPrint_expr(TdlParser::Print_exprContext *ctx) = 0;

  virtual void enterPrint_signature(TdlParser::Print_signatureContext *ctx) = 0;
  virtual void exitPrint_signature(TdlParser::Print_signatureContext *ctx) = 0;

  virtual void enterBuiltin_print(TdlParser::Builtin_printContext *ctx) = 0;
  virtual void exitBuiltin_print(TdlParser::Builtin_printContext *ctx) = 0;

  virtual void enterBuiltin_scan(TdlParser::Builtin_scanContext *ctx) = 0;
  virtual void exitBuiltin_scan(TdlParser::Builtin_scanContext *ctx) = 0;

  virtual void enterRet(TdlParser::RetContext *ctx) = 0;
  virtual void exitRet(TdlParser::RetContext *ctx) = 0;

  virtual void enterBlock(TdlParser::BlockContext *ctx) = 0;
  virtual void exitBlock(TdlParser::BlockContext *ctx) = 0;

  virtual void enterSignature_arguments(TdlParser::Signature_argumentsContext *ctx) = 0;
  virtual void exitSignature_arguments(TdlParser::Signature_argumentsContext *ctx) = 0;

  virtual void enterFunction_signature(TdlParser::Function_signatureContext *ctx) = 0;
  virtual void exitFunction_signature(TdlParser::Function_signatureContext *ctx) = 0;

  virtual void enterFunction_definition(TdlParser::Function_definitionContext *ctx) = 0;
  virtual void exitFunction_definition(TdlParser::Function_definitionContext *ctx) = 0;

  virtual void enterCall_signature(TdlParser::Call_signatureContext *ctx) = 0;
  virtual void exitCall_signature(TdlParser::Call_signatureContext *ctx) = 0;

  virtual void enterFunction_call(TdlParser::Function_callContext *ctx) = 0;
  virtual void exitFunction_call(TdlParser::Function_callContext *ctx) = 0;


};

