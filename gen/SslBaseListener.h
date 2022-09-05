
// Generated from Ssl.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "SslListener.h"


/**
 * This class provides an empty implementation of SslListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SslBaseListener : public SslListener {
public:

  virtual void enterSsl(SslParser::SslContext * /*ctx*/) override { }
  virtual void exitSsl(SslParser::SslContext * /*ctx*/) override { }

  virtual void enterProgram(SslParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(SslParser::ProgramContext * /*ctx*/) override { }

  virtual void enterType(SslParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(SslParser::TypeContext * /*ctx*/) override { }

  virtual void enterMath_operator(SslParser::Math_operatorContext * /*ctx*/) override { }
  virtual void exitMath_operator(SslParser::Math_operatorContext * /*ctx*/) override { }

  virtual void enterComparison_operator(SslParser::Comparison_operatorContext * /*ctx*/) override { }
  virtual void exitComparison_operator(SslParser::Comparison_operatorContext * /*ctx*/) override { }

  virtual void enterOperator(SslParser::OperatorContext * /*ctx*/) override { }
  virtual void exitOperator(SslParser::OperatorContext * /*ctx*/) override { }

  virtual void enterVector_cast(SslParser::Vector_castContext * /*ctx*/) override { }
  virtual void exitVector_cast(SslParser::Vector_castContext * /*ctx*/) override { }

  virtual void enterMatrix_cast(SslParser::Matrix_castContext * /*ctx*/) override { }
  virtual void exitMatrix_cast(SslParser::Matrix_castContext * /*ctx*/) override { }

  virtual void enterNumber_cast(SslParser::Number_castContext * /*ctx*/) override { }
  virtual void exitNumber_cast(SslParser::Number_castContext * /*ctx*/) override { }

  virtual void enterGeneric_cast(SslParser::Generic_castContext * /*ctx*/) override { }
  virtual void exitGeneric_cast(SslParser::Generic_castContext * /*ctx*/) override { }

  virtual void enterNumber_or_var(SslParser::Number_or_varContext * /*ctx*/) override { }
  virtual void exitNumber_or_var(SslParser::Number_or_varContext * /*ctx*/) override { }

  virtual void enterVector_expr(SslParser::Vector_exprContext * /*ctx*/) override { }
  virtual void exitVector_expr(SslParser::Vector_exprContext * /*ctx*/) override { }

  virtual void enterVector_or_var(SslParser::Vector_or_varContext * /*ctx*/) override { }
  virtual void exitVector_or_var(SslParser::Vector_or_varContext * /*ctx*/) override { }

  virtual void enterMatrix_expr(SslParser::Matrix_exprContext * /*ctx*/) override { }
  virtual void exitMatrix_expr(SslParser::Matrix_exprContext * /*ctx*/) override { }

  virtual void enterIf_body(SslParser::If_bodyContext * /*ctx*/) override { }
  virtual void exitIf_body(SslParser::If_bodyContext * /*ctx*/) override { }

  virtual void enterElse_body(SslParser::Else_bodyContext * /*ctx*/) override { }
  virtual void exitElse_body(SslParser::Else_bodyContext * /*ctx*/) override { }

  virtual void enterWhile_body(SslParser::While_bodyContext * /*ctx*/) override { }
  virtual void exitWhile_body(SslParser::While_bodyContext * /*ctx*/) override { }

  virtual void enterUntil_body(SslParser::Until_bodyContext * /*ctx*/) override { }
  virtual void exitUntil_body(SslParser::Until_bodyContext * /*ctx*/) override { }

  virtual void enterFor_body(SslParser::For_bodyContext * /*ctx*/) override { }
  virtual void exitFor_body(SslParser::For_bodyContext * /*ctx*/) override { }

  virtual void enterVector_length_expr(SslParser::Vector_length_exprContext * /*ctx*/) override { }
  virtual void exitVector_length_expr(SslParser::Vector_length_exprContext * /*ctx*/) override { }

  virtual void enterExpr_cast(SslParser::Expr_castContext * /*ctx*/) override { }
  virtual void exitExpr_cast(SslParser::Expr_castContext * /*ctx*/) override { }

  virtual void enterExpr_parenthesis(SslParser::Expr_parenthesisContext * /*ctx*/) override { }
  virtual void exitExpr_parenthesis(SslParser::Expr_parenthesisContext * /*ctx*/) override { }

  virtual void enterExpr_sub_call(SslParser::Expr_sub_callContext * /*ctx*/) override { }
  virtual void exitExpr_sub_call(SslParser::Expr_sub_callContext * /*ctx*/) override { }

  virtual void enterExpr_operator(SslParser::Expr_operatorContext * /*ctx*/) override { }
  virtual void exitExpr_operator(SslParser::Expr_operatorContext * /*ctx*/) override { }

  virtual void enterExpr_name(SslParser::Expr_nameContext * /*ctx*/) override { }
  virtual void exitExpr_name(SslParser::Expr_nameContext * /*ctx*/) override { }

  virtual void enterExpr_negation(SslParser::Expr_negationContext * /*ctx*/) override { }
  virtual void exitExpr_negation(SslParser::Expr_negationContext * /*ctx*/) override { }

  virtual void enterEpxr_element_access(SslParser::Epxr_element_accessContext * /*ctx*/) override { }
  virtual void exitEpxr_element_access(SslParser::Epxr_element_accessContext * /*ctx*/) override { }

  virtual void enterBlock_statement(SslParser::Block_statementContext * /*ctx*/) override { }
  virtual void exitBlock_statement(SslParser::Block_statementContext * /*ctx*/) override { }

  virtual void enterStatement(SslParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(SslParser::StatementContext * /*ctx*/) override { }

  virtual void enterReturn(SslParser::ReturnContext * /*ctx*/) override { }
  virtual void exitReturn(SslParser::ReturnContext * /*ctx*/) override { }

  virtual void enterBlock(SslParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(SslParser::BlockContext * /*ctx*/) override { }

  virtual void enterSignature_arguments(SslParser::Signature_argumentsContext * /*ctx*/) override { }
  virtual void exitSignature_arguments(SslParser::Signature_argumentsContext * /*ctx*/) override { }

  virtual void enterSub_program_signature(SslParser::Sub_program_signatureContext * /*ctx*/) override { }
  virtual void exitSub_program_signature(SslParser::Sub_program_signatureContext * /*ctx*/) override { }

  virtual void enterSub_program_definition(SslParser::Sub_program_definitionContext * /*ctx*/) override { }
  virtual void exitSub_program_definition(SslParser::Sub_program_definitionContext * /*ctx*/) override { }

  virtual void enterCall_signature(SslParser::Call_signatureContext * /*ctx*/) override { }
  virtual void exitCall_signature(SslParser::Call_signatureContext * /*ctx*/) override { }

  virtual void enterSub_program_call(SslParser::Sub_program_callContext * /*ctx*/) override { }
  virtual void exitSub_program_call(SslParser::Sub_program_callContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

