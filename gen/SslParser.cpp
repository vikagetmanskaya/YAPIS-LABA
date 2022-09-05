
// Generated from Ssl.g4 by ANTLR 4.10.1


#include "SslListener.h"
#include "SslVisitor.h"

#include "SslParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct SslParserStaticData final {
  SslParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SslParserStaticData(const SslParserStaticData&) = delete;
  SslParserStaticData(SslParserStaticData&&) = delete;
  SslParserStaticData& operator=(const SslParserStaticData&) = delete;
  SslParserStaticData& operator=(SslParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag sslParserOnceFlag;
SslParserStaticData *sslParserStaticData = nullptr;

void sslParserInitialize() {
  assert(sslParserStaticData == nullptr);
  auto staticData = std::make_unique<SslParserStaticData>(
    std::vector<std::string>{
      "ssl", "program", "type", "math_operator", "comparison_operator", 
      "operator", "vector_cast", "matrix_cast", "number_cast", "generic_cast", 
      "number_or_var", "vector_expr", "vector_or_var", "matrix_expr", "if_body", 
      "else_body", "while_body", "until_body", "for_body", "expr", "block_statement", 
      "statement", "return", "block", "signature_arguments", "sub_program_signature", 
      "sub_program_definition", "call_signature", "sub_program_call"
    },
    std::vector<std::string>{
      "", "'main_program'", "'real'", "'vector'", "'matrix'", "'begin'", 
      "'end'", "'print'", "'scan'", "'if'", "'else'", "'for'", "'while'", 
      "'until'", "'return'", "", "", "", "", "", "'('", "')'", "'['", "']'", 
      "'{'", "'}'", "','", "'+'", "'-'", "'*'", "'/'", "'|'", "'!'", "'=='", 
      "'!='", "'<'", "'>'", "'='", "'>='", "'<='", "';'"
    },
    std::vector<std::string>{
      "", "", "NUMBER", "VECTOR", "MATRIX", "BEGIN", "END", "PRINT", "SCAN", 
      "IF", "ELSE", "FOR", "WHILE", "UNTIL", "RETURN", "NAME", "NUMBER_CONSTANT", 
      "WS", "COMMENT", "COMMENT_MULTILINE", "OPEN_PARENTHESIS", "CLOSE_PARENTHESIS", 
      "OPEN_BRACKET", "CLOSE_BRACKET", "OPEN_BRACE", "CLOSE_BRACE", "COMMA", 
      "PLUS", "MINUS", "MULTIPLY", "DIVISION", "PIPE", "NEGATION", "EQUAL", 
      "NOT_EQUAL", "LESS", "GREAT", "ASSIGN", "GREAT_EQ", "LESS_EQ", "SEMI", 
      "STRING"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,41,272,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,1,0,5,0,60,8,0,10,0,12,0,63,9,0,1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,3,1,
  	3,1,4,1,4,1,5,1,5,3,5,78,8,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,
  	1,8,1,8,1,9,1,9,1,9,3,9,95,8,9,1,10,1,10,1,11,1,11,3,11,101,8,11,1,11,
  	1,11,5,11,105,8,11,10,11,12,11,108,9,11,1,11,1,11,1,12,1,12,3,12,114,
  	8,12,1,13,1,13,3,13,118,8,13,1,13,1,13,5,13,122,8,13,10,13,12,13,125,
  	9,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,3,14,135,8,14,1,15,1,15,
  	1,15,3,15,140,8,15,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,
  	1,17,1,17,1,18,1,18,1,18,3,18,157,8,18,1,18,1,18,3,18,161,8,18,1,18,1,
  	18,3,18,165,8,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,
  	19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,3,
  	19,191,8,19,1,19,1,19,1,19,1,19,5,19,197,8,19,10,19,12,19,200,9,19,1,
  	20,1,20,1,20,1,20,1,20,3,20,207,8,20,1,21,1,21,1,21,1,21,1,21,1,21,1,
  	21,3,21,216,8,21,1,21,3,21,219,8,21,1,22,1,22,1,22,1,23,1,23,5,23,226,
  	8,23,10,23,12,23,229,9,23,1,23,3,23,232,8,23,1,23,1,23,1,24,1,24,3,24,
  	238,8,24,1,24,1,24,3,24,242,8,24,1,24,1,24,1,24,3,24,247,8,24,1,25,1,
  	25,1,25,1,25,1,26,1,26,1,26,1,26,1,26,1,27,1,27,1,27,1,27,5,27,262,8,
  	27,10,27,12,27,265,9,27,1,27,1,27,1,28,1,28,1,28,1,28,0,1,38,29,0,2,4,
  	6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,
  	54,56,0,4,1,0,2,4,2,0,27,30,37,37,2,0,33,36,38,39,1,0,15,16,276,0,61,
  	1,0,0,0,2,66,1,0,0,0,4,69,1,0,0,0,6,71,1,0,0,0,8,73,1,0,0,0,10,77,1,0,
  	0,0,12,79,1,0,0,0,14,83,1,0,0,0,16,87,1,0,0,0,18,94,1,0,0,0,20,96,1,0,
  	0,0,22,98,1,0,0,0,24,113,1,0,0,0,26,115,1,0,0,0,28,128,1,0,0,0,30,136,
  	1,0,0,0,32,141,1,0,0,0,34,147,1,0,0,0,36,153,1,0,0,0,38,190,1,0,0,0,40,
  	206,1,0,0,0,42,218,1,0,0,0,44,220,1,0,0,0,46,223,1,0,0,0,48,246,1,0,0,
  	0,50,248,1,0,0,0,52,252,1,0,0,0,54,257,1,0,0,0,56,268,1,0,0,0,58,60,3,
  	52,26,0,59,58,1,0,0,0,60,63,1,0,0,0,61,59,1,0,0,0,61,62,1,0,0,0,62,64,
  	1,0,0,0,63,61,1,0,0,0,64,65,3,2,1,0,65,1,1,0,0,0,66,67,5,1,0,0,67,68,
  	3,46,23,0,68,3,1,0,0,0,69,70,7,0,0,0,70,5,1,0,0,0,71,72,7,1,0,0,72,7,
  	1,0,0,0,73,74,7,2,0,0,74,9,1,0,0,0,75,78,3,8,4,0,76,78,3,6,3,0,77,75,
  	1,0,0,0,77,76,1,0,0,0,78,11,1,0,0,0,79,80,5,20,0,0,80,81,5,3,0,0,81,82,
  	5,21,0,0,82,13,1,0,0,0,83,84,5,20,0,0,84,85,5,4,0,0,85,86,5,21,0,0,86,
  	15,1,0,0,0,87,88,5,20,0,0,88,89,5,2,0,0,89,90,5,21,0,0,90,17,1,0,0,0,
  	91,95,3,12,6,0,92,95,3,14,7,0,93,95,3,16,8,0,94,91,1,0,0,0,94,92,1,0,
  	0,0,94,93,1,0,0,0,95,19,1,0,0,0,96,97,7,3,0,0,97,21,1,0,0,0,98,100,5,
  	24,0,0,99,101,3,20,10,0,100,99,1,0,0,0,100,101,1,0,0,0,101,106,1,0,0,
  	0,102,103,5,26,0,0,103,105,3,20,10,0,104,102,1,0,0,0,105,108,1,0,0,0,
  	106,104,1,0,0,0,106,107,1,0,0,0,107,109,1,0,0,0,108,106,1,0,0,0,109,110,
  	5,25,0,0,110,23,1,0,0,0,111,114,3,22,11,0,112,114,5,15,0,0,113,111,1,
  	0,0,0,113,112,1,0,0,0,114,25,1,0,0,0,115,117,5,24,0,0,116,118,3,24,12,
  	0,117,116,1,0,0,0,117,118,1,0,0,0,118,123,1,0,0,0,119,120,5,26,0,0,120,
  	122,3,24,12,0,121,119,1,0,0,0,122,125,1,0,0,0,123,121,1,0,0,0,123,124,
  	1,0,0,0,124,126,1,0,0,0,125,123,1,0,0,0,126,127,5,25,0,0,127,27,1,0,0,
  	0,128,129,5,9,0,0,129,130,5,20,0,0,130,131,3,38,19,0,131,132,5,21,0,0,
  	132,134,3,46,23,0,133,135,3,30,15,0,134,133,1,0,0,0,134,135,1,0,0,0,135,
  	29,1,0,0,0,136,139,5,10,0,0,137,140,3,28,14,0,138,140,3,46,23,0,139,137,
  	1,0,0,0,139,138,1,0,0,0,140,31,1,0,0,0,141,142,5,12,0,0,142,143,5,20,
  	0,0,143,144,3,38,19,0,144,145,5,21,0,0,145,146,3,46,23,0,146,33,1,0,0,
  	0,147,148,5,12,0,0,148,149,5,20,0,0,149,150,3,38,19,0,150,151,5,21,0,
  	0,151,152,3,46,23,0,152,35,1,0,0,0,153,154,5,12,0,0,154,156,5,20,0,0,
  	155,157,3,42,21,0,156,155,1,0,0,0,156,157,1,0,0,0,157,158,1,0,0,0,158,
  	160,5,40,0,0,159,161,3,38,19,0,160,159,1,0,0,0,160,161,1,0,0,0,161,162,
  	1,0,0,0,162,164,5,40,0,0,163,165,3,38,19,0,164,163,1,0,0,0,164,165,1,
  	0,0,0,165,166,1,0,0,0,166,167,5,21,0,0,167,168,3,46,23,0,168,37,1,0,0,
  	0,169,170,6,19,-1,0,170,171,3,18,9,0,171,172,3,38,19,8,172,191,1,0,0,
  	0,173,174,5,32,0,0,174,191,3,38,19,6,175,191,5,15,0,0,176,191,3,56,28,
  	0,177,178,5,15,0,0,178,179,5,22,0,0,179,180,3,20,10,0,180,181,5,23,0,
  	0,181,191,1,0,0,0,182,183,5,31,0,0,183,184,3,38,19,0,184,185,5,31,0,0,
  	185,191,1,0,0,0,186,187,5,20,0,0,187,188,3,38,19,0,188,189,5,21,0,0,189,
  	191,1,0,0,0,190,169,1,0,0,0,190,173,1,0,0,0,190,175,1,0,0,0,190,176,1,
  	0,0,0,190,177,1,0,0,0,190,182,1,0,0,0,190,186,1,0,0,0,191,198,1,0,0,0,
  	192,193,10,7,0,0,193,194,3,10,5,0,194,195,3,38,19,8,195,197,1,0,0,0,196,
  	192,1,0,0,0,197,200,1,0,0,0,198,196,1,0,0,0,198,199,1,0,0,0,199,39,1,
  	0,0,0,200,198,1,0,0,0,201,207,3,42,21,0,202,207,3,36,18,0,203,207,3,32,
  	16,0,204,207,3,34,17,0,205,207,3,28,14,0,206,201,1,0,0,0,206,202,1,0,
  	0,0,206,203,1,0,0,0,206,204,1,0,0,0,206,205,1,0,0,0,207,41,1,0,0,0,208,
  	209,5,15,0,0,209,210,5,37,0,0,210,219,3,38,19,0,211,212,3,4,2,0,212,215,
  	5,15,0,0,213,214,5,37,0,0,214,216,3,38,19,0,215,213,1,0,0,0,215,216,1,
  	0,0,0,216,219,1,0,0,0,217,219,3,56,28,0,218,208,1,0,0,0,218,211,1,0,0,
  	0,218,217,1,0,0,0,219,43,1,0,0,0,220,221,5,14,0,0,221,222,3,38,19,0,222,
  	45,1,0,0,0,223,227,5,5,0,0,224,226,3,40,20,0,225,224,1,0,0,0,226,229,
  	1,0,0,0,227,225,1,0,0,0,227,228,1,0,0,0,228,231,1,0,0,0,229,227,1,0,0,
  	0,230,232,3,44,22,0,231,230,1,0,0,0,231,232,1,0,0,0,232,233,1,0,0,0,233,
  	234,5,6,0,0,234,47,1,0,0,0,235,237,3,4,2,0,236,238,5,15,0,0,237,236,1,
  	0,0,0,237,238,1,0,0,0,238,247,1,0,0,0,239,241,3,4,2,0,240,242,5,15,0,
  	0,241,240,1,0,0,0,241,242,1,0,0,0,242,243,1,0,0,0,243,244,5,26,0,0,244,
  	245,3,48,24,0,245,247,1,0,0,0,246,235,1,0,0,0,246,239,1,0,0,0,247,49,
  	1,0,0,0,248,249,5,20,0,0,249,250,3,48,24,0,250,251,5,21,0,0,251,51,1,
  	0,0,0,252,253,3,4,2,0,253,254,5,15,0,0,254,255,3,50,25,0,255,256,3,46,
  	23,0,256,53,1,0,0,0,257,258,5,20,0,0,258,263,3,38,19,0,259,260,5,26,0,
  	0,260,262,3,38,19,0,261,259,1,0,0,0,262,265,1,0,0,0,263,261,1,0,0,0,263,
  	264,1,0,0,0,264,266,1,0,0,0,265,263,1,0,0,0,266,267,5,21,0,0,267,55,1,
  	0,0,0,268,269,5,15,0,0,269,270,3,54,27,0,270,57,1,0,0,0,24,61,77,94,100,
  	106,113,117,123,134,139,156,160,164,190,198,206,215,218,227,231,237,241,
  	246,263
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  sslParserStaticData = staticData.release();
}

}

SslParser::SslParser(TokenStream *input) : SslParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SslParser::SslParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SslParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *sslParserStaticData->atn, sslParserStaticData->decisionToDFA, sslParserStaticData->sharedContextCache, options);
}

