
// Generated from Bangla.g4 by ANTLR 4.13.2


#include "BanglaListener.h"

#include "BanglaParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct BanglaParserStaticData final {
  BanglaParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  BanglaParserStaticData(const BanglaParserStaticData&) = delete;
  BanglaParserStaticData(BanglaParserStaticData&&) = delete;
  BanglaParserStaticData& operator=(const BanglaParserStaticData&) = delete;
  BanglaParserStaticData& operator=(BanglaParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag banglaParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<BanglaParserStaticData> banglaParserStaticData = nullptr;

void banglaParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (banglaParserStaticData != nullptr) {
    return;
  }
#else
  assert(banglaParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<BanglaParserStaticData>(
    std::vector<std::string>{
      "program", "block", "statement", "variableDeclaration", "assignment", 
      "ifStatement", "forStatement", "ioStatement", "fileOperation", "expression"
    },
    std::vector<std::string>{
      "", "'{'", "'}'", "'('", "','", "')'", "';'", "'='", "'['", "']'", 
      "'*'", "'/'", "'+'", "'-'", "'\\u09B6\\u09C1\\u09B0\\u09C1'", "'\\u09B6\\u09C7\\u09B7'", 
      "'\\u09A7\\u09B0\\u09BF'", "'\\u09AF\\u09A6\\u09BF'", "'\\u09A4\\u09BE\\u09A8\\u09BE\\u09B9\\u09B2\\u09C7'", 
      "'\\u09AF\\u09A4\\u0995\\u09CD\\u09B7\\u09A3'", "'\\u09A6\\u09C7\\u0996\\u09BE\\u0993'", 
      "'\\u09AB\\u09BE\\u0987\\u09B2'", "'\\u0996\\u09C1\\u09B2\\u09CB'", 
      "'\\u09B2\\u09C7\\u0996\\u09CB'", "'\\u09AC\\u09A8\\u09CD\\u09A7'", 
      "'\\u09A8\\u09A4\\u09C1\\u09A8_\\u09B2\\u09BE\\u0987\\u09A8'", "'\\u0985\\u0995\\u09BE\\u09B0\\u09CD\\u09AF\\u0995\\u09B0'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "SHURU", "SHESH", 
      "DHORI", "JODI", "TANAHOLE", "JOTOKKHON", "DEKHAO", "FILE", "KHULO", 
      "LEKHO", "BONDHO", "NATUN_LINE", "OKARJOKOR", "ID", "NUMBER", "STRING", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,30,158,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,1,0,1,0,1,0,1,0,1,1,1,1,5,1,27,8,1,10,1,12,1,30,
  	9,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,45,8,2,10,
  	2,12,2,48,9,2,1,2,1,2,1,2,3,2,53,8,2,1,3,1,3,1,3,1,3,3,3,59,8,3,1,3,1,
  	3,1,4,1,4,1,4,1,4,1,4,5,4,68,8,4,10,4,12,4,71,9,4,1,4,1,4,1,4,1,4,1,5,
  	1,5,1,5,1,5,1,5,1,5,1,5,3,5,84,8,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,7,1,7,1,7,1,7,1,7,5,7,101,8,7,10,7,12,7,104,9,7,3,7,106,8,7,1,
  	7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,
  	5,8,126,8,8,10,8,12,8,129,9,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,3,8,138,8,8,
  	1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,148,8,9,1,9,1,9,1,9,5,9,153,8,9,10,
  	9,12,9,156,9,9,1,9,0,1,18,10,0,2,4,6,8,10,12,14,16,18,0,1,1,0,10,13,168,
  	0,20,1,0,0,0,2,24,1,0,0,0,4,52,1,0,0,0,6,54,1,0,0,0,8,62,1,0,0,0,10,76,
  	1,0,0,0,12,85,1,0,0,0,14,95,1,0,0,0,16,137,1,0,0,0,18,147,1,0,0,0,20,
  	21,5,14,0,0,21,22,3,2,1,0,22,23,5,15,0,0,23,1,1,0,0,0,24,28,5,1,0,0,25,
  	27,3,4,2,0,26,25,1,0,0,0,27,30,1,0,0,0,28,26,1,0,0,0,28,29,1,0,0,0,29,
  	31,1,0,0,0,30,28,1,0,0,0,31,32,5,2,0,0,32,3,1,0,0,0,33,53,3,6,3,0,34,
  	53,3,8,4,0,35,53,3,10,5,0,36,53,3,12,6,0,37,53,3,14,7,0,38,53,3,16,8,
  	0,39,40,5,20,0,0,40,41,5,3,0,0,41,46,3,18,9,0,42,43,5,4,0,0,43,45,3,18,
  	9,0,44,42,1,0,0,0,45,48,1,0,0,0,46,44,1,0,0,0,46,47,1,0,0,0,47,49,1,0,
  	0,0,48,46,1,0,0,0,49,50,5,5,0,0,50,51,5,6,0,0,51,53,1,0,0,0,52,33,1,0,
  	0,0,52,34,1,0,0,0,52,35,1,0,0,0,52,36,1,0,0,0,52,37,1,0,0,0,52,38,1,0,
  	0,0,52,39,1,0,0,0,53,5,1,0,0,0,54,55,5,16,0,0,55,58,5,27,0,0,56,57,5,
  	7,0,0,57,59,3,18,9,0,58,56,1,0,0,0,58,59,1,0,0,0,59,60,1,0,0,0,60,61,
  	5,6,0,0,61,7,1,0,0,0,62,69,5,27,0,0,63,64,5,8,0,0,64,65,3,18,9,0,65,66,
  	5,9,0,0,66,68,1,0,0,0,67,63,1,0,0,0,68,71,1,0,0,0,69,67,1,0,0,0,69,70,
  	1,0,0,0,70,72,1,0,0,0,71,69,1,0,0,0,72,73,5,7,0,0,73,74,3,18,9,0,74,75,
  	5,6,0,0,75,9,1,0,0,0,76,77,5,17,0,0,77,78,5,3,0,0,78,79,3,18,9,0,79,80,
  	5,5,0,0,80,83,3,4,2,0,81,82,5,18,0,0,82,84,3,4,2,0,83,81,1,0,0,0,83,84,
  	1,0,0,0,84,11,1,0,0,0,85,86,5,19,0,0,86,87,5,3,0,0,87,88,3,8,4,0,88,89,
  	5,6,0,0,89,90,3,18,9,0,90,91,5,6,0,0,91,92,3,8,4,0,92,93,5,5,0,0,93,94,
  	3,2,1,0,94,13,1,0,0,0,95,96,5,20,0,0,96,105,5,3,0,0,97,102,3,18,9,0,98,
  	99,5,4,0,0,99,101,3,18,9,0,100,98,1,0,0,0,101,104,1,0,0,0,102,100,1,0,
  	0,0,102,103,1,0,0,0,103,106,1,0,0,0,104,102,1,0,0,0,105,97,1,0,0,0,105,
  	106,1,0,0,0,106,107,1,0,0,0,107,108,5,5,0,0,108,109,5,6,0,0,109,15,1,
  	0,0,0,110,111,5,21,0,0,111,112,5,27,0,0,112,138,5,6,0,0,113,114,5,27,
  	0,0,114,115,5,7,0,0,115,116,5,22,0,0,116,117,5,3,0,0,117,118,5,29,0,0,
  	118,119,5,5,0,0,119,138,5,6,0,0,120,121,5,23,0,0,121,122,5,3,0,0,122,
  	127,5,27,0,0,123,124,5,4,0,0,124,126,3,18,9,0,125,123,1,0,0,0,126,129,
  	1,0,0,0,127,125,1,0,0,0,127,128,1,0,0,0,128,130,1,0,0,0,129,127,1,0,0,
  	0,130,131,5,5,0,0,131,138,5,6,0,0,132,133,5,24,0,0,133,134,5,3,0,0,134,
  	135,5,27,0,0,135,136,5,5,0,0,136,138,5,6,0,0,137,110,1,0,0,0,137,113,
  	1,0,0,0,137,120,1,0,0,0,137,132,1,0,0,0,138,17,1,0,0,0,139,140,6,9,-1,
  	0,140,141,5,3,0,0,141,142,3,18,9,0,142,143,5,5,0,0,143,148,1,0,0,0,144,
  	148,5,28,0,0,145,148,5,29,0,0,146,148,5,27,0,0,147,139,1,0,0,0,147,144,
  	1,0,0,0,147,145,1,0,0,0,147,146,1,0,0,0,148,154,1,0,0,0,149,150,10,4,
  	0,0,150,151,7,0,0,0,151,153,3,18,9,5,152,149,1,0,0,0,153,156,1,0,0,0,
  	154,152,1,0,0,0,154,155,1,0,0,0,155,19,1,0,0,0,156,154,1,0,0,0,12,28,
  	46,52,58,69,83,102,105,127,137,147,154
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  banglaParserStaticData = std::move(staticData);
}

}

BanglaParser::BanglaParser(TokenStream *input) : BanglaParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

BanglaParser::BanglaParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  BanglaParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *banglaParserStaticData->atn, banglaParserStaticData->decisionToDFA, banglaParserStaticData->sharedContextCache, options);
}

