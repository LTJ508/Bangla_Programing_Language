
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
      "program", "block", "statement", "variableDeclaration", "arrayDeclaration", 
      "arrayElementAssignment", "arrayIndex", "arrayElementAccess", "assignmentStatement", 
      "initialization", "incrementStatement", "decrementStatement", "printStatement", 
      "printArguments", "ifStatement", "forStatement", "condition", "expression", 
      "operand", "comparisonOperator"
    },
    std::vector<std::string>{
      "", "'{'", "'}'", "';'", "'='", "'['", "']'", "','", "'++'", "'--'", 
      "'('", "')'", "'*'", "'/'", "'+'", "'-'", "'>='", "'<='", "'>'", "'<'", 
      "'=='", "'!='", "'\\u09B6\\u09C1\\u09B0\\u09C1'", "'\\u09B6\\u09C7\\u09B7'", 
      "'\\u09A7\\u09B0\\u09BF'", "'\\u09A6\\u09C7\\u0996\\u09BE\\u0993'", 
      "'\\u09A8\\u09A4\\u09C1\\u09A8_\\u09B2\\u09BE\\u0987\\u09A8'", "'\\u09AF\\u09A6\\u09BF'", 
      "'\\u09A4\\u09BE\\u09A8\\u09BE\\u09B9\\u09B2\\u09C7 \\u09AF\\u09A6\\u09BF'", 
      "'\\u09A4\\u09BE\\u09A8\\u09BE\\u09B9\\u09B2\\u09C7'", "'\\u09AF\\u09A4\\u0995\\u09CD\\u09B7\\u09A3'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "SHURU", "SHESH", "DHORI", "DEKHAO", "NATUN_LINE", 
      "IF", "ELSE_IF", "ELSE", "FOR", "ID", "FLOAT", "INT", "STRING", "LINE_COMMENT", 
      "BLOCK_COMMENT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,37,252,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,1,0,1,0,1,0,1,0,
  	1,1,1,1,5,1,47,8,1,10,1,12,1,50,9,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,69,8,2,1,3,1,3,1,3,1,3,3,3,75,8,
  	3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,5,4,96,8,4,10,4,12,4,99,9,4,3,4,101,8,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,5,4,113,8,4,10,4,12,4,116,9,4,3,4,118,8,4,1,4,1,4,3,
  	4,122,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,1,7,
  	1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,
  	12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,3,13,162,8,13,1,13,1,13,1,13,1,
  	13,1,13,3,13,169,8,13,5,13,171,8,13,10,13,12,13,174,9,13,1,13,1,13,3,
  	13,178,8,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,5,
  	14,191,8,14,10,14,12,14,194,9,14,1,14,1,14,3,14,198,8,14,1,15,1,15,1,
  	15,1,15,1,15,3,15,205,8,15,1,15,1,15,1,15,1,15,1,15,3,15,212,8,15,1,15,
  	1,15,1,15,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,17,3,17,231,8,17,1,17,1,17,1,17,1,17,1,17,1,17,5,17,239,8,17,10,
  	17,12,17,242,9,17,1,18,1,18,1,18,1,18,3,18,248,8,18,1,19,1,19,1,19,0,
  	1,34,20,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,0,4,2,
  	0,31,31,33,33,1,0,12,13,1,0,14,15,1,0,16,21,273,0,40,1,0,0,0,2,44,1,0,
  	0,0,4,68,1,0,0,0,6,70,1,0,0,0,8,121,1,0,0,0,10,123,1,0,0,0,12,131,1,0,
  	0,0,14,133,1,0,0,0,16,138,1,0,0,0,18,142,1,0,0,0,20,145,1,0,0,0,22,148,
  	1,0,0,0,24,151,1,0,0,0,26,161,1,0,0,0,28,179,1,0,0,0,30,199,1,0,0,0,32,
  	216,1,0,0,0,34,230,1,0,0,0,36,247,1,0,0,0,38,249,1,0,0,0,40,41,5,22,0,
  	0,41,42,3,2,1,0,42,43,5,23,0,0,43,1,1,0,0,0,44,48,5,1,0,0,45,47,3,4,2,
  	0,46,45,1,0,0,0,47,50,1,0,0,0,48,46,1,0,0,0,48,49,1,0,0,0,49,51,1,0,0,
  	0,50,48,1,0,0,0,51,52,5,2,0,0,52,3,1,0,0,0,53,69,3,6,3,0,54,69,3,8,4,
  	0,55,69,3,10,5,0,56,57,3,16,8,0,57,58,5,3,0,0,58,69,1,0,0,0,59,60,3,20,
  	10,0,60,61,5,3,0,0,61,69,1,0,0,0,62,63,3,22,11,0,63,64,5,3,0,0,64,69,
  	1,0,0,0,65,69,3,24,12,0,66,69,3,28,14,0,67,69,3,30,15,0,68,53,1,0,0,0,
  	68,54,1,0,0,0,68,55,1,0,0,0,68,56,1,0,0,0,68,59,1,0,0,0,68,62,1,0,0,0,
  	68,65,1,0,0,0,68,66,1,0,0,0,68,67,1,0,0,0,69,5,1,0,0,0,70,71,5,24,0,0,
  	71,74,5,31,0,0,72,73,5,4,0,0,73,75,3,34,17,0,74,72,1,0,0,0,74,75,1,0,
  	0,0,75,76,1,0,0,0,76,77,5,3,0,0,77,7,1,0,0,0,78,79,5,24,0,0,79,80,5,31,
  	0,0,80,81,5,5,0,0,81,82,3,12,6,0,82,83,5,6,0,0,83,84,5,3,0,0,84,122,1,
  	0,0,0,85,86,5,24,0,0,86,87,5,31,0,0,87,88,5,5,0,0,88,89,3,12,6,0,89,90,
  	5,6,0,0,90,91,5,4,0,0,91,100,5,5,0,0,92,97,3,34,17,0,93,94,5,7,0,0,94,
  	96,3,34,17,0,95,93,1,0,0,0,96,99,1,0,0,0,97,95,1,0,0,0,97,98,1,0,0,0,
  	98,101,1,0,0,0,99,97,1,0,0,0,100,92,1,0,0,0,100,101,1,0,0,0,101,102,1,
  	0,0,0,102,103,5,6,0,0,103,104,5,3,0,0,104,122,1,0,0,0,105,106,5,24,0,
  	0,106,107,5,31,0,0,107,108,5,4,0,0,108,117,5,5,0,0,109,114,3,34,17,0,
  	110,111,5,7,0,0,111,113,3,34,17,0,112,110,1,0,0,0,113,116,1,0,0,0,114,
  	112,1,0,0,0,114,115,1,0,0,0,115,118,1,0,0,0,116,114,1,0,0,0,117,109,1,
  	0,0,0,117,118,1,0,0,0,118,119,1,0,0,0,119,120,5,6,0,0,120,122,5,3,0,0,
  	121,78,1,0,0,0,121,85,1,0,0,0,121,105,1,0,0,0,122,9,1,0,0,0,123,124,5,
  	31,0,0,124,125,5,5,0,0,125,126,3,12,6,0,126,127,5,6,0,0,127,128,5,4,0,
  	0,128,129,3,34,17,0,129,130,5,3,0,0,130,11,1,0,0,0,131,132,7,0,0,0,132,
  	13,1,0,0,0,133,134,5,31,0,0,134,135,5,5,0,0,135,136,3,12,6,0,136,137,
  	5,6,0,0,137,15,1,0,0,0,138,139,5,31,0,0,139,140,5,4,0,0,140,141,3,34,
  	17,0,141,17,1,0,0,0,142,143,3,16,8,0,143,144,5,3,0,0,144,19,1,0,0,0,145,
  	146,5,31,0,0,146,147,5,8,0,0,147,21,1,0,0,0,148,149,5,31,0,0,149,150,
  	5,9,0,0,150,23,1,0,0,0,151,152,5,25,0,0,152,153,5,10,0,0,153,154,3,26,
  	13,0,154,155,5,11,0,0,155,156,5,3,0,0,156,25,1,0,0,0,157,162,5,31,0,0,
  	158,162,5,34,0,0,159,162,5,26,0,0,160,162,3,14,7,0,161,157,1,0,0,0,161,
  	158,1,0,0,0,161,159,1,0,0,0,161,160,1,0,0,0,162,172,1,0,0,0,163,168,5,
  	7,0,0,164,169,5,31,0,0,165,169,5,34,0,0,166,169,5,26,0,0,167,169,3,14,
  	7,0,168,164,1,0,0,0,168,165,1,0,0,0,168,166,1,0,0,0,168,167,1,0,0,0,169,
  	171,1,0,0,0,170,163,1,0,0,0,171,174,1,0,0,0,172,170,1,0,0,0,172,173,1,
  	0,0,0,173,177,1,0,0,0,174,172,1,0,0,0,175,176,5,7,0,0,176,178,5,26,0,
  	0,177,175,1,0,0,0,177,178,1,0,0,0,178,27,1,0,0,0,179,180,5,27,0,0,180,
  	181,5,10,0,0,181,182,3,32,16,0,182,183,5,11,0,0,183,192,3,2,1,0,184,185,
  	5,28,0,0,185,186,5,10,0,0,186,187,3,32,16,0,187,188,5,11,0,0,188,189,
  	3,2,1,0,189,191,1,0,0,0,190,184,1,0,0,0,191,194,1,0,0,0,192,190,1,0,0,
  	0,192,193,1,0,0,0,193,197,1,0,0,0,194,192,1,0,0,0,195,196,5,29,0,0,196,
  	198,3,2,1,0,197,195,1,0,0,0,197,198,1,0,0,0,198,29,1,0,0,0,199,200,5,
  	30,0,0,200,204,5,10,0,0,201,205,3,6,3,0,202,205,3,18,9,0,203,205,5,3,
  	0,0,204,201,1,0,0,0,204,202,1,0,0,0,204,203,1,0,0,0,204,205,1,0,0,0,205,
  	206,1,0,0,0,206,207,3,32,16,0,207,211,5,3,0,0,208,212,3,16,8,0,209,212,
  	3,20,10,0,210,212,3,22,11,0,211,208,1,0,0,0,211,209,1,0,0,0,211,210,1,
  	0,0,0,211,212,1,0,0,0,212,213,1,0,0,0,213,214,5,11,0,0,214,215,3,2,1,
  	0,215,31,1,0,0,0,216,217,3,36,18,0,217,218,3,38,19,0,218,219,3,36,18,
  	0,219,33,1,0,0,0,220,221,6,17,-1,0,221,231,5,33,0,0,222,231,5,32,0,0,
  	223,231,5,34,0,0,224,231,5,31,0,0,225,231,3,14,7,0,226,227,5,10,0,0,227,
  	228,3,34,17,0,228,229,5,11,0,0,229,231,1,0,0,0,230,220,1,0,0,0,230,222,
  	1,0,0,0,230,223,1,0,0,0,230,224,1,0,0,0,230,225,1,0,0,0,230,226,1,0,0,
  	0,231,240,1,0,0,0,232,233,10,8,0,0,233,234,7,1,0,0,234,239,3,34,17,9,
  	235,236,10,7,0,0,236,237,7,2,0,0,237,239,3,34,17,8,238,232,1,0,0,0,238,
  	235,1,0,0,0,239,242,1,0,0,0,240,238,1,0,0,0,240,241,1,0,0,0,241,35,1,
  	0,0,0,242,240,1,0,0,0,243,248,5,33,0,0,244,248,5,32,0,0,245,248,5,31,
  	0,0,246,248,3,14,7,0,247,243,1,0,0,0,247,244,1,0,0,0,247,245,1,0,0,0,
  	247,246,1,0,0,0,248,37,1,0,0,0,249,250,7,3,0,0,250,39,1,0,0,0,20,48,68,
  	74,97,100,114,117,121,161,168,172,177,192,197,204,211,230,238,240,247
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
    setState(40);
    match(BanglaParser::SHURU);
    setState(41);
    block();
    setState(42);
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
    setState(44);
    match(BanglaParser::T__0);
    setState(48);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3405774848) != 0)) {
      setState(45);
      statement();
      setState(50);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(51);
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

BanglaParser::ArrayDeclarationContext* BanglaParser::StatementContext::arrayDeclaration() {
  return getRuleContext<BanglaParser::ArrayDeclarationContext>(0);
}

BanglaParser::ArrayElementAssignmentContext* BanglaParser::StatementContext::arrayElementAssignment() {
  return getRuleContext<BanglaParser::ArrayElementAssignmentContext>(0);
}

BanglaParser::AssignmentStatementContext* BanglaParser::StatementContext::assignmentStatement() {
  return getRuleContext<BanglaParser::AssignmentStatementContext>(0);
}

BanglaParser::IncrementStatementContext* BanglaParser::StatementContext::incrementStatement() {
  return getRuleContext<BanglaParser::IncrementStatementContext>(0);
}

BanglaParser::DecrementStatementContext* BanglaParser::StatementContext::decrementStatement() {
  return getRuleContext<BanglaParser::DecrementStatementContext>(0);
}

BanglaParser::PrintStatementContext* BanglaParser::StatementContext::printStatement() {
  return getRuleContext<BanglaParser::PrintStatementContext>(0);
}

BanglaParser::IfStatementContext* BanglaParser::StatementContext::ifStatement() {
  return getRuleContext<BanglaParser::IfStatementContext>(0);
}

BanglaParser::ForStatementContext* BanglaParser::StatementContext::forStatement() {
  return getRuleContext<BanglaParser::ForStatementContext>(0);
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
    setState(68);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(53);
      variableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(54);
      arrayDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(55);
      arrayElementAssignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(56);
      assignmentStatement();
      setState(57);
      match(BanglaParser::T__2);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(59);
      incrementStatement();
      setState(60);
      match(BanglaParser::T__2);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(62);
      decrementStatement();
      setState(63);
      match(BanglaParser::T__2);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(65);
      printStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(66);
      ifStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(67);
      forStatement();
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
    setState(70);
    match(BanglaParser::DHORI);
    setState(71);
    match(BanglaParser::ID);
    setState(74);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BanglaParser::T__3) {
      setState(72);
      match(BanglaParser::T__3);
      setState(73);
      expression(0);
    }
    setState(76);
    match(BanglaParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayDeclarationContext ------------------------------------------------------------------

BanglaParser::ArrayDeclarationContext::ArrayDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::ArrayDeclarationContext::DHORI() {
  return getToken(BanglaParser::DHORI, 0);
}

tree::TerminalNode* BanglaParser::ArrayDeclarationContext::ID() {
  return getToken(BanglaParser::ID, 0);
}

BanglaParser::ArrayIndexContext* BanglaParser::ArrayDeclarationContext::arrayIndex() {
  return getRuleContext<BanglaParser::ArrayIndexContext>(0);
}

std::vector<BanglaParser::ExpressionContext *> BanglaParser::ArrayDeclarationContext::expression() {
  return getRuleContexts<BanglaParser::ExpressionContext>();
}

BanglaParser::ExpressionContext* BanglaParser::ArrayDeclarationContext::expression(size_t i) {
  return getRuleContext<BanglaParser::ExpressionContext>(i);
}


size_t BanglaParser::ArrayDeclarationContext::getRuleIndex() const {
  return BanglaParser::RuleArrayDeclaration;
}

void BanglaParser::ArrayDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayDeclaration(this);
}

void BanglaParser::ArrayDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayDeclaration(this);
}

