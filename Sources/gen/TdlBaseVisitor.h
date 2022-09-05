
// Generated from Tdl.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "TdlVisitor.h"


/**
 * This class provides an empty implementation of TdlVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  TdlBaseVisitor : public TdlVisitor {
public:

  virtual antlrcpp::Any visitTdl(TdlParser::TdlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGlobal_scope(TdlParser::Global_scopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProgram(TdlParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(TdlParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMath_operator(TdlParser::Math_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparison_operator(TdlParser::Comparison_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp(TdlParser::OpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRow_expr(TdlParser::Row_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_expr(TdlParser::Table_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_body(TdlParser::If_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElse_body(TdlParser::Else_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_body(TdlParser::While_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUntil_body(TdlParser::Until_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_body_three(TdlParser::For_body_threeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_body_in(TdlParser::For_body_inContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_parenthesis(TdlParser::Expr_parenthesisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_true_constant(TdlParser::Expr_true_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_float_constant(TdlParser::Expr_float_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_operator(TdlParser::Expr_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_name(TdlParser::Expr_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_negation(TdlParser::Expr_negationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_integer_constant(TdlParser::Expr_integer_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_false_constant(TdlParser::Expr_false_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_cast(TdlParser::Expr_castContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_table_expr(TdlParser::Expr_table_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_row_expr(TdlParser::Expr_row_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_function_call(TdlParser::Expr_function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_element_access(TdlParser::Expr_element_accessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_string_constant(TdlParser::Expr_string_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_scan_call(TdlParser::Expr_scan_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock_statement(TdlParser::Block_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(TdlParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint_expr(TdlParser::Print_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint_signature(TdlParser::Print_signatureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBuiltin_print(TdlParser::Builtin_printContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBuiltin_scan(TdlParser::Builtin_scanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRet(TdlParser::RetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(TdlParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignature_arguments(TdlParser::Signature_argumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_signature(TdlParser::Function_signatureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_definition(TdlParser::Function_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_signature(TdlParser::Call_signatureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_call(TdlParser::Function_callContext *ctx) override {
    return visitChildren(ctx);
  }


};