SslParser::~SslParser() {
  delete _interpreter;
}

const atn::ATN& SslParser::getATN() const {
  return *sslParserStaticData->atn;
}

std::string SslParser::getGrammarFileName() const {
  return "Ssl.g4";
}

const std::vector<std::string>& SslParser::getRuleNames() const {
  return sslParserStaticData->ruleNames;
}

const dfa::Vocabulary& SslParser::getVocabulary() const {
  return sslParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SslParser::getSerializedATN() const {
  return sslParserStaticData->serializedATN;
}


//----------------- SslContext ------------------------------------------------------------------

SslParser::SslContext::SslContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SslParser::ProgramContext* SslParser::SslContext::program() {
  return getRuleContext<SslParser::ProgramContext>(0);
}

std::vector<SslParser::Sub_program_definitionContext *> SslParser::SslContext::sub_program_definition() {
  return getRuleContexts<SslParser::Sub_program_definitionContext>();
}

SslParser::Sub_program_definitionContext* SslParser::SslContext::sub_program_definition(size_t i) {
  return getRuleContext<SslParser::Sub_program_definitionContext>(i);
}


size_t SslParser::SslContext::getRuleIndex() const {
  return SslParser::RuleSsl;
}

void SslParser::SslContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSsl(this);
}

void SslParser::SslContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSsl(this);
}


std::any SslParser::SslContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitSsl(this);
  else
    return visitor->visitChildren(this);
}

