
// Generated from Tdl.g4 by ANTLR 4.8


#include "TdlListener.h"
#include "TdlVisitor.h"

#include "TdlParser.h"


using namespace antlrcpp;
using namespace antlr4;

TdlParser::TdlParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

TdlParser::~TdlParser() {
  delete _interpreter;
}

std::string TdlParser::getGrammarFileName() const {
  return "Tdl.g4";
}

const std::vector<std::string>& TdlParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& TdlParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- TdlContext ------------------------------------------------------------------

TdlParser::TdlContext::TdlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TdlParser::ProgramContext* TdlParser::TdlContext::program() {
  return getRuleContext<TdlParser::ProgramContext>(0);
}

tree::TerminalNode* TdlParser::TdlContext::EOF() {
  return getToken(TdlParser::EOF, 0);
}

std::vector<TdlParser::Global_scopeContext *> TdlParser::TdlContext::global_scope() {
  return getRuleContexts<TdlParser::Global_scopeContext>();
}

TdlParser::Global_scopeContext* TdlParser::TdlContext::global_scope(size_t i) {
  return getRuleContext<TdlParser::Global_scopeContext>(i);
}

std::vector<TdlParser::Function_definitionContext *> TdlParser::TdlContext::function_definition() {
  return getRuleContexts<TdlParser::Function_definitionContext>();
}

TdlParser::Function_definitionContext* TdlParser::TdlContext::function_definition(size_t i) {
  return getRuleContext<TdlParser::Function_definitionContext>(i);
}


size_t TdlParser::TdlContext::getRuleIndex() const {
  return TdlParser::RuleTdl;
}

void TdlParser::TdlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTdl(this);
}

void TdlParser::TdlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTdl(this);
}


antlrcpp::Any TdlParser::TdlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitTdl(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::TdlContext* TdlParser::tdl() {
  TdlContext *_localctx = _tracker.createInstance<TdlContext>(_ctx, getState());
  enterRule(_localctx, 0, TdlParser::RuleTdl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(59);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(56);
        global_scope(); 
      }
      setState(61);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(65);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TdlParser::FUNCTION) {
      setState(62);
      function_definition();
      setState(67);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(71);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TdlParser::COLUMN)
      | (1ULL << TdlParser::FLOAT)
      | (1ULL << TdlParser::INT)
      | (1ULL << TdlParser::ROW)
      | (1ULL << TdlParser::STRING)
      | (1ULL << TdlParser::TABLE)
      | (1ULL << TdlParser::BOOL))) != 0)) {
      setState(68);
      global_scope();
      setState(73);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(74);
    program();
    setState(78);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TdlParser::COLUMN)
      | (1ULL << TdlParser::FLOAT)
      | (1ULL << TdlParser::INT)
      | (1ULL << TdlParser::ROW)
      | (1ULL << TdlParser::STRING)
      | (1ULL << TdlParser::TABLE)
      | (1ULL << TdlParser::BOOL))) != 0)) {
      setState(75);
      global_scope();
      setState(80);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(81);
    match(TdlParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Global_scopeContext ------------------------------------------------------------------

TdlParser::Global_scopeContext::Global_scopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TdlParser::TypeContext* TdlParser::Global_scopeContext::type() {
  return getRuleContext<TdlParser::TypeContext>(0);
}

tree::TerminalNode* TdlParser::Global_scopeContext::NAME() {
  return getToken(TdlParser::NAME, 0);
}

tree::TerminalNode* TdlParser::Global_scopeContext::ASSIGN() {
  return getToken(TdlParser::ASSIGN, 0);
}

TdlParser::ExprContext* TdlParser::Global_scopeContext::expr() {
  return getRuleContext<TdlParser::ExprContext>(0);
}


size_t TdlParser::Global_scopeContext::getRuleIndex() const {
  return TdlParser::RuleGlobal_scope;
}

void TdlParser::Global_scopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobal_scope(this);
}

void TdlParser::Global_scopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobal_scope(this);
}


antlrcpp::Any TdlParser::Global_scopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitGlobal_scope(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::Global_scopeContext* TdlParser::global_scope() {
  Global_scopeContext *_localctx = _tracker.createInstance<Global_scopeContext>(_ctx, getState());
  enterRule(_localctx, 2, TdlParser::RuleGlobal_scope);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    type();
    setState(84);
    match(TdlParser::NAME);
    setState(87);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TdlParser::ASSIGN) {
      setState(85);
      match(TdlParser::ASSIGN);
      setState(86);
      expr(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

TdlParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TdlParser::BlockContext* TdlParser::ProgramContext::block() {
  return getRuleContext<TdlParser::BlockContext>(0);
}


size_t TdlParser::ProgramContext::getRuleIndex() const {
  return TdlParser::RuleProgram;
}

void TdlParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void TdlParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any TdlParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::ProgramContext* TdlParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 4, TdlParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(TdlParser::T__0);
    setState(90);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

TdlParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TdlParser::TypeContext::COLUMN() {
  return getToken(TdlParser::COLUMN, 0);
}

tree::TerminalNode* TdlParser::TypeContext::FLOAT() {
  return getToken(TdlParser::FLOAT, 0);
}

tree::TerminalNode* TdlParser::TypeContext::INT() {
  return getToken(TdlParser::INT, 0);
}

tree::TerminalNode* TdlParser::TypeContext::ROW() {
  return getToken(TdlParser::ROW, 0);
}

tree::TerminalNode* TdlParser::TypeContext::STRING() {
  return getToken(TdlParser::STRING, 0);
}

tree::TerminalNode* TdlParser::TypeContext::TABLE() {
  return getToken(TdlParser::TABLE, 0);
}

tree::TerminalNode* TdlParser::TypeContext::BOOL() {
  return getToken(TdlParser::BOOL, 0);
}


size_t TdlParser::TypeContext::getRuleIndex() const {
  return TdlParser::RuleType;
}

void TdlParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void TdlParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


antlrcpp::Any TdlParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::TypeContext* TdlParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 6, TdlParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TdlParser::COLUMN)
      | (1ULL << TdlParser::FLOAT)
      | (1ULL << TdlParser::INT)
      | (1ULL << TdlParser::ROW)
      | (1ULL << TdlParser::STRING)
      | (1ULL << TdlParser::TABLE)
      | (1ULL << TdlParser::BOOL))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Math_operatorContext ------------------------------------------------------------------

TdlParser::Math_operatorContext::Math_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TdlParser::Math_operatorContext::PLUS() {
  return getToken(TdlParser::PLUS, 0);
}

tree::TerminalNode* TdlParser::Math_operatorContext::MINUS() {
  return getToken(TdlParser::MINUS, 0);
}

tree::TerminalNode* TdlParser::Math_operatorContext::MULTIPLY() {
  return getToken(TdlParser::MULTIPLY, 0);
}

tree::TerminalNode* TdlParser::Math_operatorContext::DIVISION() {
  return getToken(TdlParser::DIVISION, 0);
}

tree::TerminalNode* TdlParser::Math_operatorContext::ASSIGN() {
  return getToken(TdlParser::ASSIGN, 0);
}


size_t TdlParser::Math_operatorContext::getRuleIndex() const {
  return TdlParser::RuleMath_operator;
}

void TdlParser::Math_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMath_operator(this);
}

void TdlParser::Math_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMath_operator(this);
}


antlrcpp::Any TdlParser::Math_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitMath_operator(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::Math_operatorContext* TdlParser::math_operator() {
  Math_operatorContext *_localctx = _tracker.createInstance<Math_operatorContext>(_ctx, getState());
  enterRule(_localctx, 8, TdlParser::RuleMath_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TdlParser::PLUS)
      | (1ULL << TdlParser::MINUS)
      | (1ULL << TdlParser::MULTIPLY)
      | (1ULL << TdlParser::DIVISION)
      | (1ULL << TdlParser::ASSIGN))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Comparison_operatorContext ------------------------------------------------------------------

TdlParser::Comparison_operatorContext::Comparison_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TdlParser::Comparison_operatorContext::EQUAL() {
  return getToken(TdlParser::EQUAL, 0);
}

tree::TerminalNode* TdlParser::Comparison_operatorContext::GREAT() {
  return getToken(TdlParser::GREAT, 0);
}

tree::TerminalNode* TdlParser::Comparison_operatorContext::GREAT_EQ() {
  return getToken(TdlParser::GREAT_EQ, 0);
}

tree::TerminalNode* TdlParser::Comparison_operatorContext::LESS() {
  return getToken(TdlParser::LESS, 0);
}

tree::TerminalNode* TdlParser::Comparison_operatorContext::LESS_EQ() {
  return getToken(TdlParser::LESS_EQ, 0);
}

tree::TerminalNode* TdlParser::Comparison_operatorContext::NOT_EQUAL() {
  return getToken(TdlParser::NOT_EQUAL, 0);
}


size_t TdlParser::Comparison_operatorContext::getRuleIndex() const {
  return TdlParser::RuleComparison_operator;
}

void TdlParser::Comparison_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison_operator(this);
}

void TdlParser::Comparison_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison_operator(this);
}


antlrcpp::Any TdlParser::Comparison_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitComparison_operator(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::Comparison_operatorContext* TdlParser::comparison_operator() {
  Comparison_operatorContext *_localctx = _tracker.createInstance<Comparison_operatorContext>(_ctx, getState());
  enterRule(_localctx, 10, TdlParser::RuleComparison_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TdlParser::EQUAL)
      | (1ULL << TdlParser::NOT_EQUAL)
      | (1ULL << TdlParser::LESS)
      | (1ULL << TdlParser::GREAT)
      | (1ULL << TdlParser::GREAT_EQ)
      | (1ULL << TdlParser::LESS_EQ))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpContext ------------------------------------------------------------------

TdlParser::OpContext::OpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TdlParser::Comparison_operatorContext* TdlParser::OpContext::comparison_operator() {
  return getRuleContext<TdlParser::Comparison_operatorContext>(0);
}

TdlParser::Math_operatorContext* TdlParser::OpContext::math_operator() {
  return getRuleContext<TdlParser::Math_operatorContext>(0);
}


size_t TdlParser::OpContext::getRuleIndex() const {
  return TdlParser::RuleOp;
}

void TdlParser::OpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp(this);
}

void TdlParser::OpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp(this);
}


