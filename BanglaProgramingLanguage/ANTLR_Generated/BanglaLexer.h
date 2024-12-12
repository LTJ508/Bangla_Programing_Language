
// Generated from Bangla.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  BanglaLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, SHURU = 18, SHESH = 19, DHORI = 20, 
    DEKHAO = 21, NATUN_LINE = 22, IF = 23, ELSE_IF = 24, ELSE = 25, ID = 26, 
    FLOAT = 27, INT = 28, STRING = 29, LINE_COMMENT = 30, BLOCK_COMMENT = 31, 
    WS = 32
  };

  explicit BanglaLexer(antlr4::CharStream *input);

  ~BanglaLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