SslParser::SslContext* SslParser::ssl() {
  SslContext *_localctx = _tracker.createInstance<SslContext>(_ctx, getState());
  enterRule(_localctx, 0, SslParser::RuleSsl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SslParser::NUMBER)
      | (1ULL << SslParser::VECTOR)
      | (1ULL << SslParser::MATRIX))) != 0)) {
      setState(58);
      sub_program_definition();
      setState(63);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(64);
    program();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

SslParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SslParser::BlockContext* SslParser::ProgramContext::block() {
  return getRuleContext<SslParser::BlockContext>(0);
}


size_t SslParser::ProgramContext::getRuleIndex() const {
  return SslParser::RuleProgram;
}

void SslParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void SslParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any SslParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

SslParser::ProgramContext* SslParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 2, SslParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    match(SslParser::T__0);
    setState(67);
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

SslParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SslParser::TypeContext::NUMBER() {
  return getToken(SslParser::NUMBER, 0);
}

tree::TerminalNode* SslParser::TypeContext::VECTOR() {
  return getToken(SslParser::VECTOR, 0);
}

tree::TerminalNode* SslParser::TypeContext::MATRIX() {
  return getToken(SslParser::MATRIX, 0);
}


size_t SslParser::TypeContext::getRuleIndex() const {
  return SslParser::RuleType;
}

void SslParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void SslParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


std::any SslParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

SslParser::TypeContext* SslParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 4, SslParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SslParser::NUMBER)
      | (1ULL << SslParser::VECTOR)
      | (1ULL << SslParser::MATRIX))) != 0))) {
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

SslParser::Math_operatorContext::Math_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SslParser::Math_operatorContext::PLUS() {
  return getToken(SslParser::PLUS, 0);
}

tree::TerminalNode* SslParser::Math_operatorContext::MINUS() {
  return getToken(SslParser::MINUS, 0);
}

tree::TerminalNode* SslParser::Math_operatorContext::MULTIPLY() {
  return getToken(SslParser::MULTIPLY, 0);
}

tree::TerminalNode* SslParser::Math_operatorContext::DIVISION() {
  return getToken(SslParser::DIVISION, 0);
}

tree::TerminalNode* SslParser::Math_operatorContext::ASSIGN() {
  return getToken(SslParser::ASSIGN, 0);
}


size_t SslParser::Math_operatorContext::getRuleIndex() const {
  return SslParser::RuleMath_operator;
}

void SslParser::Math_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMath_operator(this);
}

void SslParser::Math_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMath_operator(this);
}


std::any SslParser::Math_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitMath_operator(this);
  else
    return visitor->visitChildren(this);
}

SslParser::Math_operatorContext* SslParser::math_operator() {
  Math_operatorContext *_localctx = _tracker.createInstance<Math_operatorContext>(_ctx, getState());
  enterRule(_localctx, 6, SslParser::RuleMath_operator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SslParser::PLUS)
      | (1ULL << SslParser::MINUS)
      | (1ULL << SslParser::MULTIPLY)
      | (1ULL << SslParser::DIVISION)
      | (1ULL << SslParser::ASSIGN))) != 0))) {
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

SslParser::Comparison_operatorContext::Comparison_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SslParser::Comparison_operatorContext::EQUAL() {
  return getToken(SslParser::EQUAL, 0);
}

tree::TerminalNode* SslParser::Comparison_operatorContext::NOT_EQUAL() {
  return getToken(SslParser::NOT_EQUAL, 0);
}

tree::TerminalNode* SslParser::Comparison_operatorContext::LESS() {
  return getToken(SslParser::LESS, 0);
}

tree::TerminalNode* SslParser::Comparison_operatorContext::GREAT() {
  return getToken(SslParser::GREAT, 0);
}

tree::TerminalNode* SslParser::Comparison_operatorContext::GREAT_EQ() {
  return getToken(SslParser::GREAT_EQ, 0);
}

tree::TerminalNode* SslParser::Comparison_operatorContext::LESS_EQ() {
  return getToken(SslParser::LESS_EQ, 0);
}


size_t SslParser::Comparison_operatorContext::getRuleIndex() const {
  return SslParser::RuleComparison_operator;
}

void SslParser::Comparison_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison_operator(this);
}

void SslParser::Comparison_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison_operator(this);
}


std::any SslParser::Comparison_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitComparison_operator(this);
  else
    return visitor->visitChildren(this);
}

SslParser::Comparison_operatorContext* SslParser::comparison_operator() {
  Comparison_operatorContext *_localctx = _tracker.createInstance<Comparison_operatorContext>(_ctx, getState());
  enterRule(_localctx, 8, SslParser::RuleComparison_operator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SslParser::EQUAL)
      | (1ULL << SslParser::NOT_EQUAL)
      | (1ULL << SslParser::LESS)
      | (1ULL << SslParser::GREAT)
      | (1ULL << SslParser::GREAT_EQ)
      | (1ULL << SslParser::LESS_EQ))) != 0))) {
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

//----------------- OperatorContext ------------------------------------------------------------------

SslParser::OperatorContext::OperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SslParser::Comparison_operatorContext* SslParser::OperatorContext::comparison_operator() {
  return getRuleContext<SslParser::Comparison_operatorContext>(0);
}

SslParser::Math_operatorContext* SslParser::OperatorContext::math_operator() {
  return getRuleContext<SslParser::Math_operatorContext>(0);
}


size_t SslParser::OperatorContext::getRuleIndex() const {
  return SslParser::RuleOperator;
}

void SslParser::OperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperator(this);
}

void SslParser::OperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperator(this);
}


std::any SslParser::OperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitOperator(this);
  else
    return visitor->visitChildren(this);
}

SslParser::OperatorContext* SslParser::operator_() {
  OperatorContext *_localctx = _tracker.createInstance<OperatorContext>(_ctx, getState());
  enterRule(_localctx, 10, SslParser::RuleOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(77);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SslParser::EQUAL:
      case SslParser::NOT_EQUAL:
      case SslParser::LESS:
      case SslParser::GREAT:
      case SslParser::GREAT_EQ:
      case SslParser::LESS_EQ: {
        enterOuterAlt(_localctx, 1);
        setState(75);
        comparison_operator();
        break;
      }

      case SslParser::PLUS:
      case SslParser::MINUS:
      case SslParser::MULTIPLY:
      case SslParser::DIVISION:
      case SslParser::ASSIGN: {
        enterOuterAlt(_localctx, 2);
        setState(76);
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

//----------------- Vector_castContext ------------------------------------------------------------------

SslParser::Vector_castContext::Vector_castContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SslParser::Vector_castContext::OPEN_PARENTHESIS() {
  return getToken(SslParser::OPEN_PARENTHESIS, 0);
}

tree::TerminalNode* SslParser::Vector_castContext::VECTOR() {
  return getToken(SslParser::VECTOR, 0);
}

tree::TerminalNode* SslParser::Vector_castContext::CLOSE_PARENTHESIS() {
  return getToken(SslParser::CLOSE_PARENTHESIS, 0);
}


size_t SslParser::Vector_castContext::getRuleIndex() const {
  return SslParser::RuleVector_cast;
}

void SslParser::Vector_castContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVector_cast(this);
}

void SslParser::Vector_castContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVector_cast(this);
}


std::any SslParser::Vector_castContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitVector_cast(this);
  else
    return visitor->visitChildren(this);
}

SslParser::Vector_castContext* SslParser::vector_cast() {
  Vector_castContext *_localctx = _tracker.createInstance<Vector_castContext>(_ctx, getState());
  enterRule(_localctx, 12, SslParser::RuleVector_cast);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(SslParser::OPEN_PARENTHESIS);
    setState(80);
    match(SslParser::VECTOR);
    setState(81);
    match(SslParser::CLOSE_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Matrix_castContext ------------------------------------------------------------------

SslParser::Matrix_castContext::Matrix_castContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SslParser::Matrix_castContext::OPEN_PARENTHESIS() {
  return getToken(SslParser::OPEN_PARENTHESIS, 0);
}

tree::TerminalNode* SslParser::Matrix_castContext::MATRIX() {
  return getToken(SslParser::MATRIX, 0);
}

tree::TerminalNode* SslParser::Matrix_castContext::CLOSE_PARENTHESIS() {
  return getToken(SslParser::CLOSE_PARENTHESIS, 0);
}


size_t SslParser::Matrix_castContext::getRuleIndex() const {
  return SslParser::RuleMatrix_cast;
}

void SslParser::Matrix_castContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatrix_cast(this);
}

void SslParser::Matrix_castContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatrix_cast(this);
}