BanglaParser::ArrayDeclarationContext* BanglaParser::arrayDeclaration() {
  ArrayDeclarationContext *_localctx = _tracker.createInstance<ArrayDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, BanglaParser::RuleArrayDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(121);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(78);
      match(BanglaParser::DHORI);
      setState(79);
      match(BanglaParser::ID);
      setState(80);
      match(BanglaParser::T__4);
      setState(81);
      arrayIndex();
      setState(82);
      match(BanglaParser::T__5);
      setState(83);
      match(BanglaParser::T__2);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(85);
      match(BanglaParser::DHORI);
      setState(86);
      match(BanglaParser::ID);
      setState(87);
      match(BanglaParser::T__4);
      setState(88);
      arrayIndex();
      setState(89);
      match(BanglaParser::T__5);
      setState(90);
      match(BanglaParser::T__3);
      setState(91);
      match(BanglaParser::T__4);
      setState(100);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 32212255744) != 0)) {
        setState(92);
        expression(0);
        setState(97);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == BanglaParser::T__6) {
          setState(93);
          match(BanglaParser::T__6);
          setState(94);
          expression(0);
          setState(99);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(102);
      match(BanglaParser::T__5);
      setState(103);
      match(BanglaParser::T__2);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(105);
      match(BanglaParser::DHORI);
      setState(106);
      match(BanglaParser::ID);
      setState(107);
      match(BanglaParser::T__3);
      setState(108);
      match(BanglaParser::T__4);
      setState(117);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 32212255744) != 0)) {
        setState(109);
        expression(0);
        setState(114);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == BanglaParser::T__6) {
          setState(110);
          match(BanglaParser::T__6);
          setState(111);
          expression(0);
          setState(116);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(119);
      match(BanglaParser::T__5);
      setState(120);
      match(BanglaParser::T__2);
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

//----------------- ArrayElementAssignmentContext ------------------------------------------------------------------

BanglaParser::ArrayElementAssignmentContext::ArrayElementAssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::ArrayElementAssignmentContext::ID() {
  return getToken(BanglaParser::ID, 0);
}

BanglaParser::ArrayIndexContext* BanglaParser::ArrayElementAssignmentContext::arrayIndex() {
  return getRuleContext<BanglaParser::ArrayIndexContext>(0);
}

BanglaParser::ExpressionContext* BanglaParser::ArrayElementAssignmentContext::expression() {
  return getRuleContext<BanglaParser::ExpressionContext>(0);
}


size_t BanglaParser::ArrayElementAssignmentContext::getRuleIndex() const {
  return BanglaParser::RuleArrayElementAssignment;
}

void BanglaParser::ArrayElementAssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayElementAssignment(this);
}