antlrcpp::Any TdlParser::OpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitOp(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::OpContext* TdlParser::op() {
  OpContext *_localctx = _tracker.createInstance<OpContext>(_ctx, getState());
  enterRule(_localctx, 12, TdlParser::RuleOp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(100);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TdlParser::EQUAL:
      case TdlParser::NOT_EQUAL:
      case TdlParser::LESS:
      case TdlParser::GREAT:
      case TdlParser::GREAT_EQ:
      case TdlParser::LESS_EQ: {
        enterOuterAlt(_localctx, 1);
        setState(98);
        comparison_operator();
        break;
      }

      case TdlParser::PLUS:
      case TdlParser::MINUS:
      case TdlParser::MULTIPLY:
      case TdlParser::DIVISION:
      case TdlParser::ASSIGN: {
        enterOuterAlt(_localctx, 2);
        setState(99);
        math_operator();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Row_exprContext ------------------------------------------------------------------

TdlParser::Row_exprContext::Row_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TdlParser::Row_exprContext::OPEN_BRACKET() {
  return getToken(TdlParser::OPEN_BRACKET, 0);
}

tree::TerminalNode* TdlParser::Row_exprContext::CLOSE_BRACKET() {
  return getToken(TdlParser::CLOSE_BRACKET, 0);
}

std::vector<TdlParser::ExprContext *> TdlParser::Row_exprContext::expr() {
  return getRuleContexts<TdlParser::ExprContext>();
}

TdlParser::ExprContext* TdlParser::Row_exprContext::expr(size_t i) {
  return getRuleContext<TdlParser::ExprContext>(i);
}


size_t TdlParser::Row_exprContext::getRuleIndex() const {
  return TdlParser::RuleRow_expr;
}

void TdlParser::Row_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRow_expr(this);
}

void TdlParser::Row_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRow_expr(this);
}


antlrcpp::Any TdlParser::Row_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitRow_expr(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::Row_exprContext* TdlParser::row_expr() {
  Row_exprContext *_localctx = _tracker.createInstance<Row_exprContext>(_ctx, getState());
  enterRule(_localctx, 14, TdlParser::RuleRow_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(TdlParser::OPEN_BRACKET);
    setState(106);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TdlParser::TRUE)
      | (1ULL << TdlParser::FALSE)
      | (1ULL << TdlParser::SCAN)
      | (1ULL << TdlParser::CAST)
      | (1ULL << TdlParser::NAME)
      | (1ULL << TdlParser::INTEGER_CONSTANT)
      | (1ULL << TdlParser::FLOAT_CONSTANT)
      | (1ULL << TdlParser::STRING_LITERAL)
      | (1ULL << TdlParser::OPEN_PARENTHESIS)
      | (1ULL << TdlParser::OPEN_BRACKET)
      | (1ULL << TdlParser::OPEN_BRACE)
      | (1ULL << TdlParser::NEGATION))) != 0)) {
      setState(103);
      expr(0);
      setState(108);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(109);
    match(TdlParser::CLOSE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Table_exprContext ------------------------------------------------------------------

TdlParser::Table_exprContext::Table_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TdlParser::Table_exprContext::OPEN_BRACE() {
  return getToken(TdlParser::OPEN_BRACE, 0);
}

tree::TerminalNode* TdlParser::Table_exprContext::CLOSE_BRACE() {
  return getToken(TdlParser::CLOSE_BRACE, 0);
}

std::vector<TdlParser::ExprContext *> TdlParser::Table_exprContext::expr() {
  return getRuleContexts<TdlParser::ExprContext>();
}

TdlParser::ExprContext* TdlParser::Table_exprContext::expr(size_t i) {
  return getRuleContext<TdlParser::ExprContext>(i);
}


size_t TdlParser::Table_exprContext::getRuleIndex() const {
  return TdlParser::RuleTable_expr;
}

void TdlParser::Table_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTable_expr(this);
}

void TdlParser::Table_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTable_expr(this);
}


antlrcpp::Any TdlParser::Table_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitTable_expr(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::Table_exprContext* TdlParser::table_expr() {
  Table_exprContext *_localctx = _tracker.createInstance<Table_exprContext>(_ctx, getState());
  enterRule(_localctx, 16, TdlParser::RuleTable_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(TdlParser::OPEN_BRACE);
    setState(115);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TdlParser::TRUE)
      | (1ULL << TdlParser::FALSE)
      | (1ULL << TdlParser::SCAN)
      | (1ULL << TdlParser::CAST)
      | (1ULL << TdlParser::NAME)
      | (1ULL << TdlParser::INTEGER_CONSTANT)
      | (1ULL << TdlParser::FLOAT_CONSTANT)
      | (1ULL << TdlParser::STRING_LITERAL)
      | (1ULL << TdlParser::OPEN_PARENTHESIS)
      | (1ULL << TdlParser::OPEN_BRACKET)
      | (1ULL << TdlParser::OPEN_BRACE)
      | (1ULL << TdlParser::NEGATION))) != 0)) {
      setState(112);
      expr(0);
      setState(117);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(118);
    match(TdlParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_bodyContext ------------------------------------------------------------------

TdlParser::If_bodyContext::If_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TdlParser::If_bodyContext::IF() {
  return getToken(TdlParser::IF, 0);
}

TdlParser::ExprContext* TdlParser::If_bodyContext::expr() {
  return getRuleContext<TdlParser::ExprContext>(0);
}

TdlParser::BlockContext* TdlParser::If_bodyContext::block() {
  return getRuleContext<TdlParser::BlockContext>(0);
}

TdlParser::Else_bodyContext* TdlParser::If_bodyContext::else_body() {
  return getRuleContext<TdlParser::Else_bodyContext>(0);
}


size_t TdlParser::If_bodyContext::getRuleIndex() const {
  return TdlParser::RuleIf_body;
}

void TdlParser::If_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_body(this);
}

void TdlParser::If_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_body(this);
}


antlrcpp::Any TdlParser::If_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitIf_body(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::If_bodyContext* TdlParser::if_body() {
  If_bodyContext *_localctx = _tracker.createInstance<If_bodyContext>(_ctx, getState());
  enterRule(_localctx, 18, TdlParser::RuleIf_body);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    match(TdlParser::IF);
    setState(121);
    expr(0);
    setState(122);
    block();
    setState(124);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TdlParser::ELSE) {
      setState(123);
      else_body();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_bodyContext ------------------------------------------------------------------

TdlParser::Else_bodyContext::Else_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TdlParser::Else_bodyContext::ELSE() {
  return getToken(TdlParser::ELSE, 0);
}

TdlParser::If_bodyContext* TdlParser::Else_bodyContext::if_body() {
  return getRuleContext<TdlParser::If_bodyContext>(0);
}

TdlParser::BlockContext* TdlParser::Else_bodyContext::block() {
  return getRuleContext<TdlParser::BlockContext>(0);
}


size_t TdlParser::Else_bodyContext::getRuleIndex() const {
  return TdlParser::RuleElse_body;
}

void TdlParser::Else_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElse_body(this);
}

void TdlParser::Else_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElse_body(this);
}


antlrcpp::Any TdlParser::Else_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitElse_body(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::Else_bodyContext* TdlParser::else_body() {
  Else_bodyContext *_localctx = _tracker.createInstance<Else_bodyContext>(_ctx, getState());
  enterRule(_localctx, 20, TdlParser::RuleElse_body);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(TdlParser::ELSE);
    setState(129);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TdlParser::IF: {
        setState(127);
        if_body();
        break;
      }

      case TdlParser::BEGIN: {
        setState(128);
        block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_bodyContext ------------------------------------------------------------------

TdlParser::While_bodyContext::While_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TdlParser::While_bodyContext::WHILE() {
  return getToken(TdlParser::WHILE, 0);
}

TdlParser::ExprContext* TdlParser::While_bodyContext::expr() {
  return getRuleContext<TdlParser::ExprContext>(0);
}

TdlParser::BlockContext* TdlParser::While_bodyContext::block() {
  return getRuleContext<TdlParser::BlockContext>(0);
}


size_t TdlParser::While_bodyContext::getRuleIndex() const {
  return TdlParser::RuleWhile_body;
}

void TdlParser::While_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_body(this);
}

void TdlParser::While_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_body(this);
}


antlrcpp::Any TdlParser::While_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitWhile_body(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::While_bodyContext* TdlParser::while_body() {
  While_bodyContext *_localctx = _tracker.createInstance<While_bodyContext>(_ctx, getState());
  enterRule(_localctx, 22, TdlParser::RuleWhile_body);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(TdlParser::WHILE);
    setState(132);
    expr(0);
    setState(133);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Until_bodyContext ------------------------------------------------------------------

TdlParser::Until_bodyContext::Until_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TdlParser::Until_bodyContext::UNTIL() {
  return getToken(TdlParser::UNTIL, 0);
}

TdlParser::ExprContext* TdlParser::Until_bodyContext::expr() {
  return getRuleContext<TdlParser::ExprContext>(0);
}

TdlParser::BlockContext* TdlParser::Until_bodyContext::block() {
  return getRuleContext<TdlParser::BlockContext>(0);
}


size_t TdlParser::Until_bodyContext::getRuleIndex() const {
  return TdlParser::RuleUntil_body;
}

void TdlParser::Until_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUntil_body(this);
}

void TdlParser::Until_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUntil_body(this);
}


antlrcpp::Any TdlParser::Until_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitUntil_body(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::Until_bodyContext* TdlParser::until_body() {
  Until_bodyContext *_localctx = _tracker.createInstance<Until_bodyContext>(_ctx, getState());
  enterRule(_localctx, 24, TdlParser::RuleUntil_body);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    match(TdlParser::UNTIL);
    setState(136);
    expr(0);
    setState(137);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_bodyContext ------------------------------------------------------------------

TdlParser::For_bodyContext::For_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TdlParser::For_bodyContext::getRuleIndex() const {
  return TdlParser::RuleFor_body;
}

void TdlParser::For_bodyContext::copyFrom(For_bodyContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- For_body_inContext ------------------------------------------------------------------

tree::TerminalNode* TdlParser::For_body_inContext::FOR() {
  return getToken(TdlParser::FOR, 0);
}

TdlParser::TypeContext* TdlParser::For_body_inContext::type() {
  return getRuleContext<TdlParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> TdlParser::For_body_inContext::NAME() {
  return getTokens(TdlParser::NAME);
}

tree::TerminalNode* TdlParser::For_body_inContext::NAME(size_t i) {
  return getToken(TdlParser::NAME, i);
}

tree::TerminalNode* TdlParser::For_body_inContext::IN() {
  return getToken(TdlParser::IN, 0);
}

TdlParser::BlockContext* TdlParser::For_body_inContext::block() {
  return getRuleContext<TdlParser::BlockContext>(0);
}

TdlParser::Function_callContext* TdlParser::For_body_inContext::function_call() {
  return getRuleContext<TdlParser::Function_callContext>(0);
}

TdlParser::For_body_inContext::For_body_inContext(For_bodyContext *ctx) { copyFrom(ctx); }

void TdlParser::For_body_inContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_body_in(this);
}
void TdlParser::For_body_inContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_body_in(this);
}

antlrcpp::Any TdlParser::For_body_inContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitFor_body_in(this);
  else
    return visitor->visitChildren(this);
}
//----------------- For_body_threeContext ------------------------------------------------------------------

tree::TerminalNode* TdlParser::For_body_threeContext::FOR() {
  return getToken(TdlParser::FOR, 0);
}

tree::TerminalNode* TdlParser::For_body_threeContext::OPEN_PARENTHESIS() {
  return getToken(TdlParser::OPEN_PARENTHESIS, 0);
}

std::vector<tree::TerminalNode *> TdlParser::For_body_threeContext::SEMI() {
  return getTokens(TdlParser::SEMI);
}

tree::TerminalNode* TdlParser::For_body_threeContext::SEMI(size_t i) {
  return getToken(TdlParser::SEMI, i);
}

tree::TerminalNode* TdlParser::For_body_threeContext::CLOSE_PARENTHESIS() {
  return getToken(TdlParser::CLOSE_PARENTHESIS, 0);
}

TdlParser::BlockContext* TdlParser::For_body_threeContext::block() {
  return getRuleContext<TdlParser::BlockContext>(0);
}

TdlParser::StatementContext* TdlParser::For_body_threeContext::statement() {
  return getRuleContext<TdlParser::StatementContext>(0);
}

std::vector<TdlParser::ExprContext *> TdlParser::For_body_threeContext::expr() {
  return getRuleContexts<TdlParser::ExprContext>();
}

TdlParser::ExprContext* TdlParser::For_body_threeContext::expr(size_t i) {
  return getRuleContext<TdlParser::ExprContext>(i);
}

TdlParser::For_body_threeContext::For_body_threeContext(For_bodyContext *ctx) { copyFrom(ctx); }

void TdlParser::For_body_threeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_body_three(this);
}
void TdlParser::For_body_threeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_body_three(this);
}

