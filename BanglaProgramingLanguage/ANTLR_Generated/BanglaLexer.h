
// Generated from Bangla.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  BanglaLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, SHURU = 23, SHESH = 24, DHORI = 25, DEKHAO = 26, 
    NATUN_LINE = 27, IF = 28, ELSE_IF = 29, ELSE = 30, FOR = 31, FILE = 32, 
    FILE_OPEN = 33, FILE_CLOSE = 34, FILE_READ = 35, FILE_WRITE = 36, ID = 37, 
    FLOAT = 38, INT = 39, STRING = 40, LINE_COMMENT = 41, BLOCK_COMMENT = 42, 
    WS = 43
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