void BanglaParser::ArrayElementAssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayElementAssignment(this);
}

BanglaParser::ArrayElementAssignmentContext* BanglaParser::arrayElementAssignment() {
  ArrayElementAssignmentContext *_localctx = _tracker.createInstance<ArrayElementAssignmentContext>(_ctx, getState());
  enterRule(_localctx, 10, BanglaParser::RuleArrayElementAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    match(BanglaParser::ID);
    setState(124);
    match(BanglaParser::T__4);
    setState(125);
    arrayIndex();
    setState(126);
    match(BanglaParser::T__5);
    setState(127);
    match(BanglaParser::T__3);
    setState(128);
    expression(0);
    setState(129);
    match(BanglaParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayIndexContext ------------------------------------------------------------------

BanglaParser::ArrayIndexContext::ArrayIndexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::ArrayIndexContext::INT() {
  return getToken(BanglaParser::INT, 0);
}

tree::TerminalNode* BanglaParser::ArrayIndexContext::ID() {
  return getToken(BanglaParser::ID, 0);
}


size_t BanglaParser::ArrayIndexContext::getRuleIndex() const {
  return BanglaParser::RuleArrayIndex;
}

void BanglaParser::ArrayIndexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayIndex(this);
}

void BanglaParser::ArrayIndexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayIndex(this);
}

BanglaParser::ArrayIndexContext* BanglaParser::arrayIndex() {
  ArrayIndexContext *_localctx = _tracker.createInstance<ArrayIndexContext>(_ctx, getState());
  enterRule(_localctx, 12, BanglaParser::RuleArrayIndex);
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
    setState(131);
    _la = _input->LA(1);
    if (!(_la == BanglaParser::ID

    || _la == BanglaParser::INT)) {
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

//----------------- ArrayElementAccessContext ------------------------------------------------------------------

BanglaParser::ArrayElementAccessContext::ArrayElementAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::ArrayElementAccessContext::ID() {
  return getToken(BanglaParser::ID, 0);
}

BanglaParser::ArrayIndexContext* BanglaParser::ArrayElementAccessContext::arrayIndex() {
  return getRuleContext<BanglaParser::ArrayIndexContext>(0);
}


size_t BanglaParser::ArrayElementAccessContext::getRuleIndex() const {
  return BanglaParser::RuleArrayElementAccess;
}

void BanglaParser::ArrayElementAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayElementAccess(this);
}

void BanglaParser::ArrayElementAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayElementAccess(this);
}

BanglaParser::ArrayElementAccessContext* BanglaParser::arrayElementAccess() {
  ArrayElementAccessContext *_localctx = _tracker.createInstance<ArrayElementAccessContext>(_ctx, getState());
  enterRule(_localctx, 14, BanglaParser::RuleArrayElementAccess);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    match(BanglaParser::ID);
    setState(134);
    match(BanglaParser::T__4);
    setState(135);
    arrayIndex();
    setState(136);
    match(BanglaParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentStatementContext ------------------------------------------------------------------

BanglaParser::AssignmentStatementContext::AssignmentStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::AssignmentStatementContext::ID() {
  return getToken(BanglaParser::ID, 0);
}

BanglaParser::ExpressionContext* BanglaParser::AssignmentStatementContext::expression() {
  return getRuleContext<BanglaParser::ExpressionContext>(0);
}


size_t BanglaParser::AssignmentStatementContext::getRuleIndex() const {
  return BanglaParser::RuleAssignmentStatement;
}

void BanglaParser::AssignmentStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentStatement(this);
}

void BanglaParser::AssignmentStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentStatement(this);
}

BanglaParser::AssignmentStatementContext* BanglaParser::assignmentStatement() {
  AssignmentStatementContext *_localctx = _tracker.createInstance<AssignmentStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, BanglaParser::RuleAssignmentStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    match(BanglaParser::ID);
    setState(139);
    match(BanglaParser::T__3);
    setState(140);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializationContext ------------------------------------------------------------------

BanglaParser::InitializationContext::InitializationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BanglaParser::AssignmentStatementContext* BanglaParser::InitializationContext::assignmentStatement() {
  return getRuleContext<BanglaParser::AssignmentStatementContext>(0);
}


size_t BanglaParser::InitializationContext::getRuleIndex() const {
  return BanglaParser::RuleInitialization;
}

void BanglaParser::InitializationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitialization(this);
}

void BanglaParser::InitializationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitialization(this);
}

