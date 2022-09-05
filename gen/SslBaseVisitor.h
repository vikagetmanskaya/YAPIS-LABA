
// Generated from Ssl.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "SslVisitor.h"


/**
 * This class provides an empty implementation of SslVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SslBaseVisitor : public SslVisitor {
public:

  virtual std::any visitSsl(SslParser::SslContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProgram(SslParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(SslParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMath_operator(SslParser::Math_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparison_operator(SslParser::Comparison_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperator(SslParser::OperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVector_cast(SslParser::Vector_castContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatrix_cast(SslParser::Matrix_castContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber_cast(SslParser::Number_castContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneric_cast(SslParser::Generic_castContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber_or_var(SslParser::Number_or_varContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVector_expr(SslParser::Vector_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVector_or_var(SslParser::Vector_or_varContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatrix_expr(SslParser::Matrix_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_body(SslParser::If_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElse_body(SslParser::Else_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile_body(SslParser::While_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUntil_body(SslParser::Until_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_body(SslParser::For_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVector_length_expr(SslParser::Vector_length_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_cast(SslParser::Expr_castContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_parenthesis(SslParser::Expr_parenthesisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_sub_call(SslParser::Expr_sub_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_operator(SslParser::Expr_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_name(SslParser::Expr_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_negation(SslParser::Expr_negationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEpxr_element_access(SslParser::Epxr_element_accessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock_statement(SslParser::Block_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(SslParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturn(SslParser::ReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(SslParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSignature_arguments(SslParser::Signature_argumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSub_program_signature(SslParser::Sub_program_signatureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSub_program_definition(SslParser::Sub_program_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCall_signature(SslParser::Call_signatureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSub_program_call(SslParser::Sub_program_callContext *ctx) override {
    return visitChildren(ctx);
  }


};