std::any SslParser::Matrix_castContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitMatrix_cast(this);
  else
    return visitor->visitChildren(this);
}

SslParser::Matrix_castContext* SslParser::matrix_cast() {
  Matrix_castContext *_localctx = _tracker.createInstance<Matrix_castContext>(_ctx, getState());
  enterRule(_localctx, 14, SslParser::RuleMatrix_cast);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(SslParser::OPEN_PARENTHESIS);
    setState(84);
    match(SslParser::MATRIX);
    setState(85);
    match(SslParser::CLOSE_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Number_castContext ------------------------------------------------------------------

SslParser::Number_castContext::Number_castContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SslParser::Number_castContext::OPEN_PARENTHESIS() {
  return getToken(SslParser::OPEN_PARENTHESIS, 0);
}

tree::TerminalNode* SslParser::Number_castContext::NUMBER() {
  return getToken(SslParser::NUMBER, 0);
}

tree::TerminalNode* SslParser::Number_castContext::CLOSE_PARENTHESIS() {
  return getToken(SslParser::CLOSE_PARENTHESIS, 0);
}


size_t SslParser::Number_castContext::getRuleIndex() const {
  return SslParser::RuleNumber_cast;
}

void SslParser::Number_castContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber_cast(this);
}

void SslParser::Number_castContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber_cast(this);
}


std::any SslParser::Number_castContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitNumber_cast(this);
  else
    return visitor->visitChildren(this);
}

SslParser::Number_castContext* SslParser::number_cast() {
  Number_castContext *_localctx = _tracker.createInstance<Number_castContext>(_ctx, getState());
  enterRule(_localctx, 16, SslParser::RuleNumber_cast);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    match(SslParser::OPEN_PARENTHESIS);
    setState(88);
    match(SslParser::NUMBER);
    setState(89);
    match(SslParser::CLOSE_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Generic_castContext ------------------------------------------------------------------

SslParser::Generic_castContext::Generic_castContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SslParser::Vector_castContext* SslParser::Generic_castContext::vector_cast() {
  return getRuleContext<SslParser::Vector_castContext>(0);
}

SslParser::Matrix_castContext* SslParser::Generic_castContext::matrix_cast() {
  return getRuleContext<SslParser::Matrix_castContext>(0);
}

SslParser::Number_castContext* SslParser::Generic_castContext::number_cast() {
  return getRuleContext<SslParser::Number_castContext>(0);
}


size_t SslParser::Generic_castContext::getRuleIndex() const {
  return SslParser::RuleGeneric_cast;
}

void SslParser::Generic_castContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGeneric_cast(this);
}

void SslParser::Generic_castContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGeneric_cast(this);
}


std::any SslParser::Generic_castContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitGeneric_cast(this);
  else
    return visitor->visitChildren(this);
}

SslParser::Generic_castContext* SslParser::generic_cast() {
  Generic_castContext *_localctx = _tracker.createInstance<Generic_castContext>(_ctx, getState());
  enterRule(_localctx, 18, SslParser::RuleGeneric_cast);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(94);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(91);
      vector_cast();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(92);
      matrix_cast();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(93);
      number_cast();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Number_or_varContext ------------------------------------------------------------------

SslParser::Number_or_varContext::Number_or_varContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SslParser::Number_or_varContext::NUMBER_CONSTANT() {
  return getToken(SslParser::NUMBER_CONSTANT, 0);
}

tree::TerminalNode* SslParser::Number_or_varContext::NAME() {
  return getToken(SslParser::NAME, 0);
}


size_t SslParser::Number_or_varContext::getRuleIndex() const {
  return SslParser::RuleNumber_or_var;
}

void SslParser::Number_or_varContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber_or_var(this);
}

void SslParser::Number_or_varContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber_or_var(this);
}


std::any SslParser::Number_or_varContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitNumber_or_var(this);
  else
    return visitor->visitChildren(this);
}

SslParser::Number_or_varContext* SslParser::number_or_var() {
  Number_or_varContext *_localctx = _tracker.createInstance<Number_or_varContext>(_ctx, getState());
  enterRule(_localctx, 20, SslParser::RuleNumber_or_var);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    _la = _input->LA(1);
    if (!(_la == SslParser::NAME

    || _la == SslParser::NUMBER_CONSTANT)) {
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

//----------------- Vector_exprContext ------------------------------------------------------------------

SslParser::Vector_exprContext::Vector_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SslParser::Vector_exprContext::OPEN_BRACE() {
  return getToken(SslParser::OPEN_BRACE, 0);
}

tree::TerminalNode* SslParser::Vector_exprContext::CLOSE_BRACE() {
  return getToken(SslParser::CLOSE_BRACE, 0);
}

std::vector<SslParser::Number_or_varContext *> SslParser::Vector_exprContext::number_or_var() {
  return getRuleContexts<SslParser::Number_or_varContext>();
}

SslParser::Number_or_varContext* SslParser::Vector_exprContext::number_or_var(size_t i) {
  return getRuleContext<SslParser::Number_or_varContext>(i);
}

std::vector<tree::TerminalNode *> SslParser::Vector_exprContext::COMMA() {
  return getTokens(SslParser::COMMA);
}

tree::TerminalNode* SslParser::Vector_exprContext::COMMA(size_t i) {
  return getToken(SslParser::COMMA, i);
}


size_t SslParser::Vector_exprContext::getRuleIndex() const {
  return SslParser::RuleVector_expr;
}

void SslParser::Vector_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVector_expr(this);
}

void SslParser::Vector_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVector_expr(this);
}


std::any SslParser::Vector_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitVector_expr(this);
  else
    return visitor->visitChildren(this);
}

SslParser::Vector_exprContext* SslParser::vector_expr() {
  Vector_exprContext *_localctx = _tracker.createInstance<Vector_exprContext>(_ctx, getState());
  enterRule(_localctx, 22, SslParser::RuleVector_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    match(SslParser::OPEN_BRACE);
    setState(100);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SslParser::NAME

    || _la == SslParser::NUMBER_CONSTANT) {
      setState(99);
      number_or_var();
    }
    setState(106);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SslParser::COMMA) {
      setState(102);
      match(SslParser::COMMA);
      setState(103);
      number_or_var();
      setState(108);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(109);
    match(SslParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Vector_or_varContext ------------------------------------------------------------------

SslParser::Vector_or_varContext::Vector_or_varContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SslParser::Vector_exprContext* SslParser::Vector_or_varContext::vector_expr() {
  return getRuleContext<SslParser::Vector_exprContext>(0);
}

tree::TerminalNode* SslParser::Vector_or_varContext::NAME() {
  return getToken(SslParser::NAME, 0);
}


size_t SslParser::Vector_or_varContext::getRuleIndex() const {
  return SslParser::RuleVector_or_var;
}

void SslParser::Vector_or_varContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVector_or_var(this);
}

void SslParser::Vector_or_varContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVector_or_var(this);
}


std::any SslParser::Vector_or_varContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitVector_or_var(this);
  else
    return visitor->visitChildren(this);
}