BanglaParser::~BanglaParser() {
  delete _interpreter;
}

const atn::ATN& BanglaParser::getATN() const {
  return *banglaParserStaticData->atn;
}

std::string BanglaParser::getGrammarFileName() const {
  return "Bangla.g4";
}

const std::vector<std::string>& BanglaParser::getRuleNames() const {
  return banglaParserStaticData->ruleNames;
}

const dfa::Vocabulary& BanglaParser::getVocabulary() const {
  return banglaParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView BanglaParser::getSerializedATN() const {
  return banglaParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

BanglaParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::ProgramContext::SHURU() {
  return getToken(BanglaParser::SHURU, 0);
}

BanglaParser::BlockContext* BanglaParser::ProgramContext::block() {
  return getRuleContext<BanglaParser::BlockContext>(0);
}

tree::TerminalNode* BanglaParser::ProgramContext::SHESH() {
  return getToken(BanglaParser::SHESH, 0);
}


size_t BanglaParser::ProgramContext::getRuleIndex() const {
  return BanglaParser::RuleProgram;
}

void BanglaParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void BanglaParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

BanglaParser::ProgramContext* BanglaParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, BanglaParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(20);
    match(BanglaParser::SHURU);
    setState(21);
    block();
    setState(22);
    match(BanglaParser::SHESH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

BanglaParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BanglaParser::StatementContext *> BanglaParser::BlockContext::statement() {
  return getRuleContexts<BanglaParser::StatementContext>();
}

BanglaParser::StatementContext* BanglaParser::BlockContext::statement(size_t i) {
  return getRuleContext<BanglaParser::StatementContext>(i);
}


size_t BanglaParser::BlockContext::getRuleIndex() const {
  return BanglaParser::RuleBlock;
}

void BanglaParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void BanglaParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

BanglaParser::BlockContext* BanglaParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 2, BanglaParser::RuleBlock);
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
    setState(24);
    match(BanglaParser::T__0);
    setState(28);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 163250176) != 0)) {
      setState(25);
      statement();
      setState(30);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(31);
    match(BanglaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

BanglaParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BanglaParser::VariableDeclarationContext* BanglaParser::StatementContext::variableDeclaration() {
  return getRuleContext<BanglaParser::VariableDeclarationContext>(0);
}

BanglaParser::AssignmentContext* BanglaParser::StatementContext::assignment() {
  return getRuleContext<BanglaParser::AssignmentContext>(0);
}

BanglaParser::IfStatementContext* BanglaParser::StatementContext::ifStatement() {
  return getRuleContext<BanglaParser::IfStatementContext>(0);
}

BanglaParser::ForStatementContext* BanglaParser::StatementContext::forStatement() {
  return getRuleContext<BanglaParser::ForStatementContext>(0);
}

BanglaParser::IoStatementContext* BanglaParser::StatementContext::ioStatement() {
  return getRuleContext<BanglaParser::IoStatementContext>(0);
}

BanglaParser::FileOperationContext* BanglaParser::StatementContext::fileOperation() {
  return getRuleContext<BanglaParser::FileOperationContext>(0);
}

tree::TerminalNode* BanglaParser::StatementContext::DEKHAO() {
  return getToken(BanglaParser::DEKHAO, 0);
}

std::vector<BanglaParser::ExpressionContext *> BanglaParser::StatementContext::expression() {
  return getRuleContexts<BanglaParser::ExpressionContext>();
}

BanglaParser::ExpressionContext* BanglaParser::StatementContext::expression(size_t i) {
  return getRuleContext<BanglaParser::ExpressionContext>(i);
}


size_t BanglaParser::StatementContext::getRuleIndex() const {
  return BanglaParser::RuleStatement;
}

void BanglaParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void BanglaParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

BanglaParser::StatementContext* BanglaParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, BanglaParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(52);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(33);
      variableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(34);
      assignment();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(35);
      ifStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(36);
      forStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(37);
      ioStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(38);
      fileOperation();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(39);
      match(BanglaParser::DEKHAO);
      setState(40);
      match(BanglaParser::T__2);
      setState(41);
      expression(0);
      setState(46);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BanglaParser::T__3) {
        setState(42);
        match(BanglaParser::T__3);
        setState(43);
        expression(0);
        setState(48);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(49);
      match(BanglaParser::T__4);
      setState(50);
      match(BanglaParser::T__5);
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

//----------------- VariableDeclarationContext ------------------------------------------------------------------

BanglaParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::VariableDeclarationContext::DHORI() {
  return getToken(BanglaParser::DHORI, 0);
}

tree::TerminalNode* BanglaParser::VariableDeclarationContext::ID() {
  return getToken(BanglaParser::ID, 0);
}

BanglaParser::ExpressionContext* BanglaParser::VariableDeclarationContext::expression() {
  return getRuleContext<BanglaParser::ExpressionContext>(0);
}


size_t BanglaParser::VariableDeclarationContext::getRuleIndex() const {
  return BanglaParser::RuleVariableDeclaration;
}

void BanglaParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void BanglaParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}

BanglaParser::VariableDeclarationContext* BanglaParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, BanglaParser::RuleVariableDeclaration);
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
    setState(54);
    match(BanglaParser::DHORI);
    setState(55);
    match(BanglaParser::ID);
    setState(58);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BanglaParser::T__6) {
      setState(56);
      match(BanglaParser::T__6);
      setState(57);
      expression(0);
    }
    setState(60);
    match(BanglaParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

BanglaParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::AssignmentContext::ID() {
  return getToken(BanglaParser::ID, 0);
}

std::vector<BanglaParser::ExpressionContext *> BanglaParser::AssignmentContext::expression() {
  return getRuleContexts<BanglaParser::ExpressionContext>();
}

BanglaParser::ExpressionContext* BanglaParser::AssignmentContext::expression(size_t i) {
  return getRuleContext<BanglaParser::ExpressionContext>(i);
}


size_t BanglaParser::AssignmentContext::getRuleIndex() const {
  return BanglaParser::RuleAssignment;
}

void BanglaParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void BanglaParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

BanglaParser::AssignmentContext* BanglaParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 8, BanglaParser::RuleAssignment);
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
    setState(62);
    match(BanglaParser::ID);
    setState(69);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BanglaParser::T__7) {
      setState(63);
      match(BanglaParser::T__7);
      setState(64);
      expression(0);
      setState(65);
      match(BanglaParser::T__8);
      setState(71);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(72);
    match(BanglaParser::T__6);
    setState(73);
    expression(0);
    setState(74);
    match(BanglaParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

BanglaParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::IfStatementContext::JODI() {
  return getToken(BanglaParser::JODI, 0);
}

BanglaParser::ExpressionContext* BanglaParser::IfStatementContext::expression() {
  return getRuleContext<BanglaParser::ExpressionContext>(0);
}

std::vector<BanglaParser::StatementContext *> BanglaParser::IfStatementContext::statement() {
  return getRuleContexts<BanglaParser::StatementContext>();
}

BanglaParser::StatementContext* BanglaParser::IfStatementContext::statement(size_t i) {
  return getRuleContext<BanglaParser::StatementContext>(i);
}

tree::TerminalNode* BanglaParser::IfStatementContext::TANAHOLE() {
  return getToken(BanglaParser::TANAHOLE, 0);
}


size_t BanglaParser::IfStatementContext::getRuleIndex() const {
  return BanglaParser::RuleIfStatement;
}

void BanglaParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void BanglaParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}

BanglaParser::IfStatementContext* BanglaParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, BanglaParser::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(BanglaParser::JODI);
    setState(77);
    match(BanglaParser::T__2);
    setState(78);
    expression(0);
    setState(79);
    match(BanglaParser::T__4);
    setState(80);
    statement();
    setState(83);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(81);
      match(BanglaParser::TANAHOLE);
      setState(82);
      statement();
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

//----------------- ForStatementContext ------------------------------------------------------------------

BanglaParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::ForStatementContext::JOTOKKHON() {
  return getToken(BanglaParser::JOTOKKHON, 0);
}

std::vector<BanglaParser::AssignmentContext *> BanglaParser::ForStatementContext::assignment() {
  return getRuleContexts<BanglaParser::AssignmentContext>();
}

BanglaParser::AssignmentContext* BanglaParser::ForStatementContext::assignment(size_t i) {
  return getRuleContext<BanglaParser::AssignmentContext>(i);
}

BanglaParser::ExpressionContext* BanglaParser::ForStatementContext::expression() {
  return getRuleContext<BanglaParser::ExpressionContext>(0);
}

BanglaParser::BlockContext* BanglaParser::ForStatementContext::block() {
  return getRuleContext<BanglaParser::BlockContext>(0);
}


size_t BanglaParser::ForStatementContext::getRuleIndex() const {
  return BanglaParser::RuleForStatement;
}

void BanglaParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}

void BanglaParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}

BanglaParser::ForStatementContext* BanglaParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 12, BanglaParser::RuleForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(BanglaParser::JOTOKKHON);
    setState(86);
    match(BanglaParser::T__2);
    setState(87);
    assignment();
    setState(88);
    match(BanglaParser::T__5);
    setState(89);
    expression(0);
    setState(90);
    match(BanglaParser::T__5);
    setState(91);
    assignment();
    setState(92);
    match(BanglaParser::T__4);
    setState(93);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IoStatementContext ------------------------------------------------------------------

BanglaParser::IoStatementContext::IoStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::IoStatementContext::DEKHAO() {
  return getToken(BanglaParser::DEKHAO, 0);
}

std::vector<BanglaParser::ExpressionContext *> BanglaParser::IoStatementContext::expression() {
  return getRuleContexts<BanglaParser::ExpressionContext>();
}

BanglaParser::ExpressionContext* BanglaParser::IoStatementContext::expression(size_t i) {
  return getRuleContext<BanglaParser::ExpressionContext>(i);
}


size_t BanglaParser::IoStatementContext::getRuleIndex() const {
  return BanglaParser::RuleIoStatement;
}

void BanglaParser::IoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIoStatement(this);
}

void BanglaParser::IoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIoStatement(this);
}