BanglaParser::InitializationContext* BanglaParser::initialization() {
  InitializationContext *_localctx = _tracker.createInstance<InitializationContext>(_ctx, getState());
  enterRule(_localctx, 18, BanglaParser::RuleInitialization);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    assignmentStatement();
    setState(143);
    match(BanglaParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncrementStatementContext ------------------------------------------------------------------

BanglaParser::IncrementStatementContext::IncrementStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::IncrementStatementContext::ID() {
  return getToken(BanglaParser::ID, 0);
}


size_t BanglaParser::IncrementStatementContext::getRuleIndex() const {
  return BanglaParser::RuleIncrementStatement;
}

void BanglaParser::IncrementStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrementStatement(this);
}

void BanglaParser::IncrementStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrementStatement(this);
}

BanglaParser::IncrementStatementContext* BanglaParser::incrementStatement() {
  IncrementStatementContext *_localctx = _tracker.createInstance<IncrementStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, BanglaParser::RuleIncrementStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    match(BanglaParser::ID);
    setState(146);
    match(BanglaParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecrementStatementContext ------------------------------------------------------------------

BanglaParser::DecrementStatementContext::DecrementStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::DecrementStatementContext::ID() {
  return getToken(BanglaParser::ID, 0);
}


size_t BanglaParser::DecrementStatementContext::getRuleIndex() const {
  return BanglaParser::RuleDecrementStatement;
}

void BanglaParser::DecrementStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecrementStatement(this);
}

void BanglaParser::DecrementStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecrementStatement(this);
}