antlrcpp::Any TdlParser::For_body_threeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitFor_body_three(this);
  else
    return visitor->visitChildren(this);
}
TdlParser::For_bodyContext* TdlParser::for_body() {
  For_bodyContext *_localctx = _tracker.createInstance<For_bodyContext>(_ctx, getState());
  enterRule(_localctx, 26, TdlParser::RuleFor_body);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(179);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<For_bodyContext *>(_tracker.createInstance<TdlParser::For_body_threeContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(167);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
      case 1: {
        setState(139);
        match(TdlParser::FOR);
        setState(140);
        match(TdlParser::OPEN_PARENTHESIS);
        setState(142);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << TdlParser::COLUMN)
          | (1ULL << TdlParser::FLOAT)
          | (1ULL << TdlParser::INT)
          | (1ULL << TdlParser::ROW)
          | (1ULL << TdlParser::STRING)
          | (1ULL << TdlParser::TABLE)
          | (1ULL << TdlParser::BOOL)
          | (1ULL << TdlParser::PRINT)
          | (1ULL << TdlParser::NAME))) != 0)) {
          setState(141);
          statement();
        }
        setState(144);
        match(TdlParser::SEMI);
        setState(146);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << TdlParser::TRUE)
          | (1ULL << TdlParser::FALSE)
          | (1ULL << TdlParser::SCAN)
          | (1ULL << TdlParser::CAST)
          | (1ULL << TdlParser::NAME)
          | (1ULL << TdlParser::INTEGER_CONSTANT)
          | (1ULL << TdlParser::FLOAT_CONSTANT)
          | (1ULL << TdlParser::STRING_LITERAL)
          | (1ULL << TdlParser::OPEN_PARENTHESIS)
          | (1ULL << TdlParser::OPEN_BRACKET)
          | (1ULL << TdlParser::OPEN_BRACE)
          | (1ULL << TdlParser::NEGATION))) != 0)) {
          setState(145);
          expr(0);
        }
        setState(148);
        match(TdlParser::SEMI);
        setState(150);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << TdlParser::TRUE)
          | (1ULL << TdlParser::FALSE)
          | (1ULL << TdlParser::SCAN)
          | (1ULL << TdlParser::CAST)
          | (1ULL << TdlParser::NAME)
          | (1ULL << TdlParser::INTEGER_CONSTANT)
          | (1ULL << TdlParser::FLOAT_CONSTANT)
          | (1ULL << TdlParser::STRING_LITERAL)
          | (1ULL << TdlParser::OPEN_PARENTHESIS)
          | (1ULL << TdlParser::OPEN_BRACKET)
          | (1ULL << TdlParser::OPEN_BRACE)
          | (1ULL << TdlParser::NEGATION))) != 0)) {
          setState(149);
          expr(0);
        }
        setState(152);
        match(TdlParser::CLOSE_PARENTHESIS);
        setState(153);
        block();
        break;
      }

      case 2: {
        setState(154);
        match(TdlParser::FOR);
        setState(156);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << TdlParser::COLUMN)
          | (1ULL << TdlParser::FLOAT)
          | (1ULL << TdlParser::INT)
          | (1ULL << TdlParser::ROW)
          | (1ULL << TdlParser::STRING)
          | (1ULL << TdlParser::TABLE)
          | (1ULL << TdlParser::BOOL)
          | (1ULL << TdlParser::PRINT)
          | (1ULL << TdlParser::NAME))) != 0)) {
          setState(155);
          statement();
        }
        setState(158);
        match(TdlParser::SEMI);
        setState(160);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << TdlParser::TRUE)
          | (1ULL << TdlParser::FALSE)
          | (1ULL << TdlParser::SCAN)
          | (1ULL << TdlParser::CAST)
          | (1ULL << TdlParser::NAME)
          | (1ULL << TdlParser::INTEGER_CONSTANT)
          | (1ULL << TdlParser::FLOAT_CONSTANT)
          | (1ULL << TdlParser::STRING_LITERAL)
          | (1ULL << TdlParser::OPEN_PARENTHESIS)
          | (1ULL << TdlParser::OPEN_BRACKET)
          | (1ULL << TdlParser::OPEN_BRACE)
          | (1ULL << TdlParser::NEGATION))) != 0)) {
          setState(159);
          expr(0);
        }
        setState(162);
        match(TdlParser::SEMI);
        setState(164);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << TdlParser::TRUE)
          | (1ULL << TdlParser::FALSE)
          | (1ULL << TdlParser::SCAN)
          | (1ULL << TdlParser::CAST)
          | (1ULL << TdlParser::NAME)
          | (1ULL << TdlParser::INTEGER_CONSTANT)
          | (1ULL << TdlParser::FLOAT_CONSTANT)
          | (1ULL << TdlParser::STRING_LITERAL)
          | (1ULL << TdlParser::OPEN_PARENTHESIS)
          | (1ULL << TdlParser::OPEN_BRACKET)
          | (1ULL << TdlParser::OPEN_BRACE)
          | (1ULL << TdlParser::NEGATION))) != 0)) {
          setState(163);
          expr(0);
        }
        setState(166);
        block();
        break;
      }

      }
      break;
    }

    case 2: {
      _localctx = dynamic_cast<For_bodyContext *>(_tracker.createInstance<TdlParser::For_body_inContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(169);
      match(TdlParser::FOR);
      setState(170);
      type();
      setState(171);
      match(TdlParser::NAME);
      setState(172);
      match(TdlParser::IN);
      setState(175);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
      case 1: {
        setState(173);
        match(TdlParser::NAME);
        break;
      }

      case 2: {
        setState(174);
        function_call();
        break;
      }

      }
      setState(177);
      block();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

TdlParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TdlParser::ExprContext::getRuleIndex() const {
  return TdlParser::RuleExpr;
}

void TdlParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_parenthesisContext ------------------------------------------------------------------

tree::TerminalNode* TdlParser::Expr_parenthesisContext::OPEN_PARENTHESIS() {
  return getToken(TdlParser::OPEN_PARENTHESIS, 0);
}

TdlParser::ExprContext* TdlParser::Expr_parenthesisContext::expr() {
  return getRuleContext<TdlParser::ExprContext>(0);
}

tree::TerminalNode* TdlParser::Expr_parenthesisContext::CLOSE_PARENTHESIS() {
  return getToken(TdlParser::CLOSE_PARENTHESIS, 0);
}

TdlParser::Expr_parenthesisContext::Expr_parenthesisContext(ExprContext *ctx) { copyFrom(ctx); }

void TdlParser::Expr_parenthesisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_parenthesis(this);
}
void TdlParser::Expr_parenthesisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_parenthesis(this);
}

antlrcpp::Any TdlParser::Expr_parenthesisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitExpr_parenthesis(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_true_constantContext ------------------------------------------------------------------

tree::TerminalNode* TdlParser::Expr_true_constantContext::TRUE() {
  return getToken(TdlParser::TRUE, 0);
}

TdlParser::Expr_true_constantContext::Expr_true_constantContext(ExprContext *ctx) { copyFrom(ctx); }

void TdlParser::Expr_true_constantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_true_constant(this);
}
void TdlParser::Expr_true_constantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_true_constant(this);
}

antlrcpp::Any TdlParser::Expr_true_constantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitExpr_true_constant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_float_constantContext ------------------------------------------------------------------

tree::TerminalNode* TdlParser::Expr_float_constantContext::FLOAT_CONSTANT() {
  return getToken(TdlParser::FLOAT_CONSTANT, 0);
}

TdlParser::Expr_float_constantContext::Expr_float_constantContext(ExprContext *ctx) { copyFrom(ctx); }

void TdlParser::Expr_float_constantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_float_constant(this);
}
void TdlParser::Expr_float_constantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_float_constant(this);
}

antlrcpp::Any TdlParser::Expr_float_constantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitExpr_float_constant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_operatorContext ------------------------------------------------------------------

std::vector<TdlParser::ExprContext *> TdlParser::Expr_operatorContext::expr() {
  return getRuleContexts<TdlParser::ExprContext>();
}

TdlParser::ExprContext* TdlParser::Expr_operatorContext::expr(size_t i) {
  return getRuleContext<TdlParser::ExprContext>(i);
}

TdlParser::OpContext* TdlParser::Expr_operatorContext::op() {
  return getRuleContext<TdlParser::OpContext>(0);
}

TdlParser::Expr_operatorContext::Expr_operatorContext(ExprContext *ctx) { copyFrom(ctx); }

