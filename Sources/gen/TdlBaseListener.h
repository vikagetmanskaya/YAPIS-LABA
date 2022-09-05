
// Generated from Tdl.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "TdlListener.h"


/**
 * This class provides an empty implementation of TdlListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TdlBaseListener : public TdlListener {
public:

  virtual void enterTdl(TdlParser::TdlContext * /*ctx*/) override { }
  virtual void exitTdl(TdlParser::TdlContext * /*ctx*/) override { }

  virtual void enterGlobal_scope(TdlParser::Global_scopeContext * /*ctx*/) override { }
  virtual void exitGlobal_scope(TdlParser::Global_scopeContext * /*ctx*/) override { }

  virtual void enterProgram(TdlParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(TdlParser::ProgramContext * /*ctx*/) override { }

  virtual void enterType(TdlParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(TdlParser::TypeContext * /*ctx*/) override { }

  virtual void enterMath_operator(TdlParser::Math_operatorContext * /*ctx*/) override { }
  virtual void exitMath_operator(TdlParser::Math_operatorContext * /*ctx*/) override { }

  virtual void enterComparison_operator(TdlParser::Comparison_operatorContext * /*ctx*/) override { }
  virtual void exitComparison_operator(TdlParser::Comparison_operatorContext * /*ctx*/) override { }

  virtual void enterOp(TdlParser::OpContext * /*ctx*/) override { }
  virtual void exitOp(TdlParser::OpContext * /*ctx*/) override { }

  virtual void enterRow_expr(TdlParser::Row_exprContext * /*ctx*/) override { }
  virtual void exitRow_expr(TdlParser::Row_exprContext * /*ctx*/) override { }

  virtual void enterTable_expr(TdlParser::Table_exprContext * /*ctx*/) override { }
  virtual void exitTable_expr(TdlParser::Table_exprContext * /*ctx*/) override { }

  virtual void enterIf_body(TdlParser::If_bodyContext * /*ctx*/) override { }
  virtual void exitIf_body(TdlParser::If_bodyContext * /*ctx*/) override { }

  virtual void enterElse_body(TdlParser::Else_bodyContext * /*ctx*/) override { }
  virtual void exitElse_body(TdlParser::Else_bodyContext * /*ctx*/) override { }

  virtual void enterWhile_body(TdlParser::While_bodyContext * /*ctx*/) override { }
  virtual void exitWhile_body(TdlParser::While_bodyContext * /*ctx*/) override { }

  virtual void enterUntil_body(TdlParser::Until_bodyContext * /*ctx*/) override { }
  virtual void exitUntil_body(TdlParser::Until_bodyContext * /*ctx*/) override { }

  virtual void enterFor_body_three(TdlParser::For_body_threeContext * /*ctx*/) override { }
  virtual void exitFor_body_three(TdlParser::For_body_threeContext * /*ctx*/) override { }

  virtual void enterFor_body_in(TdlParser::For_body_inContext * /*ctx*/) override { }
  virtual void exitFor_body_in(TdlParser::For_body_inContext * /*ctx*/) override { }

  virtual void enterExpr_parenthesis(TdlParser::Expr_parenthesisContext * /*ctx*/) override { }
  virtual void exitExpr_parenthesis(TdlParser::Expr_parenthesisContext * /*ctx*/) override { }

  virtual void enterExpr_true_constant(TdlParser::Expr_true_constantContext * /*ctx*/) override { }
  virtual void exitExpr_true_constant(TdlParser::Expr_true_constantContext * /*ctx*/) override { }

  virtual void enterExpr_float_constant(TdlParser::Expr_float_constantContext * /*ctx*/) override { }
  virtual void exitExpr_float_constant(TdlParser::Expr_float_constantContext * /*ctx*/) override { }

  virtual void enterExpr_operator(TdlParser::Expr_operatorContext * /*ctx*/) override { }
  virtual void exitExpr_operator(TdlParser::Expr_operatorContext * /*ctx*/) override { }

  virtual void enterExpr_name(TdlParser::Expr_nameContext * /*ctx*/) override { }
  virtual void exitExpr_name(TdlParser::Expr_nameContext * /*ctx*/) override { }

  virtual void enterExpr_negation(TdlParser::Expr_negationContext * /*ctx*/) override { }
  virtual void exitExpr_negation(TdlParser::Expr_negationContext * /*ctx*/) override { }

  virtual void enterExpr_integer_constant(TdlParser::Expr_integer_constantContext * /*ctx*/) override { }
  virtual void exitExpr_integer_constant(TdlParser::Expr_integer_constantContext * /*ctx*/) override { }

  virtual void enterExpr_false_constant(TdlParser::Expr_false_constantContext * /*ctx*/) override { }
  virtual void exitExpr_false_constant(TdlParser::Expr_false_constantContext * /*ctx*/) override { }

  virtual void enterExpr_cast(TdlParser::Expr_castContext * /*ctx*/) override { }
  virtual void exitExpr_cast(TdlParser::Expr_castContext * /*ctx*/) override { }

  virtual void enterExpr_table_expr(TdlParser::Expr_table_exprContext * /*ctx*/) override { }
  virtual void exitExpr_table_expr(TdlParser::Expr_table_exprContext * /*ctx*/) override { }

  virtual void enterExpr_row_expr(TdlParser::Expr_row_exprContext * /*ctx*/) override { }
  virtual void exitExpr_row_expr(TdlParser::Expr_row_exprContext * /*ctx*/) override { }

  virtual void enterExpr_function_call(TdlParser::Expr_function_callContext * /*ctx*/) override { }
  virtual void exitExpr_function_call(TdlParser::Expr_function_callContext * /*ctx*/) override { }

  virtual void enterExpr_element_access(TdlParser::Expr_element_accessContext * /*ctx*/) override { }
  virtual void exitExpr_element_access(TdlParser::Expr_element_accessContext * /*ctx*/) override { }

  virtual void enterExpr_string_constant(TdlParser::Expr_string_constantContext * /*ctx*/) override { }
  virtual void exitExpr_string_constant(TdlParser::Expr_string_constantContext * /*ctx*/) override { }

  virtual void enterExpr_scan_call(TdlParser::Expr_scan_callContext * /*ctx*/) override { }
  virtual void exitExpr_scan_call(TdlParser::Expr_scan_callContext * /*ctx*/) override { }

  virtual void enterBlock_statement(TdlParser::Block_statementContext * /*ctx*/) override { }
  virtual void exitBlock_statement(TdlParser::Block_statementContext * /*ctx*/) override { }

  virtual void enterStatement(TdlParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(TdlParser::StatementContext * /*ctx*/) override { }

  virtual void enterPrint_expr(TdlParser::Print_exprContext * /*ctx*/) override { }
  virtual void exitPrint_expr(TdlParser::Print_exprContext * /*ctx*/) override { }

  virtual void enterPrint_signature(TdlParser::Print_signatureContext * /*ctx*/) override { }
  virtual void exitPrint_signature(TdlParser::Print_signatureContext * /*ctx*/) override { }

  virtual void enterBuiltin_print(TdlParser::Builtin_printContext * /*ctx*/) override { }
  virtual void exitBuiltin_print(TdlParser::Builtin_printContext * /*ctx*/) override { }

  virtual void enterBuiltin_scan(TdlParser::Builtin_scanContext * /*ctx*/) override { }
  virtual void exitBuiltin_scan(TdlParser::Builtin_scanContext * /*ctx*/) override { }

  virtual void enterRet(TdlParser::RetContext * /*ctx*/) override { }
  virtual void exitRet(TdlParser::RetContext * /*ctx*/) override { }

  virtual void enterBlock(TdlParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(TdlParser::BlockContext * /*ctx*/) override { }

  virtual void enterSignature_arguments(TdlParser::Signature_argumentsContext * /*ctx*/) override { }
  virtual void exitSignature_arguments(TdlParser::Signature_argumentsContext * /*ctx*/) override { }

  virtual void enterFunction_signature(TdlParser::Function_signatureContext * /*ctx*/) override { }
  virtual void exitFunction_signature(TdlParser::Function_signatureContext * /*ctx*/) override { }

  virtual void enterFunction_definition(TdlParser::Function_definitionContext * /*ctx*/) override { }
  virtual void exitFunction_definition(TdlParser::Function_definitionContext * /*ctx*/) override { }

  virtual void enterCall_signature(TdlParser::Call_signatureContext * /*ctx*/) override { }
  virtual void exitCall_signature(TdlParser::Call_signatureContext * /*ctx*/) override { }

  virtual void enterFunction_call(TdlParser::Function_callContext * /*ctx*/) override { }
  virtual void exitFunction_call(TdlParser::Function_callContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