BanglaParser::IoStatementContext* BanglaParser::ioStatement() {
  IoStatementContext *_localctx = _tracker.createInstance<IoStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, BanglaParser::RuleIoStatement);
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
    setState(95);
    match(BanglaParser::DEKHAO);
    setState(96);
    match(BanglaParser::T__2);
    setState(105);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 939524104) != 0)) {
      setState(97);
      expression(0);
      setState(102);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BanglaParser::T__3) {
        setState(98);
        match(BanglaParser::T__3);
        setState(99);
        expression(0);
        setState(104);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(107);
    match(BanglaParser::T__4);
    setState(108);
    match(BanglaParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FileOperationContext ------------------------------------------------------------------

BanglaParser::FileOperationContext::FileOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::FileOperationContext::FILE() {
  return getToken(BanglaParser::FILE, 0);
}

tree::TerminalNode* BanglaParser::FileOperationContext::ID() {
  return getToken(BanglaParser::ID, 0);
}

tree::TerminalNode* BanglaParser::FileOperationContext::KHULO() {
  return getToken(BanglaParser::KHULO, 0);
}

tree::TerminalNode* BanglaParser::FileOperationContext::STRING() {
  return getToken(BanglaParser::STRING, 0);
}

tree::TerminalNode* BanglaParser::FileOperationContext::LEKHO() {
  return getToken(BanglaParser::LEKHO, 0);
}

std::vector<BanglaParser::ExpressionContext *> BanglaParser::FileOperationContext::expression() {
  return getRuleContexts<BanglaParser::ExpressionContext>();
}

BanglaParser::ExpressionContext* BanglaParser::FileOperationContext::expression(size_t i) {
  return getRuleContext<BanglaParser::ExpressionContext>(i);
}

tree::TerminalNode* BanglaParser::FileOperationContext::BONDHO() {
  return getToken(BanglaParser::BONDHO, 0);
}


size_t BanglaParser::FileOperationContext::getRuleIndex() const {
  return BanglaParser::RuleFileOperation;
}

void BanglaParser::FileOperationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFileOperation(this);
}

void BanglaParser::FileOperationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFileOperation(this);
}

