
// Generated from Ssl.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "SslParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SslParser.
 */
class  SslVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SslParser.
   */
    virtual std::any visitSsl(SslParser::SslContext *context) = 0;

    virtual std::any visitProgram(SslParser::ProgramContext *context) = 0;

    virtual std::any visitType(SslParser::TypeContext *context) = 0;

    virtual std::any visitMath_operator(SslParser::Math_operatorContext *context) = 0;

    virtual std::any visitComparison_operator(SslParser::Comparison_operatorContext *context) = 0;

    virtual std::any visitOperator(SslParser::OperatorContext *context) = 0;

    virtual std::any visitVector_cast(SslParser::Vector_castContext *context) = 0;

    virtual std::any visitMatrix_cast(SslParser::Matrix_castContext *context) = 0;

    virtual std::any visitNumber_cast(SslParser::Number_castContext *context) = 0;

    virtual std::any visitGeneric_cast(SslParser::Generic_castContext *context) = 0;

    virtual std::any visitNumber_or_var(SslParser::Number_or_varContext *context) = 0;

    virtual std::any visitVector_expr(SslParser::Vector_exprContext *context) = 0;

    virtual std::any visitVector_or_var(SslParser::Vector_or_varContext *context) = 0;

    virtual std::any visitMatrix_expr(SslParser::Matrix_exprContext *context) = 0;

    virtual std::any visitIf_body(SslParser::If_bodyContext *context) = 0;

    virtual std::any visitElse_body(SslParser::Else_bodyContext *context) = 0;

    virtual std::any visitWhile_body(SslParser::While_bodyContext *context) = 0;

    virtual std::any visitUntil_body(SslParser::Until_bodyContext *context) = 0;

    virtual std::any visitFor_body(SslParser::For_bodyContext *context) = 0;

    virtual std::any visitVector_length_expr(SslParser::Vector_length_exprContext *context) = 0;

    virtual std::any visitExpr_cast(SslParser::Expr_castContext *context) = 0;

    virtual std::any visitExpr_parenthesis(SslParser::Expr_parenthesisContext *context) = 0;

    virtual std::any visitExpr_sub_call(SslParser::Expr_sub_callContext *context) = 0;

    virtual std::any visitExpr_operator(SslParser::Expr_operatorContext *context) = 0;

    virtual std::any visitExpr_name(SslParser::Expr_nameContext *context) = 0;

    virtual std::any visitExpr_negation(SslParser::Expr_negationContext *context) = 0;

    virtual std::any visitEpxr_element_access(SslParser::Epxr_element_accessContext *context) = 0;

    virtual std::any visitBlock_statement(SslParser::Block_statementContext *context) = 0;

    virtual std::any visitStatement(SslParser::StatementContext *context) = 0;

    virtual std::any visitReturn(SslParser::ReturnContext *context) = 0;

    virtual std::any visitBlock(SslParser::BlockContext *context) = 0;

    virtual std::any visitSignature_arguments(SslParser::Signature_argumentsContext *context) = 0;

    virtual std::any visitSub_program_signature(SslParser::Sub_program_signatureContext *context) = 0;

    virtual std::any visitSub_program_definition(SslParser::Sub_program_definitionContext *context) = 0;

    virtual std::any visitCall_signature(SslParser::Call_signatureContext *context) = 0;

    virtual std::any visitSub_program_call(SslParser::Sub_program_callContext *context) = 0;


};