SslParser::Vector_or_varContext* SslParser::vector_or_var() {
  Vector_or_varContext *_localctx = _tracker.createInstance<Vector_or_varContext>(_ctx, getState());
  enterRule(_localctx, 24, SslParser::RuleVector_or_var);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(113);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SslParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 1);
        setState(111);
        vector_expr();
        break;
      }

      case SslParser::NAME: {
        enterOuterAlt(_localctx, 2);
        setState(112);
        match(SslParser::NAME);
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

//----------------- Matrix_exprContext ------------------------------------------------------------------

SslParser::Matrix_exprContext::Matrix_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SslParser::Matrix_exprContext::OPEN_BRACE() {
  return getToken(SslParser::OPEN_BRACE, 0);
}

tree::TerminalNode* SslParser::Matrix_exprContext::CLOSE_BRACE() {
  return getToken(SslParser::CLOSE_BRACE, 0);
}

std::vector<SslParser::Vector_or_varContext *> SslParser::Matrix_exprContext::vector_or_var() {
  return getRuleContexts<SslParser::Vector_or_varContext>();
}

SslParser::Vector_or_varContext* SslParser::Matrix_exprContext::vector_or_var(size_t i) {
  return getRuleContext<SslParser::Vector_or_varContext>(i);
}

std::vector<tree::TerminalNode *> SslParser::Matrix_exprContext::COMMA() {
  return getTokens(SslParser::COMMA);
}

tree::TerminalNode* SslParser::Matrix_exprContext::COMMA(size_t i) {
  return getToken(SslParser::COMMA, i);
}


size_t SslParser::Matrix_exprContext::getRuleIndex() const {
  return SslParser::RuleMatrix_expr;
}

void SslParser::Matrix_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatrix_expr(this);
}

void SslParser::Matrix_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatrix_expr(this);
}


std::any SslParser::Matrix_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitMatrix_expr(this);
  else
    return visitor->visitChildren(this);
}

SslParser::Matrix_exprContext* SslParser::matrix_expr() {
  Matrix_exprContext *_localctx = _tracker.createInstance<Matrix_exprContext>(_ctx, getState());
  enterRule(_localctx, 26, SslParser::RuleMatrix_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(SslParser::OPEN_BRACE);
    setState(117);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SslParser::NAME

    || _la == SslParser::OPEN_BRACE) {
      setState(116);
      vector_or_var();
    }
    setState(123);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SslParser::COMMA) {
      setState(119);
      match(SslParser::COMMA);
      setState(120);
      vector_or_var();
      setState(125);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(126);
    match(SslParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_bodyContext ------------------------------------------------------------------

SslParser::If_bodyContext::If_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SslParser::If_bodyContext::IF() {
  return getToken(SslParser::IF, 0);
}

tree::TerminalNode* SslParser::If_bodyContext::OPEN_PARENTHESIS() {
  return getToken(SslParser::OPEN_PARENTHESIS, 0);
}

SslParser::ExprContext* SslParser::If_bodyContext::expr() {
  return getRuleContext<SslParser::ExprContext>(0);
}

tree::TerminalNode* SslParser::If_bodyContext::CLOSE_PARENTHESIS() {
  return getToken(SslParser::CLOSE_PARENTHESIS, 0);
}

SslParser::BlockContext* SslParser::If_bodyContext::block() {
  return getRuleContext<SslParser::BlockContext>(0);
}

SslParser::Else_bodyContext* SslParser::If_bodyContext::else_body() {
  return getRuleContext<SslParser::Else_bodyContext>(0);
}


size_t SslParser::If_bodyContext::getRuleIndex() const {
  return SslParser::RuleIf_body;
}

void SslParser::If_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_body(this);
}

void SslParser::If_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_body(this);
}


std::any SslParser::If_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitIf_body(this);
  else
    return visitor->visitChildren(this);
}

SslParser::If_bodyContext* SslParser::if_body() {
  If_bodyContext *_localctx = _tracker.createInstance<If_bodyContext>(_ctx, getState());
  enterRule(_localctx, 28, SslParser::RuleIf_body);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    match(SslParser::IF);
    setState(129);
    match(SslParser::OPEN_PARENTHESIS);
    setState(130);
    expr(0);
    setState(131);
    match(SslParser::CLOSE_PARENTHESIS);
    setState(132);
    block();
    setState(134);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SslParser::ELSE) {
      setState(133);
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

SslParser::Else_bodyContext::Else_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SslParser::Else_bodyContext::ELSE() {
  return getToken(SslParser::ELSE, 0);
}

SslParser::If_bodyContext* SslParser::Else_bodyContext::if_body() {
  return getRuleContext<SslParser::If_bodyContext>(0);
}

SslParser::BlockContext* SslParser::Else_bodyContext::block() {
  return getRuleContext<SslParser::BlockContext>(0);
}


size_t SslParser::Else_bodyContext::getRuleIndex() const {
  return SslParser::RuleElse_body;
}

void SslParser::Else_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElse_body(this);
}

void SslParser::Else_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElse_body(this);
}


std::any SslParser::Else_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitElse_body(this);
  else
    return visitor->visitChildren(this);
}

SslParser::Else_bodyContext* SslParser::else_body() {
  Else_bodyContext *_localctx = _tracker.createInstance<Else_bodyContext>(_ctx, getState());
  enterRule(_localctx, 30, SslParser::RuleElse_body);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136);
    match(SslParser::ELSE);
    setState(139);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SslParser::IF: {
        setState(137);
        if_body();
        break;
      }

      case SslParser::BEGIN: {
        setState(138);
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

SslParser::While_bodyContext::While_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SslParser::While_bodyContext::WHILE() {
  return getToken(SslParser::WHILE, 0);
}

tree::TerminalNode* SslParser::While_bodyContext::OPEN_PARENTHESIS() {
  return getToken(SslParser::OPEN_PARENTHESIS, 0);
}

SslParser::ExprContext* SslParser::While_bodyContext::expr() {
  return getRuleContext<SslParser::ExprContext>(0);
}

tree::TerminalNode* SslParser::While_bodyContext::CLOSE_PARENTHESIS() {
  return getToken(SslParser::CLOSE_PARENTHESIS, 0);
}

SslParser::BlockContext* SslParser::While_bodyContext::block() {
  return getRuleContext<SslParser::BlockContext>(0);
}


size_t SslParser::While_bodyContext::getRuleIndex() const {
  return SslParser::RuleWhile_body;
}

void SslParser::While_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_body(this);
}

void SslParser::While_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_body(this);
}


std::any SslParser::While_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitWhile_body(this);
  else
    return visitor->visitChildren(this);
}

SslParser::While_bodyContext* SslParser::while_body() {
  While_bodyContext *_localctx = _tracker.createInstance<While_bodyContext>(_ctx, getState());
  enterRule(_localctx, 32, SslParser::RuleWhile_body);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    match(SslParser::WHILE);
    setState(142);
    match(SslParser::OPEN_PARENTHESIS);
    setState(143);
    expr(0);
    setState(144);
    match(SslParser::CLOSE_PARENTHESIS);
    setState(145);
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

SslParser::Until_bodyContext::Until_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SslParser::Until_bodyContext::WHILE() {
  return getToken(SslParser::WHILE, 0);
}

tree::TerminalNode* SslParser::Until_bodyContext::OPEN_PARENTHESIS() {
  return getToken(SslParser::OPEN_PARENTHESIS, 0);
}

SslParser::ExprContext* SslParser::Until_bodyContext::expr() {
  return getRuleContext<SslParser::ExprContext>(0);
}

tree::TerminalNode* SslParser::Until_bodyContext::CLOSE_PARENTHESIS() {
  return getToken(SslParser::CLOSE_PARENTHESIS, 0);
}

SslParser::BlockContext* SslParser::Until_bodyContext::block() {
  return getRuleContext<SslParser::BlockContext>(0);
}


size_t SslParser::Until_bodyContext::getRuleIndex() const {
  return SslParser::RuleUntil_body;
}

void SslParser::Until_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUntil_body(this);
}

void SslParser::Until_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUntil_body(this);
}


std::any SslParser::Until_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitUntil_body(this);
  else
    return visitor->visitChildren(this);
}