void TdlParser::Expr_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_operator(this);
}
void TdlParser::Expr_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_operator(this);
}

antlrcpp::Any TdlParser::Expr_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitExpr_operator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_nameContext ------------------------------------------------------------------

tree::TerminalNode* TdlParser::Expr_nameContext::NAME() {
  return getToken(TdlParser::NAME, 0);
}

TdlParser::Expr_nameContext::Expr_nameContext(ExprContext *ctx) { copyFrom(ctx); }

void TdlParser::Expr_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_name(this);
}
void TdlParser::Expr_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_name(this);
}

antlrcpp::Any TdlParser::Expr_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitExpr_name(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_negationContext ------------------------------------------------------------------

tree::TerminalNode* TdlParser::Expr_negationContext::NEGATION() {
  return getToken(TdlParser::NEGATION, 0);
}

TdlParser::ExprContext* TdlParser::Expr_negationContext::expr() {
  return getRuleContext<TdlParser::ExprContext>(0);
}

TdlParser::Expr_negationContext::Expr_negationContext(ExprContext *ctx) { copyFrom(ctx); }

void TdlParser::Expr_negationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_negation(this);
}
void TdlParser::Expr_negationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_negation(this);
}

antlrcpp::Any TdlParser::Expr_negationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitExpr_negation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_integer_constantContext ------------------------------------------------------------------

tree::TerminalNode* TdlParser::Expr_integer_constantContext::INTEGER_CONSTANT() {
  return getToken(TdlParser::INTEGER_CONSTANT, 0);
}

TdlParser::Expr_integer_constantContext::Expr_integer_constantContext(ExprContext *ctx) { copyFrom(ctx); }

void TdlParser::Expr_integer_constantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_integer_constant(this);
}
void TdlParser::Expr_integer_constantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_integer_constant(this);
}

antlrcpp::Any TdlParser::Expr_integer_constantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitExpr_integer_constant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_false_constantContext ------------------------------------------------------------------

tree::TerminalNode* TdlParser::Expr_false_constantContext::FALSE() {
  return getToken(TdlParser::FALSE, 0);
}

TdlParser::Expr_false_constantContext::Expr_false_constantContext(ExprContext *ctx) { copyFrom(ctx); }

void TdlParser::Expr_false_constantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_false_constant(this);
}
void TdlParser::Expr_false_constantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_false_constant(this);
}

antlrcpp::Any TdlParser::Expr_false_constantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitExpr_false_constant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_castContext ------------------------------------------------------------------

tree::TerminalNode* TdlParser::Expr_castContext::CAST() {
  return getToken(TdlParser::CAST, 0);
}

tree::TerminalNode* TdlParser::Expr_castContext::TO() {
  return getToken(TdlParser::TO, 0);
}

TdlParser::TypeContext* TdlParser::Expr_castContext::type() {
  return getRuleContext<TdlParser::TypeContext>(0);
}

TdlParser::ExprContext* TdlParser::Expr_castContext::expr() {
  return getRuleContext<TdlParser::ExprContext>(0);
}

TdlParser::Expr_castContext::Expr_castContext(ExprContext *ctx) { copyFrom(ctx); }

void TdlParser::Expr_castContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_cast(this);
}
void TdlParser::Expr_castContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_cast(this);
}

antlrcpp::Any TdlParser::Expr_castContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitExpr_cast(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_table_exprContext ------------------------------------------------------------------

TdlParser::Table_exprContext* TdlParser::Expr_table_exprContext::table_expr() {
  return getRuleContext<TdlParser::Table_exprContext>(0);
}

TdlParser::Expr_table_exprContext::Expr_table_exprContext(ExprContext *ctx) { copyFrom(ctx); }

void TdlParser::Expr_table_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_table_expr(this);
}
void TdlParser::Expr_table_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_table_expr(this);
}

antlrcpp::Any TdlParser::Expr_table_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitExpr_table_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_row_exprContext ------------------------------------------------------------------

TdlParser::Row_exprContext* TdlParser::Expr_row_exprContext::row_expr() {
  return getRuleContext<TdlParser::Row_exprContext>(0);
}

TdlParser::Expr_row_exprContext::Expr_row_exprContext(ExprContext *ctx) { copyFrom(ctx); }

void TdlParser::Expr_row_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_row_expr(this);
}
void TdlParser::Expr_row_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_row_expr(this);
}

antlrcpp::Any TdlParser::Expr_row_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitExpr_row_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_function_callContext ------------------------------------------------------------------

TdlParser::Function_callContext* TdlParser::Expr_function_callContext::function_call() {
  return getRuleContext<TdlParser::Function_callContext>(0);
}

TdlParser::Expr_function_callContext::Expr_function_callContext(ExprContext *ctx) { copyFrom(ctx); }

void TdlParser::Expr_function_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_function_call(this);
}
void TdlParser::Expr_function_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_function_call(this);
}

antlrcpp::Any TdlParser::Expr_function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitExpr_function_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_element_accessContext ------------------------------------------------------------------

std::vector<TdlParser::ExprContext *> TdlParser::Expr_element_accessContext::expr() {
  return getRuleContexts<TdlParser::ExprContext>();
}

TdlParser::ExprContext* TdlParser::Expr_element_accessContext::expr(size_t i) {
  return getRuleContext<TdlParser::ExprContext>(i);
}

tree::TerminalNode* TdlParser::Expr_element_accessContext::OPEN_BRACKET() {
  return getToken(TdlParser::OPEN_BRACKET, 0);
}

tree::TerminalNode* TdlParser::Expr_element_accessContext::CLOSE_BRACKET() {
  return getToken(TdlParser::CLOSE_BRACKET, 0);
}

TdlParser::Expr_element_accessContext::Expr_element_accessContext(ExprContext *ctx) { copyFrom(ctx); }

void TdlParser::Expr_element_accessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_element_access(this);
}
void TdlParser::Expr_element_accessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_element_access(this);
}

antlrcpp::Any TdlParser::Expr_element_accessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitExpr_element_access(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_string_constantContext ------------------------------------------------------------------

tree::TerminalNode* TdlParser::Expr_string_constantContext::STRING_LITERAL() {
  return getToken(TdlParser::STRING_LITERAL, 0);
}

TdlParser::Expr_string_constantContext::Expr_string_constantContext(ExprContext *ctx) { copyFrom(ctx); }

void TdlParser::Expr_string_constantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_string_constant(this);
}
void TdlParser::Expr_string_constantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_string_constant(this);
}

antlrcpp::Any TdlParser::Expr_string_constantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitExpr_string_constant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_scan_callContext ------------------------------------------------------------------

TdlParser::Builtin_scanContext* TdlParser::Expr_scan_callContext::builtin_scan() {
  return getRuleContext<TdlParser::Builtin_scanContext>(0);
}

TdlParser::Expr_scan_callContext::Expr_scan_callContext(ExprContext *ctx) { copyFrom(ctx); }

void TdlParser::Expr_scan_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_scan_call(this);
}
void TdlParser::Expr_scan_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_scan_call(this);
}

antlrcpp::Any TdlParser::Expr_scan_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitExpr_scan_call(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::ExprContext* TdlParser::expr() {
   return expr(0);
}

TdlParser::ExprContext* TdlParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  TdlParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  TdlParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, TdlParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(210);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<Expr_castContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(192);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(182);
        match(TdlParser::CAST);
        setState(183);
        match(TdlParser::TO);
        setState(184);
        type();
        setState(185);
        expr(0);
        break;
      }

      case 2: {
        setState(187);
        match(TdlParser::CAST);
        setState(188);
        expr(0);
        setState(189);
        match(TdlParser::TO);
        setState(190);
        type();
        break;
      }

      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Expr_negationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(194);
      match(TdlParser::NEGATION);
      setState(195);
      expr(13);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Expr_nameContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(196);
      match(TdlParser::NAME);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<Expr_function_callContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(197);
      function_call();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<Expr_scan_callContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(198);
      builtin_scan();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<Expr_parenthesisContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(199);
      match(TdlParser::OPEN_PARENTHESIS);
      setState(200);
      expr(0);
      setState(201);
      match(TdlParser::CLOSE_PARENTHESIS);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<Expr_table_exprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(203);
      table_expr();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<Expr_row_exprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(204);
      row_expr();
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<Expr_float_constantContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(205);
      match(TdlParser::FLOAT_CONSTANT);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<Expr_integer_constantContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(206);
      match(TdlParser::INTEGER_CONSTANT);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<Expr_string_constantContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(207);
      match(TdlParser::STRING_LITERAL);
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<Expr_true_constantContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(208);
      match(TdlParser::TRUE);
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<Expr_false_constantContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(209);
      match(TdlParser::FALSE);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(223);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(221);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Expr_operatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(212);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(213);
          op();
          setState(214);
          expr(15);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Expr_element_accessContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(216);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(217);
          match(TdlParser::OPEN_BRACKET);
          setState(218);
          expr(0);
          setState(219);
          match(TdlParser::CLOSE_BRACKET);
          break;
        }

        } 
      }
      setState(225);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Block_statementContext ------------------------------------------------------------------

TdlParser::Block_statementContext::Block_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TdlParser::StatementContext* TdlParser::Block_statementContext::statement() {
  return getRuleContext<TdlParser::StatementContext>(0);
}

TdlParser::For_bodyContext* TdlParser::Block_statementContext::for_body() {
  return getRuleContext<TdlParser::For_bodyContext>(0);
}

TdlParser::While_bodyContext* TdlParser::Block_statementContext::while_body() {
  return getRuleContext<TdlParser::While_bodyContext>(0);
}

TdlParser::Until_bodyContext* TdlParser::Block_statementContext::until_body() {
  return getRuleContext<TdlParser::Until_bodyContext>(0);
}

TdlParser::If_bodyContext* TdlParser::Block_statementContext::if_body() {
  return getRuleContext<TdlParser::If_bodyContext>(0);
}


size_t TdlParser::Block_statementContext::getRuleIndex() const {
  return TdlParser::RuleBlock_statement;
}

void TdlParser::Block_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock_statement(this);
}

void TdlParser::Block_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock_statement(this);
}


