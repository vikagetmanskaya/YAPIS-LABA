
// Generated from Ssl.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "SslParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by SslParser.
 */
class  SslListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSsl(SslParser::SslContext *ctx) = 0;
  virtual void exitSsl(SslParser::SslContext *ctx) = 0;

  virtual void enterProgram(SslParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(SslParser::ProgramContext *ctx) = 0;

  virtual void enterType(SslParser::TypeContext *ctx) = 0;
  virtual void exitType(SslParser::TypeContext *ctx) = 0;

  virtual void enterMath_operator(SslParser::Math_operatorContext *ctx) = 0;
  virtual void exitMath_operator(SslParser::Math_operatorContext *ctx) = 0;

  virtual void enterComparison_operator(SslParser::Comparison_operatorContext *ctx) = 0;
  virtual void exitComparison_operator(SslParser::Comparison_operatorContext *ctx) = 0;

  virtual void enterOperator(SslParser::OperatorContext *ctx) = 0;
  virtual void exitOperator(SslParser::OperatorContext *ctx) = 0;

  virtual void enterVector_cast(SslParser::Vector_castContext *ctx) = 0;
  virtual void exitVector_cast(SslParser::Vector_castContext *ctx) = 0;

  virtual void enterMatrix_cast(SslParser::Matrix_castContext *ctx) = 0;
  virtual void exitMatrix_cast(SslParser::Matrix_castContext *ctx) = 0;

  virtual void enterNumber_cast(SslParser::Number_castContext *ctx) = 0;
  virtual void exitNumber_cast(SslParser::Number_castContext *ctx) = 0;

  virtual void enterGeneric_cast(SslParser::Generic_castContext *ctx) = 0;
  virtual void exitGeneric_cast(SslParser::Generic_castContext *ctx) = 0;

  virtual void enterNumber_or_var(SslParser::Number_or_varContext *ctx) = 0;
  virtual void exitNumber_or_var(SslParser::Number_or_varContext *ctx) = 0;

  virtual void enterVector_expr(SslParser::Vector_exprContext *ctx) = 0;
  virtual void exitVector_expr(SslParser::Vector_exprContext *ctx) = 0;

  virtual void enterVector_or_var(SslParser::Vector_or_varContext *ctx) = 0;
  virtual void exitVector_or_var(SslParser::Vector_or_varContext *ctx) = 0;

  virtual void enterMatrix_expr(SslParser::Matrix_exprContext *ctx) = 0;
  virtual void exitMatrix_expr(SslParser::Matrix_exprContext *ctx) = 0;

  virtual void enterIf_body(SslParser::If_bodyContext *ctx) = 0;
  virtual void exitIf_body(SslParser::If_bodyContext *ctx) = 0;

  virtual void enterElse_body(SslParser::Else_bodyContext *ctx) = 0;
  virtual void exitElse_body(SslParser::Else_bodyContext *ctx) = 0;

  virtual void enterWhile_body(SslParser::While_bodyContext *ctx) = 0;
  virtual void exitWhile_body(SslParser::While_bodyContext *ctx) = 0;

  virtual void enterUntil_body(SslParser::Until_bodyContext *ctx) = 0;
  virtual void exitUntil_body(SslParser::Until_bodyContext *ctx) = 0;

  virtual void enterFor_body(SslParser::For_bodyContext *ctx) = 0;
  virtual void exitFor_body(SslParser::For_bodyContext *ctx) = 0;

  virtual void enterVector_length_expr(SslParser::Vector_length_exprContext *ctx) = 0;
  virtual void exitVector_length_expr(SslParser::Vector_length_exprContext *ctx) = 0;

  virtual void enterExpr_cast(SslParser::Expr_castContext *ctx) = 0;
  virtual void exitExpr_cast(SslParser::Expr_castContext *ctx) = 0;

  virtual void enterExpr_parenthesis(SslParser::Expr_parenthesisContext *ctx) = 0;
  virtual void exitExpr_parenthesis(SslParser::Expr_parenthesisContext *ctx) = 0;

  virtual void enterExpr_sub_call(SslParser::Expr_sub_callContext *ctx) = 0;
  virtual void exitExpr_sub_call(SslParser::Expr_sub_callContext *ctx) = 0;

  virtual void enterExpr_operator(SslParser::Expr_operatorContext *ctx) = 0;
  virtual void exitExpr_operator(SslParser::Expr_operatorContext *ctx) = 0;

  virtual void enterExpr_name(SslParser::Expr_nameContext *ctx) = 0;
  virtual void exitExpr_name(SslParser::Expr_nameContext *ctx) = 0;

  virtual void enterExpr_negation(SslParser::Expr_negationContext *ctx) = 0;
  virtual void exitExpr_negation(SslParser::Expr_negationContext *ctx) = 0;

  virtual void enterEpxr_element_access(SslParser::Epxr_element_accessContext *ctx) = 0;
  virtual void exitEpxr_element_access(SslParser::Epxr_element_accessContext *ctx) = 0;

  virtual void enterBlock_statement(SslParser::Block_statementContext *ctx) = 0;
  virtual void exitBlock_statement(SslParser::Block_statementContext *ctx) = 0;

  virtual void enterStatement(SslParser::StatementContext *ctx) = 0;
  virtual void exitStatement(SslParser::StatementContext *ctx) = 0;

  virtual void enterReturn(SslParser::ReturnContext *ctx) = 0;
  virtual void exitReturn(SslParser::ReturnContext *ctx) = 0;

  virtual void enterBlock(SslParser::BlockContext *ctx) = 0;
  virtual void exitBlock(SslParser::BlockContext *ctx) = 0;

  virtual void enterSignature_arguments(SslParser::Signature_argumentsContext *ctx) = 0;
  virtual void exitSignature_arguments(SslParser::Signature_argumentsContext *ctx) = 0;

  virtual void enterSub_program_signature(SslParser::Sub_program_signatureContext *ctx) = 0;
  virtual void exitSub_program_signature(SslParser::Sub_program_signatureContext *ctx) = 0;

  virtual void enterSub_program_definition(SslParser::Sub_program_definitionContext *ctx) = 0;
  virtual void exitSub_program_definition(SslParser::Sub_program_definitionContext *ctx) = 0;

  virtual void enterCall_signature(SslParser::Call_signatureContext *ctx) = 0;
  virtual void exitCall_signature(SslParser::Call_signatureContext *ctx) = 0;

  virtual void enterSub_program_call(SslParser::Sub_program_callContext *ctx) = 0;
  virtual void exitSub_program_call(SslParser::Sub_program_callContext *ctx) = 0;


};