BanglaParser::FileOperationContext* BanglaParser::fileOperation() {
  FileOperationContext *_localctx = _tracker.createInstance<FileOperationContext>(_ctx, getState());
  enterRule(_localctx, 16, BanglaParser::RuleFileOperation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(137);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BanglaParser::FILE: {
        enterOuterAlt(_localctx, 1);
        setState(110);
        match(BanglaParser::FILE);
        setState(111);
        match(BanglaParser::ID);
        setState(112);
        match(BanglaParser::T__5);
        break;
      }

      case BanglaParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(113);
        match(BanglaParser::ID);
        setState(114);
        match(BanglaParser::T__6);
        setState(115);
        match(BanglaParser::KHULO);
        setState(116);
        match(BanglaParser::T__2);
        setState(117);
        match(BanglaParser::STRING);
        setState(118);
        match(BanglaParser::T__4);
        setState(119);
        match(BanglaParser::T__5);
        break;
      }

      case BanglaParser::LEKHO: {
        enterOuterAlt(_localctx, 3);
        setState(120);
        match(BanglaParser::LEKHO);
        setState(121);
        match(BanglaParser::T__2);
        setState(122);
        match(BanglaParser::ID);
        setState(127);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == BanglaParser::T__3) {
          setState(123);
          match(BanglaParser::T__3);
          setState(124);
          expression(0);
          setState(129);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(130);
        match(BanglaParser::T__4);
        setState(131);
        match(BanglaParser::T__5);
        break;
      }

      case BanglaParser::BONDHO: {
        enterOuterAlt(_localctx, 4);
        setState(132);
        match(BanglaParser::BONDHO);
        setState(133);
        match(BanglaParser::T__2);
        setState(134);
        match(BanglaParser::ID);
        setState(135);
        match(BanglaParser::T__4);
        setState(136);
        match(BanglaParser::T__5);
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

//----------------- ExpressionContext ------------------------------------------------------------------

BanglaParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BanglaParser::ExpressionContext *> BanglaParser::ExpressionContext::expression() {
  return getRuleContexts<BanglaParser::ExpressionContext>();
}

BanglaParser::ExpressionContext* BanglaParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<BanglaParser::ExpressionContext>(i);
}

tree::TerminalNode* BanglaParser::ExpressionContext::NUMBER() {
  return getToken(BanglaParser::NUMBER, 0);
}

tree::TerminalNode* BanglaParser::ExpressionContext::STRING() {
  return getToken(BanglaParser::STRING, 0);
}

tree::TerminalNode* BanglaParser::ExpressionContext::ID() {
  return getToken(BanglaParser::ID, 0);
}


size_t BanglaParser::ExpressionContext::getRuleIndex() const {
  return BanglaParser::RuleExpression;
}

void BanglaParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void BanglaParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


BanglaParser::ExpressionContext* BanglaParser::expression() {
   return expression(0);
}

BanglaParser::ExpressionContext* BanglaParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  BanglaParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  BanglaParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, BanglaParser::RuleExpression, precedence);

    size_t _la = 0;

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
    setState(147);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BanglaParser::T__2: {
        setState(140);
        match(BanglaParser::T__2);
        setState(141);
        expression(0);
        setState(142);
        match(BanglaParser::T__4);
        break;
      }

      case BanglaParser::NUMBER: {
        setState(144);
        match(BanglaParser::NUMBER);
        break;
      }

      case BanglaParser::STRING: {
        setState(145);
        match(BanglaParser::STRING);
        break;
      }

      case BanglaParser::ID: {
        setState(146);
        match(BanglaParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(154);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(149);

        if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
        setState(150);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 15360) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(151);
        expression(5); 
      }
      setState(156);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool BanglaParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 9: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool BanglaParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void BanglaParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  banglaParserInitialize();
#else
  ::antlr4::internal::call_once(banglaParserOnceFlag, banglaParserInitialize);
#endif
}