antlrcpp::Any TdlParser::Block_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitBlock_statement(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::Block_statementContext* TdlParser::block_statement() {
  Block_statementContext *_localctx = _tracker.createInstance<Block_statementContext>(_ctx, getState());
  enterRule(_localctx, 30, TdlParser::RuleBlock_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(231);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TdlParser::COLUMN:
      case TdlParser::FLOAT:
      case TdlParser::INT:
      case TdlParser::ROW:
      case TdlParser::STRING:
      case TdlParser::TABLE:
      case TdlParser::BOOL:
      case TdlParser::PRINT:
      case TdlParser::NAME: {
        enterOuterAlt(_localctx, 1);
        setState(226);
        statement();
        break;
      }

      case TdlParser::FOR: {
        enterOuterAlt(_localctx, 2);
        setState(227);
        for_body();
        break;
      }

      case TdlParser::WHILE: {
        enterOuterAlt(_localctx, 3);
        setState(228);
        while_body();
        break;
      }

      case TdlParser::UNTIL: {
        enterOuterAlt(_localctx, 4);
        setState(229);
        until_body();
        break;
      }

      case TdlParser::IF: {
        enterOuterAlt(_localctx, 5);
        setState(230);
        if_body();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

TdlParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TdlParser::StatementContext::NAME() {
  return getToken(TdlParser::NAME, 0);
}

tree::TerminalNode* TdlParser::StatementContext::ASSIGN() {
  return getToken(TdlParser::ASSIGN, 0);
}

TdlParser::ExprContext* TdlParser::StatementContext::expr() {
  return getRuleContext<TdlParser::ExprContext>(0);
}

TdlParser::TypeContext* TdlParser::StatementContext::type() {
  return getRuleContext<TdlParser::TypeContext>(0);
}

TdlParser::Function_callContext* TdlParser::StatementContext::function_call() {
  return getRuleContext<TdlParser::Function_callContext>(0);
}

TdlParser::Builtin_printContext* TdlParser::StatementContext::builtin_print() {
  return getRuleContext<TdlParser::Builtin_printContext>(0);
}


size_t TdlParser::StatementContext::getRuleIndex() const {
  return TdlParser::RuleStatement;
}

void TdlParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void TdlParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any TdlParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::StatementContext* TdlParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 32, TdlParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(244);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(233);
      match(TdlParser::NAME);
      setState(234);
      match(TdlParser::ASSIGN);
      setState(235);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(236);
      type();
      setState(237);
      match(TdlParser::NAME);
      setState(240);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TdlParser::ASSIGN) {
        setState(238);
        match(TdlParser::ASSIGN);
        setState(239);
        expr(0);
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(242);
      function_call();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(243);
      builtin_print();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Print_exprContext ------------------------------------------------------------------

TdlParser::Print_exprContext::Print_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TdlParser::ExprContext* TdlParser::Print_exprContext::expr() {
  return getRuleContext<TdlParser::ExprContext>(0);
}

tree::TerminalNode* TdlParser::Print_exprContext::STRING_LITERAL() {
  return getToken(TdlParser::STRING_LITERAL, 0);
}


size_t TdlParser::Print_exprContext::getRuleIndex() const {
  return TdlParser::RulePrint_expr;
}

void TdlParser::Print_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint_expr(this);
}

void TdlParser::Print_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint_expr(this);
}


antlrcpp::Any TdlParser::Print_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitPrint_expr(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::Print_exprContext* TdlParser::print_expr() {
  Print_exprContext *_localctx = _tracker.createInstance<Print_exprContext>(_ctx, getState());
  enterRule(_localctx, 34, TdlParser::RulePrint_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(248);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      setState(246);
      expr(0);
      break;
    }

    case 2: {
      setState(247);
      match(TdlParser::STRING_LITERAL);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Print_signatureContext ------------------------------------------------------------------

TdlParser::Print_signatureContext::Print_signatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TdlParser::Print_signatureContext::OPEN_PARENTHESIS() {
  return getToken(TdlParser::OPEN_PARENTHESIS, 0);
}

tree::TerminalNode* TdlParser::Print_signatureContext::CLOSE_PARENTHESIS() {
  return getToken(TdlParser::CLOSE_PARENTHESIS, 0);
}

std::vector<TdlParser::Print_exprContext *> TdlParser::Print_signatureContext::print_expr() {
  return getRuleContexts<TdlParser::Print_exprContext>();
}

TdlParser::Print_exprContext* TdlParser::Print_signatureContext::print_expr(size_t i) {
  return getRuleContext<TdlParser::Print_exprContext>(i);
}

std::vector<tree::TerminalNode *> TdlParser::Print_signatureContext::COMMA() {
  return getTokens(TdlParser::COMMA);
}

tree::TerminalNode* TdlParser::Print_signatureContext::COMMA(size_t i) {
  return getToken(TdlParser::COMMA, i);
}


size_t TdlParser::Print_signatureContext::getRuleIndex() const {
  return TdlParser::RulePrint_signature;
}

void TdlParser::Print_signatureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint_signature(this);
}

void TdlParser::Print_signatureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint_signature(this);
}


antlrcpp::Any TdlParser::Print_signatureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitPrint_signature(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::Print_signatureContext* TdlParser::print_signature() {
  Print_signatureContext *_localctx = _tracker.createInstance<Print_signatureContext>(_ctx, getState());
  enterRule(_localctx, 36, TdlParser::RulePrint_signature);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(250);
    match(TdlParser::OPEN_PARENTHESIS);

    setState(251);
    print_expr();
    setState(256);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TdlParser::COMMA) {
      setState(252);
      match(TdlParser::COMMA);
      setState(253);
      print_expr();
      setState(258);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(259);
    match(TdlParser::CLOSE_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Builtin_printContext ------------------------------------------------------------------

TdlParser::Builtin_printContext::Builtin_printContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TdlParser::Builtin_printContext::PRINT() {
  return getToken(TdlParser::PRINT, 0);
}

TdlParser::Print_signatureContext* TdlParser::Builtin_printContext::print_signature() {
  return getRuleContext<TdlParser::Print_signatureContext>(0);
}


size_t TdlParser::Builtin_printContext::getRuleIndex() const {
  return TdlParser::RuleBuiltin_print;
}

void TdlParser::Builtin_printContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBuiltin_print(this);
}

void TdlParser::Builtin_printContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBuiltin_print(this);
}


antlrcpp::Any TdlParser::Builtin_printContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitBuiltin_print(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::Builtin_printContext* TdlParser::builtin_print() {
  Builtin_printContext *_localctx = _tracker.createInstance<Builtin_printContext>(_ctx, getState());
  enterRule(_localctx, 38, TdlParser::RuleBuiltin_print);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261);
    match(TdlParser::PRINT);
    setState(262);
    print_signature();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Builtin_scanContext ------------------------------------------------------------------

TdlParser::Builtin_scanContext::Builtin_scanContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TdlParser::Builtin_scanContext::SCAN() {
  return getToken(TdlParser::SCAN, 0);
}

tree::TerminalNode* TdlParser::Builtin_scanContext::OPEN_PARENTHESIS() {
  return getToken(TdlParser::OPEN_PARENTHESIS, 0);
}

TdlParser::TypeContext* TdlParser::Builtin_scanContext::type() {
  return getRuleContext<TdlParser::TypeContext>(0);
}

tree::TerminalNode* TdlParser::Builtin_scanContext::CLOSE_PARENTHESIS() {
  return getToken(TdlParser::CLOSE_PARENTHESIS, 0);
}


size_t TdlParser::Builtin_scanContext::getRuleIndex() const {
  return TdlParser::RuleBuiltin_scan;
}

void TdlParser::Builtin_scanContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBuiltin_scan(this);
}

void TdlParser::Builtin_scanContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBuiltin_scan(this);
}


antlrcpp::Any TdlParser::Builtin_scanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitBuiltin_scan(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::Builtin_scanContext* TdlParser::builtin_scan() {
  Builtin_scanContext *_localctx = _tracker.createInstance<Builtin_scanContext>(_ctx, getState());
  enterRule(_localctx, 40, TdlParser::RuleBuiltin_scan);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(264);
    match(TdlParser::SCAN);
    setState(265);
    match(TdlParser::OPEN_PARENTHESIS);
    setState(266);
    type();
    setState(267);
    match(TdlParser::CLOSE_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RetContext ------------------------------------------------------------------

TdlParser::RetContext::RetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TdlParser::RetContext::RETURN() {
  return getToken(TdlParser::RETURN, 0);
}

TdlParser::ExprContext* TdlParser::RetContext::expr() {
  return getRuleContext<TdlParser::ExprContext>(0);
}


size_t TdlParser::RetContext::getRuleIndex() const {
  return TdlParser::RuleRet;
}

void TdlParser::RetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRet(this);
}

void TdlParser::RetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRet(this);
}


antlrcpp::Any TdlParser::RetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitRet(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::RetContext* TdlParser::ret() {
  RetContext *_localctx = _tracker.createInstance<RetContext>(_ctx, getState());
  enterRule(_localctx, 42, TdlParser::RuleRet);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(269);
    match(TdlParser::RETURN);
    setState(271);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TdlParser::TRUE)
      | (1ULL << TdlParser::FALSE)
      | (1ULL << TdlParser::SCAN)
      | (1ULL << TdlParser::CAST)
      | (1ULL << TdlParser::NAME)
      | (1ULL << TdlParser::INTEGER_CONSTANT)
      | (1ULL << TdlParser::FLOAT_CONSTANT)
      | (1ULL << TdlParser::STRING_LITERAL)
      | (1ULL << TdlParser::OPEN_PARENTHESIS)
      | (1ULL << TdlParser::OPEN_BRACKET)
      | (1ULL << TdlParser::OPEN_BRACE)
      | (1ULL << TdlParser::NEGATION))) != 0)) {
      setState(270);
      expr(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

TdlParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TdlParser::BlockContext::BEGIN() {
  return getToken(TdlParser::BEGIN, 0);
}

tree::TerminalNode* TdlParser::BlockContext::END() {
  return getToken(TdlParser::END, 0);
}

std::vector<TdlParser::Block_statementContext *> TdlParser::BlockContext::block_statement() {
  return getRuleContexts<TdlParser::Block_statementContext>();
}

TdlParser::Block_statementContext* TdlParser::BlockContext::block_statement(size_t i) {
  return getRuleContext<TdlParser::Block_statementContext>(i);
}

TdlParser::RetContext* TdlParser::BlockContext::ret() {
  return getRuleContext<TdlParser::RetContext>(0);
}


size_t TdlParser::BlockContext::getRuleIndex() const {
  return TdlParser::RuleBlock;
}

void TdlParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void TdlParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any TdlParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::BlockContext* TdlParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 44, TdlParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
    match(TdlParser::BEGIN);
    setState(277);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TdlParser::COLUMN)
      | (1ULL << TdlParser::FLOAT)
      | (1ULL << TdlParser::INT)
      | (1ULL << TdlParser::ROW)
      | (1ULL << TdlParser::STRING)
      | (1ULL << TdlParser::TABLE)
      | (1ULL << TdlParser::BOOL)
      | (1ULL << TdlParser::PRINT)
      | (1ULL << TdlParser::IF)
      | (1ULL << TdlParser::FOR)
      | (1ULL << TdlParser::WHILE)
      | (1ULL << TdlParser::UNTIL)
      | (1ULL << TdlParser::NAME))) != 0)) {
      setState(274);
      block_statement();
      setState(279);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(281);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TdlParser::RETURN) {
      setState(280);
      ret();
    }
    setState(283);
    match(TdlParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Signature_argumentsContext ------------------------------------------------------------------

TdlParser::Signature_argumentsContext::Signature_argumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TdlParser::TypeContext* TdlParser::Signature_argumentsContext::type() {
  return getRuleContext<TdlParser::TypeContext>(0);
}

tree::TerminalNode* TdlParser::Signature_argumentsContext::NAME() {
  return getToken(TdlParser::NAME, 0);
}

tree::TerminalNode* TdlParser::Signature_argumentsContext::COMMA() {
  return getToken(TdlParser::COMMA, 0);
}

TdlParser::Signature_argumentsContext* TdlParser::Signature_argumentsContext::signature_arguments() {
  return getRuleContext<TdlParser::Signature_argumentsContext>(0);
}


size_t TdlParser::Signature_argumentsContext::getRuleIndex() const {
  return TdlParser::RuleSignature_arguments;
}

void TdlParser::Signature_argumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSignature_arguments(this);
}