SslParser::Until_bodyContext* SslParser::until_body() {
  Until_bodyContext *_localctx = _tracker.createInstance<Until_bodyContext>(_ctx, getState());
  enterRule(_localctx, 34, SslParser::RuleUntil_body);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    match(SslParser::WHILE);
    setState(148);
    match(SslParser::OPEN_PARENTHESIS);
    setState(149);
    expr(0);
    setState(150);
    match(SslParser::CLOSE_PARENTHESIS);
    setState(151);
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

SslParser::For_bodyContext::For_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SslParser::For_bodyContext::WHILE() {
  return getToken(SslParser::WHILE, 0);
}

tree::TerminalNode* SslParser::For_bodyContext::OPEN_PARENTHESIS() {
  return getToken(SslParser::OPEN_PARENTHESIS, 0);
}

std::vector<tree::TerminalNode *> SslParser::For_bodyContext::SEMI() {
  return getTokens(SslParser::SEMI);
}

tree::TerminalNode* SslParser::For_bodyContext::SEMI(size_t i) {
  return getToken(SslParser::SEMI, i);
}

tree::TerminalNode* SslParser::For_bodyContext::CLOSE_PARENTHESIS() {
  return getToken(SslParser::CLOSE_PARENTHESIS, 0);
}

SslParser::BlockContext* SslParser::For_bodyContext::block() {
  return getRuleContext<SslParser::BlockContext>(0);
}

SslParser::StatementContext* SslParser::For_bodyContext::statement() {
  return getRuleContext<SslParser::StatementContext>(0);
}

std::vector<SslParser::ExprContext *> SslParser::For_bodyContext::expr() {
  return getRuleContexts<SslParser::ExprContext>();
}

SslParser::ExprContext* SslParser::For_bodyContext::expr(size_t i) {
  return getRuleContext<SslParser::ExprContext>(i);
}


size_t SslParser::For_bodyContext::getRuleIndex() const {
  return SslParser::RuleFor_body;
}

void SslParser::For_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_body(this);
}

void SslParser::For_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_body(this);
}


std::any SslParser::For_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitFor_body(this);
  else
    return visitor->visitChildren(this);
}

SslParser::For_bodyContext* SslParser::for_body() {
  For_bodyContext *_localctx = _tracker.createInstance<For_bodyContext>(_ctx, getState());
  enterRule(_localctx, 36, SslParser::RuleFor_body);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    match(SslParser::WHILE);
    setState(154);
    match(SslParser::OPEN_PARENTHESIS);
    setState(156);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SslParser::NUMBER)
      | (1ULL << SslParser::VECTOR)
      | (1ULL << SslParser::MATRIX)
      | (1ULL << SslParser::NAME))) != 0)) {
      setState(155);
      statement();
    }
    setState(158);
    match(SslParser::SEMI);
    setState(160);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SslParser::NAME)
      | (1ULL << SslParser::OPEN_PARENTHESIS)
      | (1ULL << SslParser::PIPE)
      | (1ULL << SslParser::NEGATION))) != 0)) {
      setState(159);
      expr(0);
    }
    setState(162);
    match(SslParser::SEMI);
    setState(164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SslParser::NAME)
      | (1ULL << SslParser::OPEN_PARENTHESIS)
      | (1ULL << SslParser::PIPE)
      | (1ULL << SslParser::NEGATION))) != 0)) {
      setState(163);
      expr(0);
    }
    setState(166);
    match(SslParser::CLOSE_PARENTHESIS);
    setState(167);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

SslParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SslParser::ExprContext::getRuleIndex() const {
  return SslParser::RuleExpr;
}

void SslParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Vector_length_exprContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> SslParser::Vector_length_exprContext::PIPE() {
  return getTokens(SslParser::PIPE);
}

tree::TerminalNode* SslParser::Vector_length_exprContext::PIPE(size_t i) {
  return getToken(SslParser::PIPE, i);
}

SslParser::ExprContext* SslParser::Vector_length_exprContext::expr() {
  return getRuleContext<SslParser::ExprContext>(0);
}

SslParser::Vector_length_exprContext::Vector_length_exprContext(ExprContext *ctx) { copyFrom(ctx); }

void SslParser::Vector_length_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVector_length_expr(this);
}
void SslParser::Vector_length_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVector_length_expr(this);
}

std::any SslParser::Vector_length_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitVector_length_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_castContext ------------------------------------------------------------------

SslParser::Generic_castContext* SslParser::Expr_castContext::generic_cast() {
  return getRuleContext<SslParser::Generic_castContext>(0);
}

SslParser::ExprContext* SslParser::Expr_castContext::expr() {
  return getRuleContext<SslParser::ExprContext>(0);
}

SslParser::Expr_castContext::Expr_castContext(ExprContext *ctx) { copyFrom(ctx); }

void SslParser::Expr_castContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_cast(this);
}
void SslParser::Expr_castContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_cast(this);
}

std::any SslParser::Expr_castContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitExpr_cast(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_parenthesisContext ------------------------------------------------------------------

tree::TerminalNode* SslParser::Expr_parenthesisContext::OPEN_PARENTHESIS() {
  return getToken(SslParser::OPEN_PARENTHESIS, 0);
}

SslParser::ExprContext* SslParser::Expr_parenthesisContext::expr() {
  return getRuleContext<SslParser::ExprContext>(0);
}

tree::TerminalNode* SslParser::Expr_parenthesisContext::CLOSE_PARENTHESIS() {
  return getToken(SslParser::CLOSE_PARENTHESIS, 0);
}

SslParser::Expr_parenthesisContext::Expr_parenthesisContext(ExprContext *ctx) { copyFrom(ctx); }

void SslParser::Expr_parenthesisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_parenthesis(this);
}
void SslParser::Expr_parenthesisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_parenthesis(this);
}

std::any SslParser::Expr_parenthesisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitExpr_parenthesis(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_sub_callContext ------------------------------------------------------------------

SslParser::Sub_program_callContext* SslParser::Expr_sub_callContext::sub_program_call() {
  return getRuleContext<SslParser::Sub_program_callContext>(0);
}

SslParser::Expr_sub_callContext::Expr_sub_callContext(ExprContext *ctx) { copyFrom(ctx); }

void SslParser::Expr_sub_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_sub_call(this);
}
void SslParser::Expr_sub_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_sub_call(this);
}

std::any SslParser::Expr_sub_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitExpr_sub_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_operatorContext ------------------------------------------------------------------

std::vector<SslParser::ExprContext *> SslParser::Expr_operatorContext::expr() {
  return getRuleContexts<SslParser::ExprContext>();
}

SslParser::ExprContext* SslParser::Expr_operatorContext::expr(size_t i) {
  return getRuleContext<SslParser::ExprContext>(i);
}

SslParser::OperatorContext* SslParser::Expr_operatorContext::operator_() {
  return getRuleContext<SslParser::OperatorContext>(0);
}

SslParser::Expr_operatorContext::Expr_operatorContext(ExprContext *ctx) { copyFrom(ctx); }

void SslParser::Expr_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_operator(this);
}
void SslParser::Expr_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_operator(this);
}

std::any SslParser::Expr_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitExpr_operator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_nameContext ------------------------------------------------------------------

tree::TerminalNode* SslParser::Expr_nameContext::NAME() {
  return getToken(SslParser::NAME, 0);
}

SslParser::Expr_nameContext::Expr_nameContext(ExprContext *ctx) { copyFrom(ctx); }

void SslParser::Expr_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_name(this);
}
void SslParser::Expr_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_name(this);
}

