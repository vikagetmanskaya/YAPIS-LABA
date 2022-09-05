
// Generated from Tdl.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  TdlParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, COLUMN = 2, FLOAT = 3, INT = 4, ROW = 5, STRING = 6, TABLE = 7, 
    BOOL = 8, TRUE = 9, FALSE = 10, PRINT = 11, SCAN = 12, IF = 13, ELSE = 14, 
    FOR = 15, WHILE = 16, UNTIL = 17, RETURN = 18, CAST = 19, TO = 20, IN = 21, 
    FUNCTION = 22, RETURNS = 23, BEGIN = 24, END = 25, NAME = 26, INTEGER_CONSTANT = 27, 
    FLOAT_CONSTANT = 28, STRING_LITERAL = 29, WS = 30, COMMENT = 31, COMMENT_MULTILINE = 32, 
    OPEN_PARENTHESIS = 33, CLOSE_PARENTHESIS = 34, OPEN_BRACKET = 35, CLOSE_BRACKET = 36, 
    OPEN_BRACE = 37, CLOSE_BRACE = 38, COMMA = 39, PLUS = 40, MINUS = 41, 
    MULTIPLY = 42, DIVISION = 43, PIPE = 44, NEGATION = 45, EQUAL = 46, 
    NOT_EQUAL = 47, LESS = 48, GREAT = 49, ASSIGN = 50, GREAT_EQ = 51, LESS_EQ = 52, 
    SEMI = 53
  };

  enum {
    RuleTdl = 0, RuleGlobal_scope = 1, RuleProgram = 2, RuleType = 3, RuleMath_operator = 4, 
    RuleComparison_operator = 5, RuleOp = 6, RuleRow_expr = 7, RuleTable_expr = 8, 
    RuleIf_body = 9, RuleElse_body = 10, RuleWhile_body = 11, RuleUntil_body = 12, 
    RuleFor_body = 13, RuleExpr = 14, RuleBlock_statement = 15, RuleStatement = 16, 
    RulePrint_expr = 17, RulePrint_signature = 18, RuleBuiltin_print = 19, 
    RuleBuiltin_scan = 20, RuleRet = 21, RuleBlock = 22, RuleSignature_arguments = 23, 
    RuleFunction_signature = 24, RuleFunction_definition = 25, RuleCall_signature = 26, 
    RuleFunction_call = 27
  };

  TdlParser(antlr4::TokenStream *input);
  ~TdlParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class TdlContext;
  class Global_scopeContext;
  class ProgramContext;
  class TypeContext;
  class Math_operatorContext;
  class Comparison_operatorContext;
  class OpContext;
  class Row_exprContext;
  class Table_exprContext;
  class If_bodyContext;
  class Else_bodyContext;
  class While_bodyContext;
  class Until_bodyContext;
  class For_bodyContext;
  class ExprContext;
  class Block_statementContext;
  class StatementContext;
  class Print_exprContext;
  class Print_signatureContext;
  class Builtin_printContext;
  class Builtin_scanContext;
  class RetContext;
  class BlockContext;
  class Signature_argumentsContext;
  class Function_signatureContext;
  class Function_definitionContext;
  class Call_signatureContext;
  class Function_callContext; 

  class  TdlContext : public antlr4::ParserRuleContext {
  public:
    TdlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgramContext *program();
    antlr4::tree::TerminalNode *EOF();
    std::vector<Global_scopeContext *> global_scope();
    Global_scopeContext* global_scope(size_t i);
    std::vector<Function_definitionContext *> function_definition();
    Function_definitionContext* function_definition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TdlContext* tdl();

  class  Global_scopeContext : public antlr4::ParserRuleContext {
  public:
    Global_scopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Global_scopeContext* global_scope();

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *BOOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Math_operatorContext* math_operator();

  class  Comparison_operatorContext : public antlr4::ParserRuleContext {
  public:
    Comparison_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *GREAT();
    antlr4::tree::TerminalNode *GREAT_EQ();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *LESS_EQ();
    antlr4::tree::TerminalNode *NOT_EQUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comparison_operatorContext* comparison_operator();

  class  OpContext : public antlr4::ParserRuleContext {
  public:
    OpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Comparison_operatorContext *comparison_operator();
    Math_operatorContext *math_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpContext* op();

  class  Row_exprContext : public antlr4::ParserRuleContext {
  public:
    Row_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_exprContext* row_expr();

  class  Table_exprContext : public antlr4::ParserRuleContext {
  public:
    Table_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACE();
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_exprContext* table_expr();

  class  If_bodyContext : public antlr4::ParserRuleContext {
  public:
    If_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExprContext *expr();
    BlockContext *block();
    Else_bodyContext *else_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Else_bodyContext* else_body();

  class  While_bodyContext : public antlr4::ParserRuleContext {
  public:
    While_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ExprContext *expr();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_bodyContext* while_body();

  class  Until_bodyContext : public antlr4::ParserRuleContext {
  public:
    Until_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNTIL();
    ExprContext *expr();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Until_bodyContext* until_body();

  class  For_bodyContext : public antlr4::ParserRuleContext {
  public:
    For_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    For_bodyContext() = default;
    void copyFrom(For_bodyContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  For_body_inContext : public For_bodyContext {
  public:
    For_body_inContext(For_bodyContext *ctx);

    antlr4::tree::TerminalNode *FOR();
    TypeContext *type();
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    antlr4::tree::TerminalNode *IN();
    BlockContext *block();
    Function_callContext *function_call();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  For_body_threeContext : public For_bodyContext {
  public:
    For_body_threeContext(For_bodyContext *ctx);

    antlr4::tree::TerminalNode *FOR();
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

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
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

  class  Expr_parenthesisContext : public ExprContext {
  public:
    Expr_parenthesisContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *OPEN_PARENTHESIS();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CLOSE_PARENTHESIS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_true_constantContext : public ExprContext {
  public:
    Expr_true_constantContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *TRUE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_float_constantContext : public ExprContext {
  public:
    Expr_float_constantContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *FLOAT_CONSTANT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_operatorContext : public ExprContext {
  public:
    Expr_operatorContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    OpContext *op();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_nameContext : public ExprContext {
  public:
    Expr_nameContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_negationContext : public ExprContext {
  public:
    Expr_negationContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NEGATION();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_integer_constantContext : public ExprContext {
  public:
    Expr_integer_constantContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *INTEGER_CONSTANT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_false_constantContext : public ExprContext {
  public:
    Expr_false_constantContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *FALSE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_castContext : public ExprContext {
  public:
    Expr_castContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *TO();
    TypeContext *type();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_table_exprContext : public ExprContext {
  public:
    Expr_table_exprContext(ExprContext *ctx);

    Table_exprContext *table_expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_row_exprContext : public ExprContext {
  public:
    Expr_row_exprContext(ExprContext *ctx);

    Row_exprContext *row_expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_function_callContext : public ExprContext {
  public:
    Expr_function_callContext(ExprContext *ctx);

    Function_callContext *function_call();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_element_accessContext : public ExprContext {
  public:
    Expr_element_accessContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_string_constantContext : public ExprContext {
  public:
    Expr_string_constantContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_scan_callContext : public ExprContext {
  public:
    Expr_scan_callContext(ExprContext *ctx);

    Builtin_scanContext *builtin_scan();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
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

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    Function_callContext *function_call();
    Builtin_printContext *builtin_print();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  Print_exprContext : public antlr4::ParserRuleContext {
  public:
    Print_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Print_exprContext* print_expr();

  class  Print_signatureContext : public antlr4::ParserRuleContext {
  public:
    Print_signatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENTHESIS();
    antlr4::tree::TerminalNode *CLOSE_PARENTHESIS();
    std::vector<Print_exprContext *> print_expr();
    Print_exprContext* print_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Print_signatureContext* print_signature();

  class  Builtin_printContext : public antlr4::ParserRuleContext {
  public:
    Builtin_printContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    Print_signatureContext *print_signature();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Builtin_printContext* builtin_print();

  class  Builtin_scanContext : public antlr4::ParserRuleContext {
  public:
    Builtin_scanContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SCAN();
    antlr4::tree::TerminalNode *OPEN_PARENTHESIS();
    TypeContext *type();
    antlr4::tree::TerminalNode *CLOSE_PARENTHESIS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Builtin_scanContext* builtin_scan();

  class  RetContext : public antlr4::ParserRuleContext {
  public:
    RetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RetContext* ret();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    std::vector<Block_statementContext *> block_statement();
    Block_statementContext* block_statement(size_t i);
    RetContext *ret();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signature_argumentsContext* signature_arguments();

  class  Function_signatureContext : public antlr4::ParserRuleContext {
  public:
    Function_signatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENTHESIS();
    antlr4::tree::TerminalNode *CLOSE_PARENTHESIS();
    Signature_argumentsContext *signature_arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_signatureContext* function_signature();

  class  Function_definitionContext : public antlr4::ParserRuleContext {
  public:
    Function_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *NAME();
    Function_signatureContext *function_signature();
    BlockContext *block();
    antlr4::tree::TerminalNode *RETURNS();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_definitionContext* function_definition();

  class  Call_signatureContext : public antlr4::ParserRuleContext {
  public:
    Call_signatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENTHESIS();
    antlr4::tree::TerminalNode *CLOSE_PARENTHESIS();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Call_signatureContext* call_signature();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    Call_signatureContext *call_signature();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_callContext* function_call();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

