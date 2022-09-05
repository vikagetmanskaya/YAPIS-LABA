
// Generated from Tdl.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  TdlLexer : public antlr4::Lexer {
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

  TdlLexer(antlr4::CharStream *input);
  ~TdlLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

  virtual void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;
private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.
  void NAMEAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

