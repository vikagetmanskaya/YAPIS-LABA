
// Generated from Ssl.g4 by ANTLR 4.10.1


#include "SslLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct SslLexerStaticData final {
  SslLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SslLexerStaticData(const SslLexerStaticData&) = delete;
  SslLexerStaticData(SslLexerStaticData&&) = delete;
  SslLexerStaticData& operator=(const SslLexerStaticData&) = delete;
  SslLexerStaticData& operator=(SslLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag ssllexerLexerOnceFlag;
SslLexerStaticData *ssllexerLexerStaticData = nullptr;

void ssllexerLexerInitialize() {
  assert(ssllexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<SslLexerStaticData>(
    std::vector<std::string>{
      "T__0", "NUMBER", "VECTOR", "MATRIX", "BEGIN", "END", "PRINT", "SCAN", 
      "IF", "ELSE", "FOR", "WHILE", "UNTIL", "RETURN", "NAME", "NUMBER_CONSTANT", 
      "WS", "COMMENT", "COMMENT_MULTILINE", "OPEN_PARENTHESIS", "CLOSE_PARENTHESIS", 
      "OPEN_BRACKET", "CLOSE_BRACKET", "OPEN_BRACE", "CLOSE_BRACE", "COMMA", 
      "PLUS", "MINUS", "MULTIPLY", "DIVISION", "PIPE", "NEGATION", "EQUAL", 
      "NOT_EQUAL", "LESS", "GREAT", "ASSIGN", "GREAT_EQ", "LESS_EQ", "SEMI", 
      "STRING"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,41,279,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,1,0,1,0,1,0,1,
  	0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,
  	1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,14,
  	1,14,5,14,170,8,14,10,14,12,14,173,9,14,1,14,1,14,1,15,3,15,178,8,15,
  	1,15,4,15,181,8,15,11,15,12,15,182,1,15,1,15,4,15,187,8,15,11,15,12,15,
  	188,3,15,191,8,15,1,16,4,16,194,8,16,11,16,12,16,195,1,16,1,16,1,17,1,
  	17,1,17,1,17,5,17,204,8,17,10,17,12,17,207,9,17,1,17,1,17,1,18,1,18,1,
  	18,1,18,5,18,215,8,18,10,18,12,18,218,9,18,1,18,1,18,1,18,1,18,1,18,1,
  	19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,
  	26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,30,1,30,1,31,1,31,1,32,1,32,1,
  	32,1,33,1,33,1,33,1,34,1,34,1,35,1,35,1,36,1,36,1,37,1,37,1,37,1,38,1,
  	38,1,38,1,39,1,39,1,40,1,40,5,40,273,8,40,10,40,12,40,276,9,40,1,40,1,
  	40,1,216,0,41,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,
  	12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,
  	47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,69,
  	35,71,36,73,37,75,38,77,39,79,40,81,41,1,0,5,3,0,65,90,95,95,97,122,4,
  	0,48,57,65,90,95,95,97,122,1,0,48,57,3,0,9,10,13,13,32,32,2,0,10,10,13,
  	13,287,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,
  	11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,
  	0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,
  	0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,
  	43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,
  	0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,
  	0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,
  	75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,1,83,1,0,0,0,3,96,1,
  	0,0,0,5,101,1,0,0,0,7,108,1,0,0,0,9,115,1,0,0,0,11,121,1,0,0,0,13,125,
  	1,0,0,0,15,131,1,0,0,0,17,136,1,0,0,0,19,139,1,0,0,0,21,144,1,0,0,0,23,
  	148,1,0,0,0,25,154,1,0,0,0,27,160,1,0,0,0,29,167,1,0,0,0,31,177,1,0,0,
  	0,33,193,1,0,0,0,35,199,1,0,0,0,37,210,1,0,0,0,39,224,1,0,0,0,41,226,
  	1,0,0,0,43,228,1,0,0,0,45,230,1,0,0,0,47,232,1,0,0,0,49,234,1,0,0,0,51,
  	236,1,0,0,0,53,238,1,0,0,0,55,240,1,0,0,0,57,242,1,0,0,0,59,244,1,0,0,
  	0,61,246,1,0,0,0,63,248,1,0,0,0,65,250,1,0,0,0,67,253,1,0,0,0,69,256,
  	1,0,0,0,71,258,1,0,0,0,73,260,1,0,0,0,75,262,1,0,0,0,77,265,1,0,0,0,79,
  	268,1,0,0,0,81,270,1,0,0,0,83,84,5,109,0,0,84,85,5,97,0,0,85,86,5,105,
  	0,0,86,87,5,110,0,0,87,88,5,95,0,0,88,89,5,112,0,0,89,90,5,114,0,0,90,
  	91,5,111,0,0,91,92,5,103,0,0,92,93,5,114,0,0,93,94,5,97,0,0,94,95,5,109,
  	0,0,95,2,1,0,0,0,96,97,5,114,0,0,97,98,5,101,0,0,98,99,5,97,0,0,99,100,
  	5,108,0,0,100,4,1,0,0,0,101,102,5,118,0,0,102,103,5,101,0,0,103,104,5,
  	99,0,0,104,105,5,116,0,0,105,106,5,111,0,0,106,107,5,114,0,0,107,6,1,
  	0,0,0,108,109,5,109,0,0,109,110,5,97,0,0,110,111,5,116,0,0,111,112,5,
  	114,0,0,112,113,5,105,0,0,113,114,5,120,0,0,114,8,1,0,0,0,115,116,5,98,
  	0,0,116,117,5,101,0,0,117,118,5,103,0,0,118,119,5,105,0,0,119,120,5,110,
  	0,0,120,10,1,0,0,0,121,122,5,101,0,0,122,123,5,110,0,0,123,124,5,100,
  	0,0,124,12,1,0,0,0,125,126,5,112,0,0,126,127,5,114,0,0,127,128,5,105,
  	0,0,128,129,5,110,0,0,129,130,5,116,0,0,130,14,1,0,0,0,131,132,5,115,
  	0,0,132,133,5,99,0,0,133,134,5,97,0,0,134,135,5,110,0,0,135,16,1,0,0,
  	0,136,137,5,105,0,0,137,138,5,102,0,0,138,18,1,0,0,0,139,140,5,101,0,
  	0,140,141,5,108,0,0,141,142,5,115,0,0,142,143,5,101,0,0,143,20,1,0,0,
  	0,144,145,5,102,0,0,145,146,5,111,0,0,146,147,5,114,0,0,147,22,1,0,0,
  	0,148,149,5,119,0,0,149,150,5,104,0,0,150,151,5,105,0,0,151,152,5,108,
  	0,0,152,153,5,101,0,0,153,24,1,0,0,0,154,155,5,117,0,0,155,156,5,110,
  	0,0,156,157,5,116,0,0,157,158,5,105,0,0,158,159,5,108,0,0,159,26,1,0,
  	0,0,160,161,5,114,0,0,161,162,5,101,0,0,162,163,5,116,0,0,163,164,5,117,
  	0,0,164,165,5,114,0,0,165,166,5,110,0,0,166,28,1,0,0,0,167,171,7,0,0,
  	0,168,170,7,1,0,0,169,168,1,0,0,0,170,173,1,0,0,0,171,169,1,0,0,0,171,
  	172,1,0,0,0,172,174,1,0,0,0,173,171,1,0,0,0,174,175,6,14,0,0,175,30,1,
  	0,0,0,176,178,5,45,0,0,177,176,1,0,0,0,177,178,1,0,0,0,178,180,1,0,0,
  	0,179,181,7,2,0,0,180,179,1,0,0,0,181,182,1,0,0,0,182,180,1,0,0,0,182,
  	183,1,0,0,0,183,190,1,0,0,0,184,186,5,46,0,0,185,187,7,2,0,0,186,185,
  	1,0,0,0,187,188,1,0,0,0,188,186,1,0,0,0,188,189,1,0,0,0,189,191,1,0,0,
  	0,190,184,1,0,0,0,190,191,1,0,0,0,191,32,1,0,0,0,192,194,7,3,0,0,193,
  	192,1,0,0,0,194,195,1,0,0,0,195,193,1,0,0,0,195,196,1,0,0,0,196,197,1,
  	0,0,0,197,198,6,16,1,0,198,34,1,0,0,0,199,200,5,47,0,0,200,201,5,47,0,
  	0,201,205,1,0,0,0,202,204,8,4,0,0,203,202,1,0,0,0,204,207,1,0,0,0,205,
  	203,1,0,0,0,205,206,1,0,0,0,206,208,1,0,0,0,207,205,1,0,0,0,208,209,6,
  	17,1,0,209,36,1,0,0,0,210,211,5,47,0,0,211,212,5,42,0,0,212,216,1,0,0,
  	0,213,215,9,0,0,0,214,213,1,0,0,0,215,218,1,0,0,0,216,217,1,0,0,0,216,
  	214,1,0,0,0,217,219,1,0,0,0,218,216,1,0,0,0,219,220,5,42,0,0,220,221,
  	5,47,0,0,221,222,1,0,0,0,222,223,6,18,1,0,223,38,1,0,0,0,224,225,5,40,
  	0,0,225,40,1,0,0,0,226,227,5,41,0,0,227,42,1,0,0,0,228,229,5,91,0,0,229,
  	44,1,0,0,0,230,231,5,93,0,0,231,46,1,0,0,0,232,233,5,123,0,0,233,48,1,
  	0,0,0,234,235,5,125,0,0,235,50,1,0,0,0,236,237,5,44,0,0,237,52,1,0,0,
  	0,238,239,5,43,0,0,239,54,1,0,0,0,240,241,5,45,0,0,241,56,1,0,0,0,242,
  	243,5,42,0,0,243,58,1,0,0,0,244,245,5,47,0,0,245,60,1,0,0,0,246,247,5,
  	124,0,0,247,62,1,0,0,0,248,249,5,33,0,0,249,64,1,0,0,0,250,251,5,61,0,
  	0,251,252,5,61,0,0,252,66,1,0,0,0,253,254,5,33,0,0,254,255,5,61,0,0,255,
  	68,1,0,0,0,256,257,5,60,0,0,257,70,1,0,0,0,258,259,5,62,0,0,259,72,1,
  	0,0,0,260,261,5,61,0,0,261,74,1,0,0,0,262,263,5,62,0,0,263,264,5,61,0,
  	0,264,76,1,0,0,0,265,266,5,60,0,0,266,267,5,61,0,0,267,78,1,0,0,0,268,
  	269,5,59,0,0,269,80,1,0,0,0,270,274,5,34,0,0,271,273,8,4,0,0,272,271,
  	1,0,0,0,273,276,1,0,0,0,274,272,1,0,0,0,274,275,1,0,0,0,275,277,1,0,0,
  	0,276,274,1,0,0,0,277,278,5,34,0,0,278,82,1,0,0,0,10,0,171,177,182,188,
  	190,195,205,216,274,2,1,14,0,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  ssllexerLexerStaticData = staticData.release();
}

}

SslLexer::SslLexer(CharStream *input) : Lexer(input) {
  SslLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *ssllexerLexerStaticData->atn, ssllexerLexerStaticData->decisionToDFA, ssllexerLexerStaticData->sharedContextCache);
}

SslLexer::~SslLexer() {
  delete _interpreter;
}

std::string SslLexer::getGrammarFileName() const {
  return "Ssl.g4";
}

const std::vector<std::string>& SslLexer::getRuleNames() const {
  return ssllexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& SslLexer::getChannelNames() const {
  return ssllexerLexerStaticData->channelNames;
}

const std::vector<std::string>& SslLexer::getModeNames() const {
  return ssllexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& SslLexer::getVocabulary() const {
  return ssllexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SslLexer::getSerializedATN() const {
  return ssllexerLexerStaticData->serializedATN;
}

const atn::ATN& SslLexer::getATN() const {
  return *ssllexerLexerStaticData->atn;
}


void SslLexer::action(RuleContext *context, size_t ruleIndex, size_t actionIndex) {
  switch (ruleIndex) {
    case 14: NAMEAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;

  default:
    break;
  }
}

void SslLexer::NAMEAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 0: setText(getText().append("_")); break;

  default:
    break;
  }
}



void SslLexer::initialize() {
  std::call_once(ssllexerLexerOnceFlag, ssllexerLexerInitialize);
}