std::any SslParser::Expr_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitExpr_name(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_negationContext ------------------------------------------------------------------

tree::TerminalNode* SslParser::Expr_negationContext::NEGATION() {
  return getToken(SslParser::NEGATION, 0);
}

SslParser::ExprContext* SslParser::Expr_negationContext::expr() {
  return getRuleContext<SslParser::ExprContext>(0);
}

SslParser::Expr_negationContext::Expr_negationContext(ExprContext *ctx) { copyFrom(ctx); }

void SslParser::Expr_negationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_negation(this);
}
void SslParser::Expr_negationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_negation(this);
}

std::any SslParser::Expr_negationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitExpr_negation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Epxr_element_accessContext ------------------------------------------------------------------

tree::TerminalNode* SslParser::Epxr_element_accessContext::NAME() {
  return getToken(SslParser::NAME, 0);
}

tree::TerminalNode* SslParser::Epxr_element_accessContext::OPEN_BRACKET() {
  return getToken(SslParser::OPEN_BRACKET, 0);
}

SslParser::Number_or_varContext* SslParser::Epxr_element_accessContext::number_or_var() {
  return getRuleContext<SslParser::Number_or_varContext>(0);
}

tree::TerminalNode* SslParser::Epxr_element_accessContext::CLOSE_BRACKET() {
  return getToken(SslParser::CLOSE_BRACKET, 0);
}

SslParser::Epxr_element_accessContext::Epxr_element_accessContext(ExprContext *ctx) { copyFrom(ctx); }

void SslParser::Epxr_element_accessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEpxr_element_access(this);
}
void SslParser::Epxr_element_accessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEpxr_element_access(this);
}

std::any SslParser::Epxr_element_accessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitEpxr_element_access(this);
  else
    return visitor->visitChildren(this);
}

SslParser::ExprContext* SslParser::expr() {
   return expr(0);
}

SslParser::ExprContext* SslParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SslParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  SslParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, SslParser::RuleExpr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(190);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<Expr_castContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(170);
      generic_cast();
      setState(171);
      expr(8);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Expr_negationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(173);
      match(SslParser::NEGATION);
      setState(174);
      expr(6);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Expr_nameContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(175);
      match(SslParser::NAME);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<Expr_sub_callContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(176);
      sub_program_call();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<Epxr_element_accessContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(177);
      match(SslParser::NAME);
      setState(178);
      match(SslParser::OPEN_BRACKET);
      setState(179);
      number_or_var();
      setState(180);
      match(SslParser::CLOSE_BRACKET);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<Vector_length_exprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(182);
      match(SslParser::PIPE);
      setState(183);
      expr(0);
      setState(184);
      match(SslParser::PIPE);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<Expr_parenthesisContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(186);
      match(SslParser::OPEN_PARENTHESIS);
      setState(187);
      expr(0);
      setState(188);
      match(SslParser::CLOSE_PARENTHESIS);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(198);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Expr_operatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleExpr);
        setState(192);

        if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
        setState(193);
        operator_();
        setState(194);
        expr(8); 
      }
      setState(200);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
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

SslParser::Block_statementContext::Block_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SslParser::StatementContext* SslParser::Block_statementContext::statement() {
  return getRuleContext<SslParser::StatementContext>(0);
}

SslParser::For_bodyContext* SslParser::Block_statementContext::for_body() {
  return getRuleContext<SslParser::For_bodyContext>(0);
}

SslParser::While_bodyContext* SslParser::Block_statementContext::while_body() {
  return getRuleContext<SslParser::While_bodyContext>(0);
}

SslParser::Until_bodyContext* SslParser::Block_statementContext::until_body() {
  return getRuleContext<SslParser::Until_bodyContext>(0);
}

SslParser::If_bodyContext* SslParser::Block_statementContext::if_body() {
  return getRuleContext<SslParser::If_bodyContext>(0);
}


size_t SslParser::Block_statementContext::getRuleIndex() const {
  return SslParser::RuleBlock_statement;
}

void SslParser::Block_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock_statement(this);
}

void SslParser::Block_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock_statement(this);
}


std::any SslParser::Block_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitBlock_statement(this);
  else
    return visitor->visitChildren(this);
}

SslParser::Block_statementContext* SslParser::block_statement() {
  Block_statementContext *_localctx = _tracker.createInstance<Block_statementContext>(_ctx, getState());
  enterRule(_localctx, 40, SslParser::RuleBlock_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(206);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(201);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(202);
      for_body();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(203);
      while_body();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(204);
      until_body();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(205);
      if_body();
      break;
    }

    default:
      break;
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

SslParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SslParser::StatementContext::NAME() {
  return getToken(SslParser::NAME, 0);
}

tree::TerminalNode* SslParser::StatementContext::ASSIGN() {
  return getToken(SslParser::ASSIGN, 0);
}

SslParser::ExprContext* SslParser::StatementContext::expr() {
  return getRuleContext<SslParser::ExprContext>(0);
}

SslParser::TypeContext* SslParser::StatementContext::type() {
  return getRuleContext<SslParser::TypeContext>(0);
}

SslParser::Sub_program_callContext* SslParser::StatementContext::sub_program_call() {
  return getRuleContext<SslParser::Sub_program_callContext>(0);
}


size_t SslParser::StatementContext::getRuleIndex() const {
  return SslParser::RuleStatement;
}

void SslParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void SslParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any SslParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

SslParser::StatementContext* SslParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 42, SslParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(218);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(208);
      match(SslParser::NAME);
      setState(209);
      match(SslParser::ASSIGN);
      setState(210);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(211);
      type();
      setState(212);
      match(SslParser::NAME);
      setState(215);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SslParser::ASSIGN) {
        setState(213);
        match(SslParser::ASSIGN);
        setState(214);
        expr(0);
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(217);
      sub_program_call();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnContext ------------------------------------------------------------------

SslParser::ReturnContext::ReturnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SslParser::ReturnContext::RETURN() {
  return getToken(SslParser::RETURN, 0);
}

SslParser::ExprContext* SslParser::ReturnContext::expr() {
  return getRuleContext<SslParser::ExprContext>(0);
}


size_t SslParser::ReturnContext::getRuleIndex() const {
  return SslParser::RuleReturn;
}

void SslParser::ReturnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn(this);
}

void SslParser::ReturnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn(this);
}


std::any SslParser::ReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitReturn(this);
  else
    return visitor->visitChildren(this);
}

SslParser::ReturnContext* SslParser::return_() {
  ReturnContext *_localctx = _tracker.createInstance<ReturnContext>(_ctx, getState());
  enterRule(_localctx, 44, SslParser::RuleReturn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    match(SslParser::RETURN);
    setState(221);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

SslParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SslParser::BlockContext::BEGIN() {
  return getToken(SslParser::BEGIN, 0);
}

tree::TerminalNode* SslParser::BlockContext::END() {
  return getToken(SslParser::END, 0);
}

std::vector<SslParser::Block_statementContext *> SslParser::BlockContext::block_statement() {
  return getRuleContexts<SslParser::Block_statementContext>();
}

SslParser::Block_statementContext* SslParser::BlockContext::block_statement(size_t i) {
  return getRuleContext<SslParser::Block_statementContext>(i);
}

SslParser::ReturnContext* SslParser::BlockContext::return_() {
  return getRuleContext<SslParser::ReturnContext>(0);
}


size_t SslParser::BlockContext::getRuleIndex() const {
  return SslParser::RuleBlock;
}

void SslParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void SslParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any SslParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

SslParser::BlockContext* SslParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 46, SslParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    match(SslParser::BEGIN);
    setState(227);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SslParser::NUMBER)
      | (1ULL << SslParser::VECTOR)
      | (1ULL << SslParser::MATRIX)
      | (1ULL << SslParser::IF)
      | (1ULL << SslParser::WHILE)
      | (1ULL << SslParser::NAME))) != 0)) {
      setState(224);
      block_statement();
      setState(229);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(231);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SslParser::RETURN) {
      setState(230);
      return_();
    }
    setState(233);
    match(SslParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Signature_argumentsContext ------------------------------------------------------------------

SslParser::Signature_argumentsContext::Signature_argumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SslParser::TypeContext* SslParser::Signature_argumentsContext::type() {
  return getRuleContext<SslParser::TypeContext>(0);
}

tree::TerminalNode* SslParser::Signature_argumentsContext::NAME() {
  return getToken(SslParser::NAME, 0);
}

tree::TerminalNode* SslParser::Signature_argumentsContext::COMMA() {
  return getToken(SslParser::COMMA, 0);
}

SslParser::Signature_argumentsContext* SslParser::Signature_argumentsContext::signature_arguments() {
  return getRuleContext<SslParser::Signature_argumentsContext>(0);
}


size_t SslParser::Signature_argumentsContext::getRuleIndex() const {
  return SslParser::RuleSignature_arguments;
}

void SslParser::Signature_argumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSignature_arguments(this);
}

