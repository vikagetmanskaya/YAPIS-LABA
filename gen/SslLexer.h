
// Generated from Ssl.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  SslLexer : public antlr4::Lexer {
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

  explicit SslLexer(antlr4::CharStream *input);

  ~SslLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.
  void NAMEAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.

};