void TdlParser::Signature_argumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSignature_arguments(this);
}


antlrcpp::Any TdlParser::Signature_argumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitSignature_arguments(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::Signature_argumentsContext* TdlParser::signature_arguments() {
  Signature_argumentsContext *_localctx = _tracker.createInstance<Signature_argumentsContext>(_ctx, getState());
  enterRule(_localctx, 46, TdlParser::RuleSignature_arguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(296);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(285);
      type();
      setState(287);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TdlParser::NAME) {
        setState(286);
        match(TdlParser::NAME);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(289);
      type();
      setState(291);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TdlParser::NAME) {
        setState(290);
        match(TdlParser::NAME);
      }
      setState(293);
      match(TdlParser::COMMA);
      setState(294);
      signature_arguments();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_signatureContext ------------------------------------------------------------------

TdlParser::Function_signatureContext::Function_signatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TdlParser::Function_signatureContext::OPEN_PARENTHESIS() {
  return getToken(TdlParser::OPEN_PARENTHESIS, 0);
}

tree::TerminalNode* TdlParser::Function_signatureContext::CLOSE_PARENTHESIS() {
  return getToken(TdlParser::CLOSE_PARENTHESIS, 0);
}

TdlParser::Signature_argumentsContext* TdlParser::Function_signatureContext::signature_arguments() {
  return getRuleContext<TdlParser::Signature_argumentsContext>(0);
}


size_t TdlParser::Function_signatureContext::getRuleIndex() const {
  return TdlParser::RuleFunction_signature;
}

void TdlParser::Function_signatureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_signature(this);
}

void TdlParser::Function_signatureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_signature(this);
}


antlrcpp::Any TdlParser::Function_signatureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitFunction_signature(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::Function_signatureContext* TdlParser::function_signature() {
  Function_signatureContext *_localctx = _tracker.createInstance<Function_signatureContext>(_ctx, getState());
  enterRule(_localctx, 48, TdlParser::RuleFunction_signature);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(298);
    match(TdlParser::OPEN_PARENTHESIS);
    setState(300);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TdlParser::COLUMN)
      | (1ULL << TdlParser::FLOAT)
      | (1ULL << TdlParser::INT)
      | (1ULL << TdlParser::ROW)
      | (1ULL << TdlParser::STRING)
      | (1ULL << TdlParser::TABLE)
      | (1ULL << TdlParser::BOOL))) != 0)) {
      setState(299);
      signature_arguments();
    }
    setState(302);
    match(TdlParser::CLOSE_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_definitionContext ------------------------------------------------------------------

TdlParser::Function_definitionContext::Function_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TdlParser::Function_definitionContext::FUNCTION() {
  return getToken(TdlParser::FUNCTION, 0);
}

tree::TerminalNode* TdlParser::Function_definitionContext::NAME() {
  return getToken(TdlParser::NAME, 0);
}

TdlParser::Function_signatureContext* TdlParser::Function_definitionContext::function_signature() {
  return getRuleContext<TdlParser::Function_signatureContext>(0);
}

TdlParser::BlockContext* TdlParser::Function_definitionContext::block() {
  return getRuleContext<TdlParser::BlockContext>(0);
}

tree::TerminalNode* TdlParser::Function_definitionContext::RETURNS() {
  return getToken(TdlParser::RETURNS, 0);
}

TdlParser::TypeContext* TdlParser::Function_definitionContext::type() {
  return getRuleContext<TdlParser::TypeContext>(0);
}


size_t TdlParser::Function_definitionContext::getRuleIndex() const {
  return TdlParser::RuleFunction_definition;
}

void TdlParser::Function_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_definition(this);
}

void TdlParser::Function_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_definition(this);
}


antlrcpp::Any TdlParser::Function_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitFunction_definition(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::Function_definitionContext* TdlParser::function_definition() {
  Function_definitionContext *_localctx = _tracker.createInstance<Function_definitionContext>(_ctx, getState());
  enterRule(_localctx, 50, TdlParser::RuleFunction_definition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(304);
    match(TdlParser::FUNCTION);
    setState(305);
    match(TdlParser::NAME);
    setState(306);
    function_signature();
    setState(309);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TdlParser::RETURNS) {
      setState(307);
      match(TdlParser::RETURNS);
      setState(308);
      type();
    }
    setState(311);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Call_signatureContext ------------------------------------------------------------------

TdlParser::Call_signatureContext::Call_signatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TdlParser::Call_signatureContext::OPEN_PARENTHESIS() {
  return getToken(TdlParser::OPEN_PARENTHESIS, 0);
}

tree::TerminalNode* TdlParser::Call_signatureContext::CLOSE_PARENTHESIS() {
  return getToken(TdlParser::CLOSE_PARENTHESIS, 0);
}

std::vector<TdlParser::ExprContext *> TdlParser::Call_signatureContext::expr() {
  return getRuleContexts<TdlParser::ExprContext>();
}

TdlParser::ExprContext* TdlParser::Call_signatureContext::expr(size_t i) {
  return getRuleContext<TdlParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> TdlParser::Call_signatureContext::COMMA() {
  return getTokens(TdlParser::COMMA);
}

tree::TerminalNode* TdlParser::Call_signatureContext::COMMA(size_t i) {
  return getToken(TdlParser::COMMA, i);
}


size_t TdlParser::Call_signatureContext::getRuleIndex() const {
  return TdlParser::RuleCall_signature;
}

void TdlParser::Call_signatureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall_signature(this);
}

void TdlParser::Call_signatureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall_signature(this);
}


antlrcpp::Any TdlParser::Call_signatureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitCall_signature(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::Call_signatureContext* TdlParser::call_signature() {
  Call_signatureContext *_localctx = _tracker.createInstance<Call_signatureContext>(_ctx, getState());
  enterRule(_localctx, 52, TdlParser::RuleCall_signature);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(313);
    match(TdlParser::OPEN_PARENTHESIS);
    setState(322);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TdlParser::TRUE)
      | (1ULL << TdlParser::FALSE)
      | (1ULL << TdlParser::SCAN)
      | (1ULL << TdlParser::CAST)
      | (1ULL << TdlParser::NAME)
      | (1ULL << TdlParser::INTEGER_CONSTANT)
      | (1ULL << TdlParser::FLOAT_CONSTANT)
      | (1ULL << TdlParser::STRING_LITERAL)
      | (1ULL << TdlParser::OPEN_PARENTHESIS)
      | (1ULL << TdlParser::OPEN_BRACKET)
      | (1ULL << TdlParser::OPEN_BRACE)
      | (1ULL << TdlParser::NEGATION))) != 0)) {
      setState(314);
      expr(0);
      setState(319);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TdlParser::COMMA) {
        setState(315);
        match(TdlParser::COMMA);
        setState(316);
        expr(0);
        setState(321);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(324);
    match(TdlParser::CLOSE_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_callContext ------------------------------------------------------------------

TdlParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TdlParser::Function_callContext::NAME() {
  return getToken(TdlParser::NAME, 0);
}

TdlParser::Call_signatureContext* TdlParser::Function_callContext::call_signature() {
  return getRuleContext<TdlParser::Call_signatureContext>(0);
}


size_t TdlParser::Function_callContext::getRuleIndex() const {
  return TdlParser::RuleFunction_call;
}

void TdlParser::Function_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call(this);
}

void TdlParser::Function_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call(this);
}


antlrcpp::Any TdlParser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TdlVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}

TdlParser::Function_callContext* TdlParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 54, TdlParser::RuleFunction_call);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(326);
    match(TdlParser::NAME);
    setState(327);
    call_signature();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool TdlParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 14: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool TdlParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 14);
    case 1: return precpred(_ctx, 9);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> TdlParser::_decisionToDFA;
atn::PredictionContextCache TdlParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN TdlParser::_atn;
std::vector<uint16_t> TdlParser::_serializedATN;

std::vector<std::string> TdlParser::_ruleNames = {
  "tdl", "global_scope", "program", "type", "math_operator", "comparison_operator", 
  "op", "row_expr", "table_expr", "if_body", "else_body", "while_body", 
  "until_body", "for_body", "expr", "block_statement", "statement", "print_expr", 
  "print_signature", "builtin_print", "builtin_scan", "ret", "block", "signature_arguments", 
  "function_signature", "function_definition", "call_signature", "function_call"
};

std::vector<std::string> TdlParser::_literalNames = {
  "", "'main'", "'column'", "'float'", "'int'", "'row'", "'string'", "'table'", 
  "'bool'", "'true'", "'false'", "'print'", "'scan'", "'if'", "'else'", 
  "'for'", "'while'", "'until'", "'return'", "'cast'", "'to'", "'in'", "'fn'", 
  "'returns'", "'begin'", "'end'", "", "", "", "", "", "", "", "'('", "')'", 
  "'['", "']'", "'{'", "'}'", "','", "'+'", "'-'", "'*'", "'/'", "'|'", 
  "'!'", "'=='", "'!='", "'<'", "'>'", "'='", "'>='", "'<='", "';'"
};