void SslParser::Signature_argumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSignature_arguments(this);
}


std::any SslParser::Signature_argumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitSignature_arguments(this);
  else
    return visitor->visitChildren(this);
}

SslParser::Signature_argumentsContext* SslParser::signature_arguments() {
  Signature_argumentsContext *_localctx = _tracker.createInstance<Signature_argumentsContext>(_ctx, getState());
  enterRule(_localctx, 48, SslParser::RuleSignature_arguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(246);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(235);
      type();
      setState(237);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SslParser::NAME) {
        setState(236);
        match(SslParser::NAME);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(239);
      type();
      setState(241);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SslParser::NAME) {
        setState(240);
        match(SslParser::NAME);
      }
      setState(243);
      match(SslParser::COMMA);
      setState(244);
      signature_arguments();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sub_program_signatureContext ------------------------------------------------------------------

SslParser::Sub_program_signatureContext::Sub_program_signatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SslParser::Sub_program_signatureContext::OPEN_PARENTHESIS() {
  return getToken(SslParser::OPEN_PARENTHESIS, 0);
}

SslParser::Signature_argumentsContext* SslParser::Sub_program_signatureContext::signature_arguments() {
  return getRuleContext<SslParser::Signature_argumentsContext>(0);
}

tree::TerminalNode* SslParser::Sub_program_signatureContext::CLOSE_PARENTHESIS() {
  return getToken(SslParser::CLOSE_PARENTHESIS, 0);
}


size_t SslParser::Sub_program_signatureContext::getRuleIndex() const {
  return SslParser::RuleSub_program_signature;
}

void SslParser::Sub_program_signatureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSub_program_signature(this);
}

void SslParser::Sub_program_signatureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSub_program_signature(this);
}


std::any SslParser::Sub_program_signatureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitSub_program_signature(this);
  else
    return visitor->visitChildren(this);
}

SslParser::Sub_program_signatureContext* SslParser::sub_program_signature() {
  Sub_program_signatureContext *_localctx = _tracker.createInstance<Sub_program_signatureContext>(_ctx, getState());
  enterRule(_localctx, 50, SslParser::RuleSub_program_signature);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(248);
    match(SslParser::OPEN_PARENTHESIS);
    setState(249);
    signature_arguments();
    setState(250);
    match(SslParser::CLOSE_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sub_program_definitionContext ------------------------------------------------------------------

SslParser::Sub_program_definitionContext::Sub_program_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SslParser::TypeContext* SslParser::Sub_program_definitionContext::type() {
  return getRuleContext<SslParser::TypeContext>(0);
}

tree::TerminalNode* SslParser::Sub_program_definitionContext::NAME() {
  return getToken(SslParser::NAME, 0);
}

SslParser::Sub_program_signatureContext* SslParser::Sub_program_definitionContext::sub_program_signature() {
  return getRuleContext<SslParser::Sub_program_signatureContext>(0);
}

SslParser::BlockContext* SslParser::Sub_program_definitionContext::block() {
  return getRuleContext<SslParser::BlockContext>(0);
}


size_t SslParser::Sub_program_definitionContext::getRuleIndex() const {
  return SslParser::RuleSub_program_definition;
}

void SslParser::Sub_program_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSub_program_definition(this);
}

void SslParser::Sub_program_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSub_program_definition(this);
}


std::any SslParser::Sub_program_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitSub_program_definition(this);
  else
    return visitor->visitChildren(this);
}

SslParser::Sub_program_definitionContext* SslParser::sub_program_definition() {
  Sub_program_definitionContext *_localctx = _tracker.createInstance<Sub_program_definitionContext>(_ctx, getState());
  enterRule(_localctx, 52, SslParser::RuleSub_program_definition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    type();
    setState(253);
    match(SslParser::NAME);
    setState(254);
    sub_program_signature();
    setState(255);
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

SslParser::Call_signatureContext::Call_signatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SslParser::Call_signatureContext::OPEN_PARENTHESIS() {
  return getToken(SslParser::OPEN_PARENTHESIS, 0);
}

std::vector<SslParser::ExprContext *> SslParser::Call_signatureContext::expr() {
  return getRuleContexts<SslParser::ExprContext>();
}

SslParser::ExprContext* SslParser::Call_signatureContext::expr(size_t i) {
  return getRuleContext<SslParser::ExprContext>(i);
}

tree::TerminalNode* SslParser::Call_signatureContext::CLOSE_PARENTHESIS() {
  return getToken(SslParser::CLOSE_PARENTHESIS, 0);
}

std::vector<tree::TerminalNode *> SslParser::Call_signatureContext::COMMA() {
  return getTokens(SslParser::COMMA);
}

tree::TerminalNode* SslParser::Call_signatureContext::COMMA(size_t i) {
  return getToken(SslParser::COMMA, i);
}


size_t SslParser::Call_signatureContext::getRuleIndex() const {
  return SslParser::RuleCall_signature;
}

void SslParser::Call_signatureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall_signature(this);
}

void SslParser::Call_signatureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall_signature(this);
}


std::any SslParser::Call_signatureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitCall_signature(this);
  else
    return visitor->visitChildren(this);
}

SslParser::Call_signatureContext* SslParser::call_signature() {
  Call_signatureContext *_localctx = _tracker.createInstance<Call_signatureContext>(_ctx, getState());
  enterRule(_localctx, 54, SslParser::RuleCall_signature);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    match(SslParser::OPEN_PARENTHESIS);
    setState(258);
    expr(0);
    setState(263);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SslParser::COMMA) {
      setState(259);
      match(SslParser::COMMA);
      setState(260);
      expr(0);
      setState(265);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(266);
    match(SslParser::CLOSE_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sub_program_callContext ------------------------------------------------------------------

SslParser::Sub_program_callContext::Sub_program_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SslParser::Sub_program_callContext::NAME() {
  return getToken(SslParser::NAME, 0);
}

SslParser::Call_signatureContext* SslParser::Sub_program_callContext::call_signature() {
  return getRuleContext<SslParser::Call_signatureContext>(0);
}


size_t SslParser::Sub_program_callContext::getRuleIndex() const {
  return SslParser::RuleSub_program_call;
}

void SslParser::Sub_program_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSub_program_call(this);
}

void SslParser::Sub_program_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSub_program_call(this);
}


std::any SslParser::Sub_program_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SslVisitor*>(visitor))
    return parserVisitor->visitSub_program_call(this);
  else
    return visitor->visitChildren(this);
}

SslParser::Sub_program_callContext* SslParser::sub_program_call() {
  Sub_program_callContext *_localctx = _tracker.createInstance<Sub_program_callContext>(_ctx, getState());
  enterRule(_localctx, 56, SslParser::RuleSub_program_call);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(268);
    match(SslParser::NAME);
    setState(269);
    call_signature();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool SslParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 19: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SslParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);

  default:
    break;
  }
  return true;
}

void SslParser::initialize() {
  std::call_once(sslParserOnceFlag, sslParserInitialize);
}