BanglaParser::DecrementStatementContext* BanglaParser::decrementStatement() {
  DecrementStatementContext *_localctx = _tracker.createInstance<DecrementStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, BanglaParser::RuleDecrementStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    match(BanglaParser::ID);
    setState(149);
    match(BanglaParser::T__8);
   
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
  enterRule(_localctx, 24, BanglaParser::RulePrintStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(151);
    match(BanglaParser::DEKHAO);
    setState(152);
    match(BanglaParser::T__9);
    setState(153);
    printArguments();
    setState(154);
    match(BanglaParser::T__10);
    setState(155);
    match(BanglaParser::T__2);
   
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

std::vector<tree::TerminalNode *> BanglaParser::PrintArgumentsContext::NATUN_LINE() {
  return getTokens(BanglaParser::NATUN_LINE);
}

tree::TerminalNode* BanglaParser::PrintArgumentsContext::NATUN_LINE(size_t i) {
  return getToken(BanglaParser::NATUN_LINE, i);
}

std::vector<BanglaParser::ArrayElementAccessContext *> BanglaParser::PrintArgumentsContext::arrayElementAccess() {
  return getRuleContexts<BanglaParser::ArrayElementAccessContext>();
}

BanglaParser::ArrayElementAccessContext* BanglaParser::PrintArgumentsContext::arrayElementAccess(size_t i) {
  return getRuleContext<BanglaParser::ArrayElementAccessContext>(i);
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
  enterRule(_localctx, 26, BanglaParser::RulePrintArguments);
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
    setState(161);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(157);
      match(BanglaParser::ID);
      break;
    }

    case 2: {
      setState(158);
      match(BanglaParser::STRING);
      break;
    }

    case 3: {
      setState(159);
      match(BanglaParser::NATUN_LINE);
      break;
    }

    case 4: {
      setState(160);
      arrayElementAccess();
      break;
    }

    default:
      break;
    }
    setState(172);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(163);
        match(BanglaParser::T__6);
        setState(168);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          setState(164);
          match(BanglaParser::ID);
          break;
        }

        case 2: {
          setState(165);
          match(BanglaParser::STRING);
          break;
        }

        case 3: {
          setState(166);
          match(BanglaParser::NATUN_LINE);
          break;
        }

        case 4: {
          setState(167);
          arrayElementAccess();
          break;
        }

        default:
          break;
        } 
      }
      setState(174);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(177);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BanglaParser::T__6) {
      setState(175);
      match(BanglaParser::T__6);
      setState(176);
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
  enterRule(_localctx, 28, BanglaParser::RuleIfStatement);
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
    setState(179);
    match(BanglaParser::IF);
    setState(180);
    match(BanglaParser::T__9);
    setState(181);
    condition();
    setState(182);
    match(BanglaParser::T__10);
    setState(183);
    block();
    setState(192);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BanglaParser::ELSE_IF) {
      setState(184);
      match(BanglaParser::ELSE_IF);
      setState(185);
      match(BanglaParser::T__9);
      setState(186);
      condition();
      setState(187);
      match(BanglaParser::T__10);
      setState(188);
      block();
      setState(194);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(197);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BanglaParser::ELSE) {
      setState(195);
      match(BanglaParser::ELSE);
      setState(196);
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

//----------------- ForStatementContext ------------------------------------------------------------------

BanglaParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::ForStatementContext::FOR() {
  return getToken(BanglaParser::FOR, 0);
}

BanglaParser::ConditionContext* BanglaParser::ForStatementContext::condition() {
  return getRuleContext<BanglaParser::ConditionContext>(0);
}

BanglaParser::BlockContext* BanglaParser::ForStatementContext::block() {
  return getRuleContext<BanglaParser::BlockContext>(0);
}

BanglaParser::VariableDeclarationContext* BanglaParser::ForStatementContext::variableDeclaration() {
  return getRuleContext<BanglaParser::VariableDeclarationContext>(0);
}

BanglaParser::InitializationContext* BanglaParser::ForStatementContext::initialization() {
  return getRuleContext<BanglaParser::InitializationContext>(0);
}

BanglaParser::AssignmentStatementContext* BanglaParser::ForStatementContext::assignmentStatement() {
  return getRuleContext<BanglaParser::AssignmentStatementContext>(0);
}

BanglaParser::IncrementStatementContext* BanglaParser::ForStatementContext::incrementStatement() {
  return getRuleContext<BanglaParser::IncrementStatementContext>(0);
}

BanglaParser::DecrementStatementContext* BanglaParser::ForStatementContext::decrementStatement() {
  return getRuleContext<BanglaParser::DecrementStatementContext>(0);
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
  enterRule(_localctx, 30, BanglaParser::RuleForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    match(BanglaParser::FOR);
    setState(200);
    match(BanglaParser::T__9);
    setState(204);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(201);
      variableDeclaration();
      break;
    }

    case 2: {
      setState(202);
      initialization();
      break;
    }

    case 3: {
      setState(203);
      match(BanglaParser::T__2);
      break;
    }

    default:
      break;
    }
    setState(206);
    condition();
    setState(207);
    match(BanglaParser::T__2);
    setState(211);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      setState(208);
      assignmentStatement();
      break;
    }

    case 2: {
      setState(209);
      incrementStatement();
      break;
    }

    case 3: {
      setState(210);
      decrementStatement();
      break;
    }

    default:
      break;
    }
    setState(213);
    match(BanglaParser::T__10);
    setState(214);
    block();
   
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
  enterRule(_localctx, 32, BanglaParser::RuleCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    operand();
    setState(217);
    comparisonOperator();
    setState(218);
    operand();
   
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

tree::TerminalNode* BanglaParser::ExpressionContext::INT() {
  return getToken(BanglaParser::INT, 0);
}

tree::TerminalNode* BanglaParser::ExpressionContext::FLOAT() {
  return getToken(BanglaParser::FLOAT, 0);
}

tree::TerminalNode* BanglaParser::ExpressionContext::STRING() {
  return getToken(BanglaParser::STRING, 0);
}

tree::TerminalNode* BanglaParser::ExpressionContext::ID() {
  return getToken(BanglaParser::ID, 0);
}

BanglaParser::ArrayElementAccessContext* BanglaParser::ExpressionContext::arrayElementAccess() {
  return getRuleContext<BanglaParser::ArrayElementAccessContext>(0);
}

std::vector<BanglaParser::ExpressionContext *> BanglaParser::ExpressionContext::expression() {
  return getRuleContexts<BanglaParser::ExpressionContext>();
}

BanglaParser::ExpressionContext* BanglaParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<BanglaParser::ExpressionContext>(i);
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
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, BanglaParser::RuleExpression, precedence);

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
    setState(230);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(221);
      match(BanglaParser::INT);
      break;
    }

    case 2: {
      setState(222);
      match(BanglaParser::FLOAT);
      break;
    }

    case 3: {
      setState(223);
      match(BanglaParser::STRING);
      break;
    }

    case 4: {
      setState(224);
      match(BanglaParser::ID);
      break;
    }

    case 5: {
      setState(225);
      arrayElementAccess();
      break;
    }

    case 6: {
      setState(226);
      match(BanglaParser::T__9);
      setState(227);
      expression(0);
      setState(228);
      match(BanglaParser::T__10);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(240);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(238);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(232);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(233);
          _la = _input->LA(1);
          if (!(_la == BanglaParser::T__11

          || _la == BanglaParser::T__12)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(234);
          expression(9);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(235);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(236);
          _la = _input->LA(1);
          if (!(_la == BanglaParser::T__13

          || _la == BanglaParser::T__14)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(237);
          expression(8);
          break;
        }

        default:
          break;
        } 
      }
      setState(242);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
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

tree::TerminalNode* BanglaParser::OperandContext::INT() {
  return getToken(BanglaParser::INT, 0);
}

tree::TerminalNode* BanglaParser::OperandContext::FLOAT() {
  return getToken(BanglaParser::FLOAT, 0);
}

tree::TerminalNode* BanglaParser::OperandContext::ID() {
  return getToken(BanglaParser::ID, 0);
}

BanglaParser::ArrayElementAccessContext* BanglaParser::OperandContext::arrayElementAccess() {
  return getRuleContext<BanglaParser::ArrayElementAccessContext>(0);
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
  enterRule(_localctx, 36, BanglaParser::RuleOperand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(247);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(243);
      match(BanglaParser::INT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(244);
      match(BanglaParser::FLOAT);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(245);
      match(BanglaParser::ID);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(246);
      arrayElementAccess();
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
  enterRule(_localctx, 38, BanglaParser::RuleComparisonOperator);
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
    setState(249);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4128768) != 0))) {
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

bool BanglaParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 17: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool BanglaParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 8);
    case 1: return precpred(_ctx, 7);

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
