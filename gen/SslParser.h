
// Generated from Ssl.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  SslParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, NUMBER = 2, VECTOR = 3, MATRIX = 4, BEGIN = 5, END = 6, PRINT = 7, 
    SCAN = 8, IF = 9, ELSE = 10, FOR = 11, WHILE = 12, UNTIL = 13, RETURN = 14, 
    NAME = 15, NUMBER_CONSTANT = 16, WS = 17, COMMENT = 18, COMMENT_MULTILINE = 19, 
    OPEN_PARENTHESIS = 20, CLOSE_PARENTHESIS = 21, OPEN_BRACKET = 22, CLOSE_BRACKET = 23, 
    OPEN_BRACE = 24, CLOSE_BRACE = 25, COMMA = 26, PLUS = 27, MINUS = 28, 
    MULTIPLY = 29, DIVISION = 30, PIPE = 31, NEGATION = 32, EQUAL = 33, 
    NOT_EQUAL = 34, LESS = 35, GREAT = 36, ASSIGN = 37, GREAT_EQ = 38, LESS_EQ = 39, 
    SEMI = 40, STRING = 41
  };

  enum {
    RuleSsl = 0, RuleProgram = 1, RuleType = 2, RuleMath_operator = 3, RuleComparison_operator = 4, 
    RuleOperator = 5, RuleVector_cast = 6, RuleMatrix_cast = 7, RuleNumber_cast = 8, 
    RuleGeneric_cast = 9, RuleNumber_or_var = 10, RuleVector_expr = 11, 
    RuleVector_or_var = 12, RuleMatrix_expr = 13, RuleIf_body = 14, RuleElse_body = 15, 
    RuleWhile_body = 16, RuleUntil_body = 17, RuleFor_body = 18, RuleExpr = 19, 
    RuleBlock_statement = 20, RuleStatement = 21, RuleReturn = 22, RuleBlock = 23, 
    RuleSignature_arguments = 24, RuleSub_program_signature = 25, RuleSub_program_definition = 26, 
    RuleCall_signature = 27, RuleSub_program_call = 28
  };

  explicit SslParser(antlr4::TokenStream *input);

  SslParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~SslParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class SslContext;
  class ProgramContext;
  class TypeContext;
  class Math_operatorContext;
  class Comparison_operatorContext;
  class OperatorContext;
  class Vector_castContext;
  class Matrix_castContext;
  class Number_castContext;
  class Generic_castContext;
  class Number_or_varContext;
  class Vector_exprContext;
  class Vector_or_varContext;
  class Matrix_exprContext;
  class If_bodyContext;
  class Else_bodyContext;
  class While_bodyContext;
  class Until_bodyContext;
  class For_bodyContext;
  class ExprContext;
  class Block_statementContext;
  class StatementContext;
  class ReturnContext;
  class BlockContext;
  class Signature_argumentsContext;
  class Sub_program_signatureContext;
  class Sub_program_definitionContext;
  class Call_signatureContext;
  class Sub_program_callContext; 

  class  SslContext : public antlr4::ParserRuleContext {
  public:
    SslContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgramContext *program();
    std::vector<Sub_program_definitionContext *> sub_program_definition();
    Sub_program_definitionContext* sub_program_definition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SslContext* ssl();

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *VECTOR();
    antlr4::tree::TerminalNode *MATRIX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  Math_operatorContext : public antlr4::ParserRuleContext {
  public:
    Math_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *MULTIPLY();
    antlr4::tree::TerminalNode *DIVISION();
    antlr4::tree::TerminalNode *ASSIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Math_operatorContext* math_operator();

  class  Comparison_operatorContext : public antlr4::ParserRuleContext {
  public:
    Comparison_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *NOT_EQUAL();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *GREAT();
    antlr4::tree::TerminalNode *GREAT_EQ();
    antlr4::tree::TerminalNode *LESS_EQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comparison_operatorContext* comparison_operator();

  class  OperatorContext : public antlr4::ParserRuleContext {
  public:
    OperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Comparison_operatorContext *comparison_operator();
    Math_operatorContext *math_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorContext* operator_();

  class  Vector_castContext : public antlr4::ParserRuleContext {
  public:
    Vector_castContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENTHESIS();
    antlr4::tree::TerminalNode *VECTOR();
    antlr4::tree::TerminalNode *CLOSE_PARENTHESIS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Vector_castContext* vector_cast();

  class  Matrix_castContext : public antlr4::ParserRuleContext {
  public:
    Matrix_castContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENTHESIS();
    antlr4::tree::TerminalNode *MATRIX();
    antlr4::tree::TerminalNode *CLOSE_PARENTHESIS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Matrix_castContext* matrix_cast();

  class  Number_castContext : public antlr4::ParserRuleContext {
  public:
    Number_castContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENTHESIS();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *CLOSE_PARENTHESIS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Number_castContext* number_cast();

  class  Generic_castContext : public antlr4::ParserRuleContext {
  public:
    Generic_castContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Vector_castContext *vector_cast();
    Matrix_castContext *matrix_cast();
    Number_castContext *number_cast();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generic_castContext* generic_cast();

  class  Number_or_varContext : public antlr4::ParserRuleContext {
  public:
    Number_or_varContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER_CONSTANT();
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Number_or_varContext* number_or_var();

  class  Vector_exprContext : public antlr4::ParserRuleContext {
  public:
    Vector_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACE();
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    std::vector<Number_or_varContext *> number_or_var();
    Number_or_varContext* number_or_var(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Vector_exprContext* vector_expr();

  class  Vector_or_varContext : public antlr4::ParserRuleContext {
  public:
    Vector_or_varContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Vector_exprContext *vector_expr();
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Vector_or_varContext* vector_or_var();

  class  Matrix_exprContext : public antlr4::ParserRuleContext {
  public:
    Matrix_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACE();
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    std::vector<Vector_or_varContext *> vector_or_var();
    Vector_or_varContext* vector_or_var(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Matrix_exprContext* matrix_expr();

  class  If_bodyContext : public antlr4::ParserRuleContext {
  public:
    If_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *OPEN_PARENTHESIS();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CLOSE_PARENTHESIS();
    BlockContext *block();
    Else_bodyContext *else_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_bodyContext* if_body();

  class  Else_bodyContext : public antlr4::ParserRuleContext {
  public:
    Else_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    If_bodyContext *if_body();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Else_bodyContext* else_body();

  class  While_bodyContext : public antlr4::ParserRuleContext {
  public:
    While_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *OPEN_PARENTHESIS();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CLOSE_PARENTHESIS();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_bodyContext* while_body();

  class  Until_bodyContext : public antlr4::ParserRuleContext {
  public:
    Until_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *OPEN_PARENTHESIS();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CLOSE_PARENTHESIS();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Until_bodyContext* until_body();

  class  For_bodyContext : public antlr4::ParserRuleContext {
  public:
    For_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *OPEN_PARENTHESIS();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENTHESIS();
    BlockContext *block();
    StatementContext *statement();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_bodyContext* for_body();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Vector_length_exprContext : public ExprContext {
  public:
    Vector_length_exprContext(ExprContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> PIPE();
    antlr4::tree::TerminalNode* PIPE(size_t i);
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_castContext : public ExprContext {
  public:
    Expr_castContext(ExprContext *ctx);

    Generic_castContext *generic_cast();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_parenthesisContext : public ExprContext {
  public:
    Expr_parenthesisContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *OPEN_PARENTHESIS();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CLOSE_PARENTHESIS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_sub_callContext : public ExprContext {
  public:
    Expr_sub_callContext(ExprContext *ctx);

    Sub_program_callContext *sub_program_call();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_operatorContext : public ExprContext {
  public:
    Expr_operatorContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    OperatorContext *operator_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_nameContext : public ExprContext {
  public:
    Expr_nameContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_negationContext : public ExprContext {
  public:
    Expr_negationContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NEGATION();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Epxr_element_accessContext : public ExprContext {
  public:
    Epxr_element_accessContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Number_or_varContext *number_or_var();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  Block_statementContext : public antlr4::ParserRuleContext {
  public:
    Block_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    For_bodyContext *for_body();
    While_bodyContext *while_body();
    Until_bodyContext *until_body();
    If_bodyContext *if_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_statementContext* block_statement();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();
    TypeContext *type();
    Sub_program_callContext *sub_program_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  ReturnContext : public antlr4::ParserRuleContext {
  public:
    ReturnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnContext* return_();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    std::vector<Block_statementContext *> block_statement();
    Block_statementContext* block_statement(size_t i);
    ReturnContext *return_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  Signature_argumentsContext : public antlr4::ParserRuleContext {
  public:
    Signature_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *COMMA();
    Signature_argumentsContext *signature_arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signature_argumentsContext* signature_arguments();

  class  Sub_program_signatureContext : public antlr4::ParserRuleContext {
  public:
    Sub_program_signatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENTHESIS();
    Signature_argumentsContext *signature_arguments();
    antlr4::tree::TerminalNode *CLOSE_PARENTHESIS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sub_program_signatureContext* sub_program_signature();

  class  Sub_program_definitionContext : public antlr4::ParserRuleContext {
  public:
    Sub_program_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    Sub_program_signatureContext *sub_program_signature();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sub_program_definitionContext* sub_program_definition();

  class  Call_signatureContext : public antlr4::ParserRuleContext {
  public:
    Call_signatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENTHESIS();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENTHESIS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Call_signatureContext* call_signature();

  class  Sub_program_callContext : public antlr4::ParserRuleContext {
  public:
    Sub_program_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    Call_signatureContext *call_signature();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sub_program_callContext* sub_program_call();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

