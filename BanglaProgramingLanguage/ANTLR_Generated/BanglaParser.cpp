
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
      "printArguments", "ifStatement", "condition", "operand", "comparisonOperator"
    },
    std::vector<std::string>{
      "", "'{'", "'}'", "'='", "';'", "'('", "')'", "','", "'>='", "'<='", 
      "'>'", "'<'", "'=='", "'!='", "'\\u09B6\\u09C1\\u09B0\\u09C1'", "'\\u09B6\\u09C7\\u09B7'", 
      "'\\u09A7\\u09B0\\u09BF'", "'\\u09A6\\u09C7\\u0996\\u09BE\\u0993'", 
      "'\\u09A8\\u09A4\\u09C1\\u09A8_\\u09B2\\u09BE\\u0987\\u09A8'", "'\\u09AF\\u09A6\\u09BF'", 
      "'\\u09A4\\u09BE\\u09A8\\u09BE\\u09B9\\u09B2\\u09C7 \\u09AF\\u09A6\\u09BF'", 
      "'\\u09A4\\u09BE\\u09A8\\u09BE\\u09B9\\u09B2\\u09C7'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "SHURU", "SHESH", 
      "DHORI", "DEKHAO", "NATUN_LINE", "IF", "ELSE_IF", "ELSE", "ID", "FLOAT", 
      "INT", "STRING", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,26,91,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,2,8,7,8,2,9,7,9,1,0,1,0,1,0,1,0,1,1,1,1,5,1,27,8,1,10,1,12,1,30,9,
  	1,1,1,1,1,1,2,1,2,1,2,3,2,37,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,5,1,5,1,5,5,5,54,8,5,10,5,12,5,57,9,5,1,5,1,5,3,5,61,8,
  	5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,5,6,74,8,6,10,6,12,6,77,
  	9,6,1,6,1,6,3,6,81,8,6,1,7,1,7,1,7,1,7,1,8,1,8,1,9,1,9,1,9,0,0,10,0,2,
  	4,6,8,10,12,14,16,18,0,4,1,0,23,24,2,0,22,22,25,25,1,0,22,24,1,0,8,13,
  	87,0,20,1,0,0,0,2,24,1,0,0,0,4,36,1,0,0,0,6,38,1,0,0,0,8,44,1,0,0,0,10,
  	50,1,0,0,0,12,62,1,0,0,0,14,82,1,0,0,0,16,86,1,0,0,0,18,88,1,0,0,0,20,
  	21,5,14,0,0,21,22,3,2,1,0,22,23,5,15,0,0,23,1,1,0,0,0,24,28,5,1,0,0,25,
  	27,3,4,2,0,26,25,1,0,0,0,27,30,1,0,0,0,28,26,1,0,0,0,28,29,1,0,0,0,29,
  	31,1,0,0,0,30,28,1,0,0,0,31,32,5,2,0,0,32,3,1,0,0,0,33,37,3,6,3,0,34,
  	37,3,8,4,0,35,37,3,12,6,0,36,33,1,0,0,0,36,34,1,0,0,0,36,35,1,0,0,0,37,
  	5,1,0,0,0,38,39,5,16,0,0,39,40,5,22,0,0,40,41,5,3,0,0,41,42,7,0,0,0,42,
  	43,5,4,0,0,43,7,1,0,0,0,44,45,5,17,0,0,45,46,5,5,0,0,46,47,3,10,5,0,47,
  	48,5,6,0,0,48,49,5,4,0,0,49,9,1,0,0,0,50,55,7,1,0,0,51,52,5,7,0,0,52,
  	54,7,1,0,0,53,51,1,0,0,0,54,57,1,0,0,0,55,53,1,0,0,0,55,56,1,0,0,0,56,
  	60,1,0,0,0,57,55,1,0,0,0,58,59,5,7,0,0,59,61,5,18,0,0,60,58,1,0,0,0,60,
  	61,1,0,0,0,61,11,1,0,0,0,62,63,5,19,0,0,63,64,5,5,0,0,64,65,3,14,7,0,
  	65,66,5,6,0,0,66,75,3,2,1,0,67,68,5,20,0,0,68,69,5,5,0,0,69,70,3,14,7,
  	0,70,71,5,6,0,0,71,72,3,2,1,0,72,74,1,0,0,0,73,67,1,0,0,0,74,77,1,0,0,
  	0,75,73,1,0,0,0,75,76,1,0,0,0,76,80,1,0,0,0,77,75,1,0,0,0,78,79,5,21,
  	0,0,79,81,3,2,1,0,80,78,1,0,0,0,80,81,1,0,0,0,81,13,1,0,0,0,82,83,3,16,
  	8,0,83,84,3,18,9,0,84,85,3,16,8,0,85,15,1,0,0,0,86,87,7,2,0,0,87,17,1,
  	0,0,0,88,89,7,3,0,0,89,19,1,0,0,0,6,28,36,55,60,75,80
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
      ((1ULL << _la) & 720896) != 0)) {
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

BanglaParser::PrintStatementContext* BanglaParser::StatementContext::printStatement() {
  return getRuleContext<BanglaParser::PrintStatementContext>(0);
}

BanglaParser::IfStatementContext* BanglaParser::StatementContext::ifStatement() {
  return getRuleContext<BanglaParser::IfStatementContext>(0);
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
    setState(36);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BanglaParser::DHORI: {
        enterOuterAlt(_localctx, 1);
        setState(33);
        variableDeclaration();
        break;
      }

      case BanglaParser::DEKHAO: {
        enterOuterAlt(_localctx, 2);
        setState(34);
        printStatement();
        break;
      }

      case BanglaParser::IF: {
        enterOuterAlt(_localctx, 3);
        setState(35);
        ifStatement();
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
    setState(38);
    match(BanglaParser::DHORI);
    setState(39);
    match(BanglaParser::ID);
    setState(40);
    match(BanglaParser::T__2);
    setState(41);
    _la = _input->LA(1);
    if (!(_la == BanglaParser::FLOAT

    || _la == BanglaParser::INT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(42);
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
    setState(44);
    match(BanglaParser::DEKHAO);
    setState(45);
    match(BanglaParser::T__4);
    setState(46);
    printArguments();
    setState(47);
    match(BanglaParser::T__5);
    setState(48);
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
    setState(50);
    _la = _input->LA(1);
    if (!(_la == BanglaParser::ID

    || _la == BanglaParser::STRING)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(55);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(51);
        match(BanglaParser::T__6);
        setState(52);
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
      setState(57);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
    setState(60);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BanglaParser::T__6) {
      setState(58);
      match(BanglaParser::T__6);
      setState(59);
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

//----------------- IfStatementContext ------------------------------------------------------------------

BanglaParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::IfStatementContext::IF() {
  return getToken(BanglaParser::IF, 0);
}

std::vector<BanglaParser::ConditionContext *> BanglaParser::IfStatementContext::condition() {
  return getRuleContexts<BanglaParser::ConditionContext>();
}

BanglaParser::ConditionContext* BanglaParser::IfStatementContext::condition(size_t i) {
  return getRuleContext<BanglaParser::ConditionContext>(i);
}

std::vector<BanglaParser::BlockContext *> BanglaParser::IfStatementContext::block() {
  return getRuleContexts<BanglaParser::BlockContext>();
}

BanglaParser::BlockContext* BanglaParser::IfStatementContext::block(size_t i) {
  return getRuleContext<BanglaParser::BlockContext>(i);
}

std::vector<tree::TerminalNode *> BanglaParser::IfStatementContext::ELSE_IF() {
  return getTokens(BanglaParser::ELSE_IF);
}

tree::TerminalNode* BanglaParser::IfStatementContext::ELSE_IF(size_t i) {
  return getToken(BanglaParser::ELSE_IF, i);
}

tree::TerminalNode* BanglaParser::IfStatementContext::ELSE() {
  return getToken(BanglaParser::ELSE, 0);
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
  enterRule(_localctx, 12, BanglaParser::RuleIfStatement);
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
    match(BanglaParser::IF);
    setState(63);
    match(BanglaParser::T__4);
    setState(64);
    condition();
    setState(65);
    match(BanglaParser::T__5);
    setState(66);
    block();
    setState(75);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BanglaParser::ELSE_IF) {
      setState(67);
      match(BanglaParser::ELSE_IF);
      setState(68);
      match(BanglaParser::T__4);
      setState(69);
      condition();
      setState(70);
      match(BanglaParser::T__5);
      setState(71);
      block();
      setState(77);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(80);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BanglaParser::ELSE) {
      setState(78);
      match(BanglaParser::ELSE);
      setState(79);
      block();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

BanglaParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BanglaParser::OperandContext *> BanglaParser::ConditionContext::operand() {
  return getRuleContexts<BanglaParser::OperandContext>();
}

BanglaParser::OperandContext* BanglaParser::ConditionContext::operand(size_t i) {
  return getRuleContext<BanglaParser::OperandContext>(i);
}

BanglaParser::ComparisonOperatorContext* BanglaParser::ConditionContext::comparisonOperator() {
  return getRuleContext<BanglaParser::ComparisonOperatorContext>(0);
}


size_t BanglaParser::ConditionContext::getRuleIndex() const {
  return BanglaParser::RuleCondition;
}

void BanglaParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void BanglaParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}

BanglaParser::ConditionContext* BanglaParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 14, BanglaParser::RuleCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    operand();
    setState(83);
    comparisonOperator();
    setState(84);
    operand();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperandContext ------------------------------------------------------------------

BanglaParser::OperandContext::OperandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::OperandContext::ID() {
  return getToken(BanglaParser::ID, 0);
}

tree::TerminalNode* BanglaParser::OperandContext::INT() {
  return getToken(BanglaParser::INT, 0);
}

tree::TerminalNode* BanglaParser::OperandContext::FLOAT() {
  return getToken(BanglaParser::FLOAT, 0);
}


size_t BanglaParser::OperandContext::getRuleIndex() const {
  return BanglaParser::RuleOperand;
}

void BanglaParser::OperandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperand(this);
}

void BanglaParser::OperandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperand(this);
}

BanglaParser::OperandContext* BanglaParser::operand() {
  OperandContext *_localctx = _tracker.createInstance<OperandContext>(_ctx, getState());
  enterRule(_localctx, 16, BanglaParser::RuleOperand);
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
    setState(86);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 29360128) != 0))) {
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

//----------------- ComparisonOperatorContext ------------------------------------------------------------------

BanglaParser::ComparisonOperatorContext::ComparisonOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BanglaParser::ComparisonOperatorContext::getRuleIndex() const {
  return BanglaParser::RuleComparisonOperator;
}

void BanglaParser::ComparisonOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonOperator(this);
}

void BanglaParser::ComparisonOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonOperator(this);
}

BanglaParser::ComparisonOperatorContext* BanglaParser::comparisonOperator() {
  ComparisonOperatorContext *_localctx = _tracker.createInstance<ComparisonOperatorContext>(_ctx, getState());
  enterRule(_localctx, 18, BanglaParser::RuleComparisonOperator);
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
    setState(88);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16128) != 0))) {
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

void BanglaParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  banglaParserInitialize();
#else
  ::antlr4::internal::call_once(banglaParserOnceFlag, banglaParserInitialize);
#endif
}
