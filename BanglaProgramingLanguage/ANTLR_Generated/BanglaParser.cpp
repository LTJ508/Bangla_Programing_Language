
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
      "program", "block", "statement", "variableDeclaration", "printStatement", 
      "printArguments"
    },
    std::vector<std::string>{
      "", "'{'", "'}'", "'='", "';'", "'('", "')'", "','", "'\\u09B6\\u09C1\\u09B0\\u09C1'", 
      "'\\u09B6\\u09C7\\u09B7'", "'\\u09A7\\u09B0\\u09BF'", "'\\u09A6\\u09C7\\u0996\\u09BE\\u0993'", 
      "'\\u09A8\\u09A4\\u09C1\\u09A8_\\u09B2\\u09BE\\u0987\\u09A8'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "SHURU", "SHESH", "DHORI", "DEKHAO", 
      "NATUN_LINE", "ID", "FLOAT", "INT", "STRING", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,17,54,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,1,0,1,0,1,0,
  	1,0,1,1,1,1,5,1,19,8,1,10,1,12,1,22,9,1,1,1,1,1,1,2,1,2,3,2,28,8,2,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,5,5,45,8,5,
  	10,5,12,5,48,9,5,1,5,1,5,3,5,52,8,5,1,5,0,0,6,0,2,4,6,8,10,0,2,1,0,14,
  	15,2,0,13,13,16,16,51,0,12,1,0,0,0,2,16,1,0,0,0,4,27,1,0,0,0,6,29,1,0,
  	0,0,8,35,1,0,0,0,10,41,1,0,0,0,12,13,5,8,0,0,13,14,3,2,1,0,14,15,5,9,
  	0,0,15,1,1,0,0,0,16,20,5,1,0,0,17,19,3,4,2,0,18,17,1,0,0,0,19,22,1,0,
  	0,0,20,18,1,0,0,0,20,21,1,0,0,0,21,23,1,0,0,0,22,20,1,0,0,0,23,24,5,2,
  	0,0,24,3,1,0,0,0,25,28,3,6,3,0,26,28,3,8,4,0,27,25,1,0,0,0,27,26,1,0,
  	0,0,28,5,1,0,0,0,29,30,5,10,0,0,30,31,5,13,0,0,31,32,5,3,0,0,32,33,7,
  	0,0,0,33,34,5,4,0,0,34,7,1,0,0,0,35,36,5,11,0,0,36,37,5,5,0,0,37,38,3,
  	10,5,0,38,39,5,6,0,0,39,40,5,4,0,0,40,9,1,0,0,0,41,46,7,1,0,0,42,43,5,
  	7,0,0,43,45,7,1,0,0,44,42,1,0,0,0,45,48,1,0,0,0,46,44,1,0,0,0,46,47,1,
  	0,0,0,47,51,1,0,0,0,48,46,1,0,0,0,49,50,5,7,0,0,50,52,5,12,0,0,51,49,
  	1,0,0,0,51,52,1,0,0,0,52,11,1,0,0,0,4,20,27,46,51
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
    setState(12);
    match(BanglaParser::SHURU);
    setState(13);
    block();
    setState(14);
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
    setState(16);
    match(BanglaParser::T__0);
    setState(20);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BanglaParser::DHORI

    || _la == BanglaParser::DEKHAO) {
      setState(17);
      statement();
      setState(22);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(23);
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

BanglaParser::PrintStatementContext* BanglaParser::StatementContext::printStatement() {
  return getRuleContext<BanglaParser::PrintStatementContext>(0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(27);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BanglaParser::DHORI: {
        enterOuterAlt(_localctx, 1);
        setState(25);
        variableDeclaration();
        break;
      }

      case BanglaParser::DEKHAO: {
        enterOuterAlt(_localctx, 2);
        setState(26);
        printStatement();
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

tree::TerminalNode* BanglaParser::VariableDeclarationContext::INT() {
  return getToken(BanglaParser::INT, 0);
}

tree::TerminalNode* BanglaParser::VariableDeclarationContext::FLOAT() {
  return getToken(BanglaParser::FLOAT, 0);
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
    setState(29);
    match(BanglaParser::DHORI);
    setState(30);
    match(BanglaParser::ID);
    setState(31);
    match(BanglaParser::T__2);
    setState(32);
    _la = _input->LA(1);
    if (!(_la == BanglaParser::FLOAT

    || _la == BanglaParser::INT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(33);
    match(BanglaParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintStatementContext ------------------------------------------------------------------

BanglaParser::PrintStatementContext::PrintStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::PrintStatementContext::DEKHAO() {
  return getToken(BanglaParser::DEKHAO, 0);
}

BanglaParser::PrintArgumentsContext* BanglaParser::PrintStatementContext::printArguments() {
  return getRuleContext<BanglaParser::PrintArgumentsContext>(0);
}


size_t BanglaParser::PrintStatementContext::getRuleIndex() const {
  return BanglaParser::RulePrintStatement;
}

void BanglaParser::PrintStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintStatement(this);
}

void BanglaParser::PrintStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintStatement(this);
}

BanglaParser::PrintStatementContext* BanglaParser::printStatement() {
  PrintStatementContext *_localctx = _tracker.createInstance<PrintStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, BanglaParser::RulePrintStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
    match(BanglaParser::DEKHAO);
    setState(36);
    match(BanglaParser::T__4);
    setState(37);
    printArguments();
    setState(38);
    match(BanglaParser::T__5);
    setState(39);
    match(BanglaParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintArgumentsContext ------------------------------------------------------------------

BanglaParser::PrintArgumentsContext::PrintArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BanglaParser::PrintArgumentsContext::ID() {
  return getTokens(BanglaParser::ID);
}

tree::TerminalNode* BanglaParser::PrintArgumentsContext::ID(size_t i) {
  return getToken(BanglaParser::ID, i);
}

std::vector<tree::TerminalNode *> BanglaParser::PrintArgumentsContext::STRING() {
  return getTokens(BanglaParser::STRING);
}

tree::TerminalNode* BanglaParser::PrintArgumentsContext::STRING(size_t i) {
  return getToken(BanglaParser::STRING, i);
}

tree::TerminalNode* BanglaParser::PrintArgumentsContext::NATUN_LINE() {
  return getToken(BanglaParser::NATUN_LINE, 0);
}


size_t BanglaParser::PrintArgumentsContext::getRuleIndex() const {
  return BanglaParser::RulePrintArguments;
}

void BanglaParser::PrintArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintArguments(this);
}

void BanglaParser::PrintArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintArguments(this);
}

BanglaParser::PrintArgumentsContext* BanglaParser::printArguments() {
  PrintArgumentsContext *_localctx = _tracker.createInstance<PrintArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 10, BanglaParser::RulePrintArguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(41);
    _la = _input->LA(1);
    if (!(_la == BanglaParser::ID

    || _la == BanglaParser::STRING)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(46);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(42);
        match(BanglaParser::T__6);
        setState(43);
        _la = _input->LA(1);
        if (!(_la == BanglaParser::ID

        || _la == BanglaParser::STRING)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(48);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
    setState(51);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BanglaParser::T__6) {
      setState(49);
      match(BanglaParser::T__6);
      setState(50);
      match(BanglaParser::NATUN_LINE);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void BanglaParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  banglaParserInitialize();
#else
  ::antlr4::internal::call_once(banglaParserOnceFlag, banglaParserInitialize);
#endif
}