std::vector<std::string> TdlParser::_symbolicNames = {
  "", "", "COLUMN", "FLOAT", "INT", "ROW", "STRING", "TABLE", "BOOL", "TRUE", 
  "FALSE", "PRINT", "SCAN", "IF", "ELSE", "FOR", "WHILE", "UNTIL", "RETURN", 
  "CAST", "TO", "IN", "FUNCTION", "RETURNS", "BEGIN", "END", "NAME", "INTEGER_CONSTANT", 
  "FLOAT_CONSTANT", "STRING_LITERAL", "WS", "COMMENT", "COMMENT_MULTILINE", 
  "OPEN_PARENTHESIS", "CLOSE_PARENTHESIS", "OPEN_BRACKET", "CLOSE_BRACKET", 
  "OPEN_BRACE", "CLOSE_BRACE", "COMMA", "PLUS", "MINUS", "MULTIPLY", "DIVISION", 
  "PIPE", "NEGATION", "EQUAL", "NOT_EQUAL", "LESS", "GREAT", "ASSIGN", "GREAT_EQ", 
  "LESS_EQ", "SEMI"
};

dfa::Vocabulary TdlParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> TdlParser::_tokenNames;

TdlParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x37, 0x14c, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x3, 0x2, 0x7, 0x2, 0x3c, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x3f, 0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x42, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x45, 0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x48, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x4b, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 
    0x2, 0x4f, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x52, 0xb, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x5a, 0xa, 0x3, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x67, 0xa, 0x8, 0x3, 
    0x9, 0x3, 0x9, 0x7, 0x9, 0x6b, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x6e, 0xb, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x74, 0xa, 0xa, 
    0xc, 0xa, 0xe, 0xa, 0x77, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x7f, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x5, 0xc, 0x84, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x5, 0xf, 0x91, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x95, 0xa, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x99, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x9f, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 
    0xf, 0xa3, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xa7, 0xa, 0xf, 0x3, 
    0xf, 0x5, 0xf, 0xaa, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xb2, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 
    0xf, 0xb6, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x5, 0x10, 0xc3, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 
    0xd5, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xe0, 0xa, 0x10, 
    0xc, 0x10, 0xe, 0x10, 0xe3, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xea, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xf3, 
    0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xf7, 0xa, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x5, 0x13, 0xfb, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x7, 0x14, 0x101, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x104, 
    0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x5, 0x17, 0x112, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x116, 
    0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x119, 0xb, 0x18, 0x3, 0x18, 0x5, 0x18, 
    0x11c, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 
    0x122, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x126, 0xa, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x12b, 0xa, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x5, 0x1a, 0x12f, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x138, 0xa, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 
    0x1c, 0x140, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x143, 0xb, 0x1c, 0x5, 
    0x1c, 0x145, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x2, 0x3, 0x1e, 0x1e, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x2, 
    0x5, 0x3, 0x2, 0x4, 0xa, 0x4, 0x2, 0x2a, 0x2d, 0x34, 0x34, 0x4, 0x2, 
    0x30, 0x33, 0x35, 0x36, 0x2, 0x165, 0x2, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x6, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x8, 0x5e, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x60, 0x3, 0x2, 0x2, 0x2, 0xc, 0x62, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x66, 0x3, 0x2, 0x2, 0x2, 0x10, 0x68, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x71, 0x3, 0x2, 0x2, 0x2, 0x14, 0x7a, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x80, 0x3, 0x2, 0x2, 0x2, 0x18, 0x85, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x89, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xd4, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x22, 0xf6, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0xfa, 0x3, 0x2, 0x2, 0x2, 0x26, 0xfc, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x107, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x10a, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x113, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x32, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x132, 0x3, 0x2, 0x2, 0x2, 0x36, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x38, 0x148, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x3c, 0x5, 0x4, 0x3, 0x2, 0x3b, 0x3a, 0x3, 
    0x2, 0x2, 0x2, 0x3c, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3b, 0x3, 0x2, 
    0x2, 0x2, 0x3d, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x3f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x40, 0x42, 0x5, 0x34, 0x1b, 0x2, 
    0x41, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x45, 0x3, 0x2, 0x2, 0x2, 0x43, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 0x44, 0x49, 
    0x3, 0x2, 0x2, 0x2, 0x45, 0x43, 0x3, 0x2, 0x2, 0x2, 0x46, 0x48, 0x5, 
    0x4, 0x3, 0x2, 0x47, 0x46, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x49, 0x47, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x3, 0x2, 0x2, 
    0x2, 0x4a, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 0x2, 
    0x4c, 0x50, 0x5, 0x6, 0x4, 0x2, 0x4d, 0x4f, 0x5, 0x4, 0x3, 0x2, 0x4e, 
    0x4d, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x52, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4e, 
    0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 0x51, 0x53, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0x2, 
    0x2, 0x3, 0x54, 0x3, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x5, 0x8, 0x5, 
    0x2, 0x56, 0x59, 0x7, 0x1c, 0x2, 0x2, 0x57, 0x58, 0x7, 0x34, 0x2, 0x2, 
    0x58, 0x5a, 0x5, 0x1e, 0x10, 0x2, 0x59, 0x57, 0x3, 0x2, 0x2, 0x2, 0x59, 
    0x5a, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 
    0x7, 0x3, 0x2, 0x2, 0x5c, 0x5d, 0x5, 0x2e, 0x18, 0x2, 0x5d, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x5e, 0x5f, 0x9, 0x2, 0x2, 0x2, 0x5f, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x60, 0x61, 0x9, 0x3, 0x2, 0x2, 0x61, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x62, 0x63, 0x9, 0x4, 0x2, 0x2, 0x63, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x64, 0x67, 0x5, 0xc, 0x7, 0x2, 0x65, 0x67, 0x5, 0xa, 0x6, 0x2, 0x66, 
    0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x6c, 0x7, 0x25, 0x2, 0x2, 0x69, 0x6b, 0x5, 
    0x1e, 0x10, 0x2, 0x6a, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6e, 0x3, 0x2, 
    0x2, 0x2, 0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x3, 0x2, 0x2, 
    0x2, 0x6d, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 0x2, 0x2, 0x2, 
    0x6f, 0x70, 0x7, 0x26, 0x2, 0x2, 0x70, 0x11, 0x3, 0x2, 0x2, 0x2, 0x71, 
    0x75, 0x7, 0x27, 0x2, 0x2, 0x72, 0x74, 0x5, 0x1e, 0x10, 0x2, 0x73, 0x72, 
    0x3, 0x2, 0x2, 0x2, 0x74, 0x77, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 
    0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 0x78, 0x3, 0x2, 
    0x2, 0x2, 0x77, 0x75, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x7, 0x28, 0x2, 
    0x2, 0x79, 0x13, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0xf, 0x2, 0x2, 
    0x7b, 0x7c, 0x5, 0x1e, 0x10, 0x2, 0x7c, 0x7e, 0x5, 0x2e, 0x18, 0x2, 
    0x7d, 0x7f, 0x5, 0x16, 0xc, 0x2, 0x7e, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7e, 
    0x7f, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x15, 0x3, 0x2, 0x2, 0x2, 0x80, 0x83, 
    0x7, 0x10, 0x2, 0x2, 0x81, 0x84, 0x5, 0x14, 0xb, 0x2, 0x82, 0x84, 0x5, 
    0x2e, 0x18, 0x2, 0x83, 0x81, 0x3, 0x2, 0x2, 0x2, 0x83, 0x82, 0x3, 0x2, 
    0x2, 0x2, 0x84, 0x17, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x7, 0x12, 0x2, 
    0x2, 0x86, 0x87, 0x5, 0x1e, 0x10, 0x2, 0x87, 0x88, 0x5, 0x2e, 0x18, 
    0x2, 0x88, 0x19, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x7, 0x13, 0x2, 0x2, 
    0x8a, 0x8b, 0x5, 0x1e, 0x10, 0x2, 0x8b, 0x8c, 0x5, 0x2e, 0x18, 0x2, 
    0x8c, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0x11, 0x2, 0x2, 0x8e, 
    0x90, 0x7, 0x23, 0x2, 0x2, 0x8f, 0x91, 0x5, 0x22, 0x12, 0x2, 0x90, 0x8f, 
    0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x3, 
    0x2, 0x2, 0x2, 0x92, 0x94, 0x7, 0x37, 0x2, 0x2, 0x93, 0x95, 0x5, 0x1e, 
    0x10, 0x2, 0x94, 0x93, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x3, 0x2, 0x2, 
    0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 0x96, 0x98, 0x7, 0x37, 0x2, 0x2, 
    0x97, 0x99, 0x5, 0x1e, 0x10, 0x2, 0x98, 0x97, 0x3, 0x2, 0x2, 0x2, 0x98, 
    0x99, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 
    0x7, 0x24, 0x2, 0x2, 0x9b, 0xaa, 0x5, 0x2e, 0x18, 0x2, 0x9c, 0x9e, 0x7, 
    0x11, 0x2, 0x2, 0x9d, 0x9f, 0x5, 0x22, 0x12, 0x2, 0x9e, 0x9d, 0x3, 0x2, 
    0x2, 0x2, 0x9e, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x3, 0x2, 0x2, 
    0x2, 0xa0, 0xa2, 0x7, 0x37, 0x2, 0x2, 0xa1, 0xa3, 0x5, 0x1e, 0x10, 0x2, 
    0xa2, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa3, 
    0xa4, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa6, 0x7, 0x37, 0x2, 0x2, 0xa5, 0xa7, 
    0x5, 0x1e, 0x10, 0x2, 0xa6, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x3, 
    0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xaa, 0x5, 0x2e, 
    0x18, 0x2, 0xa9, 0x8d, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x9c, 0x3, 0x2, 0x2, 
    0x2, 0xaa, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x7, 0x11, 0x2, 0x2, 
    0xac, 0xad, 0x5, 0x8, 0x5, 0x2, 0xad, 0xae, 0x7, 0x1c, 0x2, 0x2, 0xae, 
    0xb1, 0x7, 0x17, 0x2, 0x2, 0xaf, 0xb2, 0x7, 0x1c, 0x2, 0x2, 0xb0, 0xb2, 
    0x5, 0x38, 0x1d, 0x2, 0xb1, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb0, 0x3, 
    0x2, 0x2, 0x2, 0xb2, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x5, 0x2e, 
    0x18, 0x2, 0xb4, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xa9, 0x3, 0x2, 0x2, 
    0x2, 0xb5, 0xab, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0xc2, 0x8, 0x10, 0x1, 0x2, 0xb8, 0xb9, 0x7, 0x15, 0x2, 0x2, 0xb9, 
    0xba, 0x7, 0x16, 0x2, 0x2, 0xba, 0xbb, 0x5, 0x8, 0x5, 0x2, 0xbb, 0xbc, 
    0x5, 0x1e, 0x10, 0x2, 0xbc, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x7, 
    0x15, 0x2, 0x2, 0xbe, 0xbf, 0x5, 0x1e, 0x10, 0x2, 0xbf, 0xc0, 0x7, 0x16, 
    0x2, 0x2, 0xc0, 0xc1, 0x5, 0x8, 0x5, 0x2, 0xc1, 0xc3, 0x3, 0x2, 0x2, 
    0x2, 0xc2, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xbd, 0x3, 0x2, 0x2, 0x2, 
    0xc3, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x2f, 0x2, 0x2, 0xc5, 
    0xd5, 0x5, 0x1e, 0x10, 0xf, 0xc6, 0xd5, 0x7, 0x1c, 0x2, 0x2, 0xc7, 0xd5, 
    0x5, 0x38, 0x1d, 0x2, 0xc8, 0xd5, 0x5, 0x2a, 0x16, 0x2, 0xc9, 0xca, 
    0x7, 0x23, 0x2, 0x2, 0xca, 0xcb, 0x5, 0x1e, 0x10, 0x2, 0xcb, 0xcc, 0x7, 
    0x24, 0x2, 0x2, 0xcc, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xd5, 0x5, 0x12, 
    0xa, 0x2, 0xce, 0xd5, 0x5, 0x10, 0x9, 0x2, 0xcf, 0xd5, 0x7, 0x1e, 0x2, 
    0x2, 0xd0, 0xd5, 0x7, 0x1d, 0x2, 0x2, 0xd1, 0xd5, 0x7, 0x1f, 0x2, 0x2, 
    0xd2, 0xd5, 0x7, 0xb, 0x2, 0x2, 0xd3, 0xd5, 0x7, 0xc, 0x2, 0x2, 0xd4, 
    0xb7, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xc6, 
    0x3, 0x2, 0x2, 0x2, 0xd4, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xc8, 0x3, 
    0x2, 0x2, 0x2, 0xd4, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xcd, 0x3, 0x2, 
    0x2, 0x2, 0xd4, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xcf, 0x3, 0x2, 0x2, 
    0x2, 0xd4, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd1, 0x3, 0x2, 0x2, 0x2, 
    0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd5, 
    0xe1, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0xc, 0x10, 0x2, 0x2, 0xd7, 0xd8, 
    0x5, 0xe, 0x8, 0x2, 0xd8, 0xd9, 0x5, 0x1e, 0x10, 0x11, 0xd9, 0xe0, 0x3, 
    0x2, 0x2, 0x2, 0xda, 0xdb, 0xc, 0xb, 0x2, 0x2, 0xdb, 0xdc, 0x7, 0x25, 
    0x2, 0x2, 0xdc, 0xdd, 0x5, 0x1e, 0x10, 0x2, 0xdd, 0xde, 0x7, 0x26, 0x2, 
    0x2, 0xde, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xd6, 0x3, 0x2, 0x2, 0x2, 
    0xdf, 0xda, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe1, 
    0xdf, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0xe3, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xea, 0x5, 
    0x22, 0x12, 0x2, 0xe5, 0xea, 0x5, 0x1c, 0xf, 0x2, 0xe6, 0xea, 0x5, 0x18, 
    0xd, 0x2, 0xe7, 0xea, 0x5, 0x1a, 0xe, 0x2, 0xe8, 0xea, 0x5, 0x14, 0xb, 
    0x2, 0xe9, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xe5, 0x3, 0x2, 0x2, 0x2, 
    0xe9, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe9, 
    0xe8, 0x3, 0x2, 0x2, 0x2, 0xea, 0x21, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 
    0x7, 0x1c, 0x2, 0x2, 0xec, 0xed, 0x7, 0x34, 0x2, 0x2, 0xed, 0xf7, 0x5, 
    0x1e, 0x10, 0x2, 0xee, 0xef, 0x5, 0x8, 0x5, 0x2, 0xef, 0xf2, 0x7, 0x1c, 
    0x2, 0x2, 0xf0, 0xf1, 0x7, 0x34, 0x2, 0x2, 0xf1, 0xf3, 0x5, 0x1e, 0x10, 
    0x2, 0xf2, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 0x2, 
    0xf3, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf7, 0x5, 0x38, 0x1d, 0x2, 0xf5, 
    0xf7, 0x5, 0x28, 0x15, 0x2, 0xf6, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xee, 
    0x3, 0x2, 0x2, 0x2, 0xf6, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf5, 0x3, 
    0x2, 0x2, 0x2, 0xf7, 0x23, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xfb, 0x5, 0x1e, 
    0x10, 0x2, 0xf9, 0xfb, 0x7, 0x1f, 0x2, 0x2, 0xfa, 0xf8, 0x3, 0x2, 0x2, 
    0x2, 0xfa, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfb, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0xfc, 0xfd, 0x7, 0x23, 0x2, 0x2, 0xfd, 0x102, 0x5, 0x24, 0x13, 0x2, 
    0xfe, 0xff, 0x7, 0x29, 0x2, 0x2, 0xff, 0x101, 0x5, 0x24, 0x13, 0x2, 
    0x100, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x101, 0x104, 0x3, 0x2, 0x2, 0x2, 0x102, 
    0x100, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 0x2, 0x2, 0x2, 0x103, 
    0x105, 0x3, 0x2, 0x2, 0x2, 0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 0x105, 
    0x106, 0x7, 0x24, 0x2, 0x2, 0x106, 0x27, 0x3, 0x2, 0x2, 0x2, 0x107, 
    0x108, 0x7, 0xd, 0x2, 0x2, 0x108, 0x109, 0x5, 0x26, 0x14, 0x2, 0x109, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x7, 0xe, 0x2, 0x2, 0x10b, 0x10c, 
    0x7, 0x23, 0x2, 0x2, 0x10c, 0x10d, 0x5, 0x8, 0x5, 0x2, 0x10d, 0x10e, 
    0x7, 0x24, 0x2, 0x2, 0x10e, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x111, 
    0x7, 0x14, 0x2, 0x2, 0x110, 0x112, 0x5, 0x1e, 0x10, 0x2, 0x111, 0x110, 
    0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x3, 0x2, 0x2, 0x2, 0x112, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0x113, 0x117, 0x7, 0x1a, 0x2, 0x2, 0x114, 0x116, 0x5, 
    0x20, 0x11, 0x2, 0x115, 0x114, 0x3, 0x2, 0x2, 0x2, 0x116, 0x119, 0x3, 
    0x2, 0x2, 0x2, 0x117, 0x115, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 0x3, 
    0x2, 0x2, 0x2, 0x118, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x119, 0x117, 0x3, 
    0x2, 0x2, 0x2, 0x11a, 0x11c, 0x5, 0x2c, 0x17, 0x2, 0x11b, 0x11a, 0x3, 
    0x2, 0x2, 0x2, 0x11b, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 0x3, 
    0x2, 0x2, 0x2, 0x11d, 0x11e, 0x7, 0x1b, 0x2, 0x2, 0x11e, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x11f, 0x121, 0x5, 0x8, 0x5, 0x2, 0x120, 0x122, 0x7, 
    0x1c, 0x2, 0x2, 0x121, 0x120, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x3, 
    0x2, 0x2, 0x2, 0x122, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x123, 0x125, 0x5, 
    0x8, 0x5, 0x2, 0x124, 0x126, 0x7, 0x1c, 0x2, 0x2, 0x125, 0x124, 0x3, 
    0x2, 0x2, 0x2, 0x125, 0x126, 0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x3, 
    0x2, 0x2, 0x2, 0x127, 0x128, 0x7, 0x29, 0x2, 0x2, 0x128, 0x129, 0x5, 
    0x30, 0x19, 0x2, 0x129, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x11f, 0x3, 
    0x2, 0x2, 0x2, 0x12a, 0x123, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0x12c, 0x12e, 0x7, 0x23, 0x2, 0x2, 0x12d, 0x12f, 0x5, 0x30, 
    0x19, 0x2, 0x12e, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x3, 0x2, 
    0x2, 0x2, 0x12f, 0x130, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x7, 0x24, 
    0x2, 0x2, 0x131, 0x33, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 0x7, 0x18, 
    0x2, 0x2, 0x133, 0x134, 0x7, 0x1c, 0x2, 0x2, 0x134, 0x137, 0x5, 0x32, 
    0x1a, 0x2, 0x135, 0x136, 0x7, 0x19, 0x2, 0x2, 0x136, 0x138, 0x5, 0x8, 
    0x5, 0x2, 0x137, 0x135, 0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 0x3, 0x2, 
    0x2, 0x2, 0x138, 0x139, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x5, 0x2e, 
    0x18, 0x2, 0x13a, 0x35, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x144, 0x7, 0x23, 
    0x2, 0x2, 0x13c, 0x141, 0x5, 0x1e, 0x10, 0x2, 0x13d, 0x13e, 0x7, 0x29, 
    0x2, 0x2, 0x13e, 0x140, 0x5, 0x1e, 0x10, 0x2, 0x13f, 0x13d, 0x3, 0x2, 
    0x2, 0x2, 0x140, 0x143, 0x3, 0x2, 0x2, 0x2, 0x141, 0x13f, 0x3, 0x2, 
    0x2, 0x2, 0x141, 0x142, 0x3, 0x2, 0x2, 0x2, 0x142, 0x145, 0x3, 0x2, 
    0x2, 0x2, 0x143, 0x141, 0x3, 0x2, 0x2, 0x2, 0x144, 0x13c, 0x3, 0x2, 
    0x2, 0x2, 0x144, 0x145, 0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 0x3, 0x2, 
    0x2, 0x2, 0x146, 0x147, 0x7, 0x24, 0x2, 0x2, 0x147, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x148, 0x149, 0x7, 0x1c, 0x2, 0x2, 0x149, 0x14a, 0x5, 0x36, 
    0x1c, 0x2, 0x14a, 0x39, 0x3, 0x2, 0x2, 0x2, 0x28, 0x3d, 0x43, 0x49, 
    0x50, 0x59, 0x66, 0x6c, 0x75, 0x7e, 0x83, 0x90, 0x94, 0x98, 0x9e, 0xa2, 
    0xa6, 0xa9, 0xb1, 0xb5, 0xc2, 0xd4, 0xdf, 0xe1, 0xe9, 0xf2, 0xf6, 0xfa, 
    0x102, 0x111, 0x117, 0x11b, 0x121, 0x125, 0x12a, 0x12e, 0x137, 0x141, 
    0x144, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

TdlParser::Initializer TdlParser::_init;
