
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
      "arrayElementAssignment", "arrayIndex", "arrayElementAccess", "arraySizeAccess", 
      "assignmentStatement", "initialization", "incrementStatement", "decrementStatement", 
      "printStatement", "printArguments", "ifStatement", "forStatement", 
      "condition", "expression", "operand", "comparisonOperator"
    },
    std::vector<std::string>{
      "", "'{'", "'}'", "';'", "'='", "'['", "']'", "','", "'.\\u09B8\\u0982\\u0996\\u09CD\\u09AF\\u09BE()'", 
      "'++'", "'--'", "'('", "')'", "'*'", "'/'", "'+'", "'-'", "'>='", 
      "'<='", "'>'", "'<'", "'=='", "'!='", "'\\u09B6\\u09C1\\u09B0\\u09C1'", 
      "'\\u09B6\\u09C7\\u09B7'", "'\\u09A7\\u09B0\\u09BF'", "'\\u09A6\\u09C7\\u0996\\u09BE\\u0993'", 
      "'\\u09A8\\u09A4\\u09C1\\u09A8_\\u09B2\\u09BE\\u0987\\u09A8'", "'\\u09AF\\u09A6\\u09BF'", 
      "'\\u09A4\\u09BE\\u09A8\\u09BE\\u09B9\\u09B2\\u09C7 \\u09AF\\u09A6\\u09BF'", 
      "'\\u09A4\\u09BE\\u09A8\\u09BE\\u09B9\\u09B2\\u09C7'", "'\\u09AF\\u09A4\\u0995\\u09CD\\u09B7\\u09A3'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "SHURU", "SHESH", "DHORI", "DEKHAO", "NATUN_LINE", 
      "IF", "ELSE_IF", "ELSE", "FOR", "ID", "FLOAT", "INT", "STRING", "LINE_COMMENT", 
      "BLOCK_COMMENT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,38,261,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,1,
  	0,1,0,1,0,1,1,1,1,5,1,49,8,1,10,1,12,1,52,9,1,1,1,1,1,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,71,8,2,1,3,1,3,1,3,1,
  	3,3,3,77,8,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,5,4,98,8,4,10,4,12,4,101,9,4,3,4,103,8,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,115,8,4,10,4,12,4,118,9,4,3,4,120,
  	8,4,1,4,1,4,3,4,124,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,7,1,
  	7,1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,
  	11,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,
  	14,3,14,168,8,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,176,8,14,5,14,178,
  	8,14,10,14,12,14,181,9,14,1,14,1,14,3,14,185,8,14,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,15,5,15,198,8,15,10,15,12,15,201,9,15,
  	1,15,1,15,3,15,205,8,15,1,16,1,16,1,16,1,16,1,16,3,16,212,8,16,1,16,1,
  	16,1,16,1,16,1,16,3,16,219,8,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,
  	18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,3,18,239,8,18,1,
  	18,1,18,1,18,1,18,1,18,1,18,5,18,247,8,18,10,18,12,18,250,9,18,1,19,1,
  	19,1,19,1,19,1,19,3,19,257,8,19,1,20,1,20,1,20,0,1,36,21,0,2,4,6,8,10,
  	12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,0,4,2,0,32,32,34,34,1,0,
  	13,14,1,0,15,16,1,0,17,22,285,0,42,1,0,0,0,2,46,1,0,0,0,4,70,1,0,0,0,
  	6,72,1,0,0,0,8,123,1,0,0,0,10,125,1,0,0,0,12,133,1,0,0,0,14,135,1,0,0,
  	0,16,140,1,0,0,0,18,143,1,0,0,0,20,147,1,0,0,0,22,150,1,0,0,0,24,153,
  	1,0,0,0,26,156,1,0,0,0,28,167,1,0,0,0,30,186,1,0,0,0,32,206,1,0,0,0,34,
  	223,1,0,0,0,36,238,1,0,0,0,38,256,1,0,0,0,40,258,1,0,0,0,42,43,5,23,0,
  	0,43,44,3,2,1,0,44,45,5,24,0,0,45,1,1,0,0,0,46,50,5,1,0,0,47,49,3,4,2,
  	0,48,47,1,0,0,0,49,52,1,0,0,0,50,48,1,0,0,0,50,51,1,0,0,0,51,53,1,0,0,
  	0,52,50,1,0,0,0,53,54,5,2,0,0,54,3,1,0,0,0,55,71,3,6,3,0,56,71,3,8,4,
  	0,57,71,3,10,5,0,58,59,3,18,9,0,59,60,5,3,0,0,60,71,1,0,0,0,61,62,3,22,
  	11,0,62,63,5,3,0,0,63,71,1,0,0,0,64,65,3,24,12,0,65,66,5,3,0,0,66,71,
  	1,0,0,0,67,71,3,26,13,0,68,71,3,30,15,0,69,71,3,32,16,0,70,55,1,0,0,0,
  	70,56,1,0,0,0,70,57,1,0,0,0,70,58,1,0,0,0,70,61,1,0,0,0,70,64,1,0,0,0,
  	70,67,1,0,0,0,70,68,1,0,0,0,70,69,1,0,0,0,71,5,1,0,0,0,72,73,5,25,0,0,
  	73,76,5,32,0,0,74,75,5,4,0,0,75,77,3,36,18,0,76,74,1,0,0,0,76,77,1,0,
  	0,0,77,78,1,0,0,0,78,79,5,3,0,0,79,7,1,0,0,0,80,81,5,25,0,0,81,82,5,32,
  	0,0,82,83,5,5,0,0,83,84,3,12,6,0,84,85,5,6,0,0,85,86,5,3,0,0,86,124,1,
  	0,0,0,87,88,5,25,0,0,88,89,5,32,0,0,89,90,5,5,0,0,90,91,3,12,6,0,91,92,
  	5,6,0,0,92,93,5,4,0,0,93,102,5,5,0,0,94,99,3,36,18,0,95,96,5,7,0,0,96,
  	98,3,36,18,0,97,95,1,0,0,0,98,101,1,0,0,0,99,97,1,0,0,0,99,100,1,0,0,
  	0,100,103,1,0,0,0,101,99,1,0,0,0,102,94,1,0,0,0,102,103,1,0,0,0,103,104,
  	1,0,0,0,104,105,5,6,0,0,105,106,5,3,0,0,106,124,1,0,0,0,107,108,5,25,
  	0,0,108,109,5,32,0,0,109,110,5,4,0,0,110,119,5,5,0,0,111,116,3,36,18,
  	0,112,113,5,7,0,0,113,115,3,36,18,0,114,112,1,0,0,0,115,118,1,0,0,0,116,
  	114,1,0,0,0,116,117,1,0,0,0,117,120,1,0,0,0,118,116,1,0,0,0,119,111,1,
  	0,0,0,119,120,1,0,0,0,120,121,1,0,0,0,121,122,5,6,0,0,122,124,5,3,0,0,
  	123,80,1,0,0,0,123,87,1,0,0,0,123,107,1,0,0,0,124,9,1,0,0,0,125,126,5,
  	32,0,0,126,127,5,5,0,0,127,128,3,12,6,0,128,129,5,6,0,0,129,130,5,4,0,
  	0,130,131,3,36,18,0,131,132,5,3,0,0,132,11,1,0,0,0,133,134,7,0,0,0,134,
  	13,1,0,0,0,135,136,5,32,0,0,136,137,5,5,0,0,137,138,3,12,6,0,138,139,
  	5,6,0,0,139,15,1,0,0,0,140,141,5,32,0,0,141,142,5,8,0,0,142,17,1,0,0,
  	0,143,144,5,32,0,0,144,145,5,4,0,0,145,146,3,36,18,0,146,19,1,0,0,0,147,
  	148,3,18,9,0,148,149,5,3,0,0,149,21,1,0,0,0,150,151,5,32,0,0,151,152,
  	5,9,0,0,152,23,1,0,0,0,153,154,5,32,0,0,154,155,5,10,0,0,155,25,1,0,0,
  	0,156,157,5,26,0,0,157,158,5,11,0,0,158,159,3,28,14,0,159,160,5,12,0,
  	0,160,161,5,3,0,0,161,27,1,0,0,0,162,168,5,32,0,0,163,168,5,35,0,0,164,
  	168,5,27,0,0,165,168,3,14,7,0,166,168,3,16,8,0,167,162,1,0,0,0,167,163,
  	1,0,0,0,167,164,1,0,0,0,167,165,1,0,0,0,167,166,1,0,0,0,168,179,1,0,0,
  	0,169,175,5,7,0,0,170,176,5,32,0,0,171,176,5,35,0,0,172,176,5,27,0,0,
  	173,176,3,14,7,0,174,176,3,16,8,0,175,170,1,0,0,0,175,171,1,0,0,0,175,
  	172,1,0,0,0,175,173,1,0,0,0,175,174,1,0,0,0,176,178,1,0,0,0,177,169,1,
  	0,0,0,178,181,1,0,0,0,179,177,1,0,0,0,179,180,1,0,0,0,180,184,1,0,0,0,
  	181,179,1,0,0,0,182,183,5,7,0,0,183,185,5,27,0,0,184,182,1,0,0,0,184,
  	185,1,0,0,0,185,29,1,0,0,0,186,187,5,28,0,0,187,188,5,11,0,0,188,189,
  	3,34,17,0,189,190,5,12,0,0,190,199,3,2,1,0,191,192,5,29,0,0,192,193,5,
  	11,0,0,193,194,3,34,17,0,194,195,5,12,0,0,195,196,3,2,1,0,196,198,1,0,
  	0,0,197,191,1,0,0,0,198,201,1,0,0,0,199,197,1,0,0,0,199,200,1,0,0,0,200,
  	204,1,0,0,0,201,199,1,0,0,0,202,203,5,30,0,0,203,205,3,2,1,0,204,202,
  	1,0,0,0,204,205,1,0,0,0,205,31,1,0,0,0,206,207,5,31,0,0,207,211,5,11,
  	0,0,208,212,3,6,3,0,209,212,3,20,10,0,210,212,5,3,0,0,211,208,1,0,0,0,
  	211,209,1,0,0,0,211,210,1,0,0,0,211,212,1,0,0,0,212,213,1,0,0,0,213,214,
  	3,34,17,0,214,218,5,3,0,0,215,219,3,18,9,0,216,219,3,22,11,0,217,219,
  	3,24,12,0,218,215,1,0,0,0,218,216,1,0,0,0,218,217,1,0,0,0,218,219,1,0,
  	0,0,219,220,1,0,0,0,220,221,5,12,0,0,221,222,3,2,1,0,222,33,1,0,0,0,223,
  	224,3,38,19,0,224,225,3,40,20,0,225,226,3,38,19,0,226,35,1,0,0,0,227,
  	228,6,18,-1,0,228,239,5,34,0,0,229,239,5,33,0,0,230,239,5,35,0,0,231,
  	239,5,32,0,0,232,239,3,14,7,0,233,239,3,16,8,0,234,235,5,11,0,0,235,236,
  	3,36,18,0,236,237,5,12,0,0,237,239,1,0,0,0,238,227,1,0,0,0,238,229,1,
  	0,0,0,238,230,1,0,0,0,238,231,1,0,0,0,238,232,1,0,0,0,238,233,1,0,0,0,
  	238,234,1,0,0,0,239,248,1,0,0,0,240,241,10,9,0,0,241,242,7,1,0,0,242,
  	247,3,36,18,10,243,244,10,8,0,0,244,245,7,2,0,0,245,247,3,36,18,9,246,
  	240,1,0,0,0,246,243,1,0,0,0,247,250,1,0,0,0,248,246,1,0,0,0,248,249,1,
  	0,0,0,249,37,1,0,0,0,250,248,1,0,0,0,251,257,5,34,0,0,252,257,5,33,0,
  	0,253,257,5,32,0,0,254,257,3,14,7,0,255,257,3,16,8,0,256,251,1,0,0,0,
  	256,252,1,0,0,0,256,253,1,0,0,0,256,254,1,0,0,0,256,255,1,0,0,0,257,39,
  	1,0,0,0,258,259,7,3,0,0,259,41,1,0,0,0,20,50,70,76,99,102,116,119,123,
  	167,175,179,184,199,204,211,218,238,246,248,256
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
    setState(42);
    match(BanglaParser::SHURU);
    setState(43);
    block();
    setState(44);
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
    setState(46);
    match(BanglaParser::T__0);
    setState(50);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6811549696) != 0)) {
      setState(47);
      statement();
      setState(52);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(53);
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
    setState(70);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(55);
      variableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(56);
      arrayDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(57);
      arrayElementAssignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(58);
      assignmentStatement();
      setState(59);
      match(BanglaParser::T__2);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(61);
      incrementStatement();
      setState(62);
      match(BanglaParser::T__2);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(64);
      decrementStatement();
      setState(65);
      match(BanglaParser::T__2);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(67);
      printStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(68);
      ifStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(69);
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
    setState(72);
    match(BanglaParser::DHORI);
    setState(73);
    match(BanglaParser::ID);
    setState(76);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BanglaParser::T__3) {
      setState(74);
      match(BanglaParser::T__3);
      setState(75);
      expression(0);
    }
    setState(78);
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
    setState(123);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(80);
      match(BanglaParser::DHORI);
      setState(81);
      match(BanglaParser::ID);
      setState(82);
      match(BanglaParser::T__4);
      setState(83);
      arrayIndex();
      setState(84);
      match(BanglaParser::T__5);
      setState(85);
      match(BanglaParser::T__2);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(87);
      match(BanglaParser::DHORI);
      setState(88);
      match(BanglaParser::ID);
      setState(89);
      match(BanglaParser::T__4);
      setState(90);
      arrayIndex();
      setState(91);
      match(BanglaParser::T__5);
      setState(92);
      match(BanglaParser::T__3);
      setState(93);
      match(BanglaParser::T__4);
      setState(102);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 64424511488) != 0)) {
        setState(94);
        expression(0);
        setState(99);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == BanglaParser::T__6) {
          setState(95);
          match(BanglaParser::T__6);
          setState(96);
          expression(0);
          setState(101);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(104);
      match(BanglaParser::T__5);
      setState(105);
      match(BanglaParser::T__2);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(107);
      match(BanglaParser::DHORI);
      setState(108);
      match(BanglaParser::ID);
      setState(109);
      match(BanglaParser::T__3);
      setState(110);
      match(BanglaParser::T__4);
      setState(119);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 64424511488) != 0)) {
        setState(111);
        expression(0);
        setState(116);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == BanglaParser::T__6) {
          setState(112);
          match(BanglaParser::T__6);
          setState(113);
          expression(0);
          setState(118);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(121);
      match(BanglaParser::T__5);
      setState(122);
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
    setState(125);
    match(BanglaParser::ID);
    setState(126);
    match(BanglaParser::T__4);
    setState(127);
    arrayIndex();
    setState(128);
    match(BanglaParser::T__5);
    setState(129);
    match(BanglaParser::T__3);
    setState(130);
    expression(0);
    setState(131);
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
    setState(133);
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
    setState(135);
    match(BanglaParser::ID);
    setState(136);
    match(BanglaParser::T__4);
    setState(137);
    arrayIndex();
    setState(138);
    match(BanglaParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArraySizeAccessContext ------------------------------------------------------------------

BanglaParser::ArraySizeAccessContext::ArraySizeAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::ArraySizeAccessContext::ID() {
  return getToken(BanglaParser::ID, 0);
}


size_t BanglaParser::ArraySizeAccessContext::getRuleIndex() const {
  return BanglaParser::RuleArraySizeAccess;
}

void BanglaParser::ArraySizeAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArraySizeAccess(this);
}

void BanglaParser::ArraySizeAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArraySizeAccess(this);
}

BanglaParser::ArraySizeAccessContext* BanglaParser::arraySizeAccess() {
  ArraySizeAccessContext *_localctx = _tracker.createInstance<ArraySizeAccessContext>(_ctx, getState());
  enterRule(_localctx, 16, BanglaParser::RuleArraySizeAccess);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    match(BanglaParser::ID);
    setState(141);
    match(BanglaParser::T__7);
   
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
  enterRule(_localctx, 18, BanglaParser::RuleAssignmentStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    match(BanglaParser::ID);
    setState(144);
    match(BanglaParser::T__3);
    setState(145);
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
  enterRule(_localctx, 20, BanglaParser::RuleInitialization);

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
    assignmentStatement();
    setState(148);
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
  enterRule(_localctx, 22, BanglaParser::RuleIncrementStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(BanglaParser::ID);
    setState(151);
    match(BanglaParser::T__8);
   
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
  enterRule(_localctx, 24, BanglaParser::RuleDecrementStatement);

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
    match(BanglaParser::ID);
    setState(154);
    match(BanglaParser::T__9);
   
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
  enterRule(_localctx, 26, BanglaParser::RulePrintStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(BanglaParser::DEKHAO);
    setState(157);
    match(BanglaParser::T__10);
    setState(158);
    printArguments();
    setState(159);
    match(BanglaParser::T__11);
    setState(160);
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

std::vector<BanglaParser::ArraySizeAccessContext *> BanglaParser::PrintArgumentsContext::arraySizeAccess() {
  return getRuleContexts<BanglaParser::ArraySizeAccessContext>();
}

BanglaParser::ArraySizeAccessContext* BanglaParser::PrintArgumentsContext::arraySizeAccess(size_t i) {
  return getRuleContext<BanglaParser::ArraySizeAccessContext>(i);
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
  enterRule(_localctx, 28, BanglaParser::RulePrintArguments);
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
    setState(167);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(162);
      match(BanglaParser::ID);
      break;
    }

    case 2: {
      setState(163);
      match(BanglaParser::STRING);
      break;
    }

    case 3: {
      setState(164);
      match(BanglaParser::NATUN_LINE);
      break;
    }

    case 4: {
      setState(165);
      arrayElementAccess();
      break;
    }

    case 5: {
      setState(166);
      arraySizeAccess();
      break;
    }

    default:
      break;
    }
    setState(179);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(169);
        match(BanglaParser::T__6);
        setState(175);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          setState(170);
          match(BanglaParser::ID);
          break;
        }

        case 2: {
          setState(171);
          match(BanglaParser::STRING);
          break;
        }

        case 3: {
          setState(172);
          match(BanglaParser::NATUN_LINE);
          break;
        }

        case 4: {
          setState(173);
          arrayElementAccess();
          break;
        }

        case 5: {
          setState(174);
          arraySizeAccess();
          break;
        }

        default:
          break;
        } 
      }
      setState(181);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(184);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BanglaParser::T__6) {
      setState(182);
      match(BanglaParser::T__6);
      setState(183);
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
  enterRule(_localctx, 30, BanglaParser::RuleIfStatement);
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
    setState(186);
    match(BanglaParser::IF);
    setState(187);
    match(BanglaParser::T__10);
    setState(188);
    condition();
    setState(189);
    match(BanglaParser::T__11);
    setState(190);
    block();
    setState(199);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BanglaParser::ELSE_IF) {
      setState(191);
      match(BanglaParser::ELSE_IF);
      setState(192);
      match(BanglaParser::T__10);
      setState(193);
      condition();
      setState(194);
      match(BanglaParser::T__11);
      setState(195);
      block();
      setState(201);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(204);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BanglaParser::ELSE) {
      setState(202);
      match(BanglaParser::ELSE);
      setState(203);
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
  enterRule(_localctx, 32, BanglaParser::RuleForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    match(BanglaParser::FOR);
    setState(207);
    match(BanglaParser::T__10);
    setState(211);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(208);
      variableDeclaration();
      break;
    }

    case 2: {
      setState(209);
      initialization();
      break;
    }

    case 3: {
      setState(210);
      match(BanglaParser::T__2);
      break;
    }

    default:
      break;
    }
    setState(213);
    condition();
    setState(214);
    match(BanglaParser::T__2);
    setState(218);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      setState(215);
      assignmentStatement();
      break;
    }

    case 2: {
      setState(216);
      incrementStatement();
      break;
    }

    case 3: {
      setState(217);
      decrementStatement();
      break;
    }

    default:
      break;
    }
    setState(220);
    match(BanglaParser::T__11);
    setState(221);
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
  enterRule(_localctx, 34, BanglaParser::RuleCondition);

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
    operand();
    setState(224);
    comparisonOperator();
    setState(225);
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

BanglaParser::ArraySizeAccessContext* BanglaParser::ExpressionContext::arraySizeAccess() {
  return getRuleContext<BanglaParser::ArraySizeAccessContext>(0);
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
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, BanglaParser::RuleExpression, precedence);

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
    setState(238);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(228);
      match(BanglaParser::INT);
      break;
    }

    case 2: {
      setState(229);
      match(BanglaParser::FLOAT);
      break;
    }

    case 3: {
      setState(230);
      match(BanglaParser::STRING);
      break;
    }

    case 4: {
      setState(231);
      match(BanglaParser::ID);
      break;
    }

    case 5: {
      setState(232);
      arrayElementAccess();
      break;
    }

    case 6: {
      setState(233);
      arraySizeAccess();
      break;
    }

    case 7: {
      setState(234);
      match(BanglaParser::T__10);
      setState(235);
      expression(0);
      setState(236);
      match(BanglaParser::T__11);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(248);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(246);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(240);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(241);
          _la = _input->LA(1);
          if (!(_la == BanglaParser::T__12

          || _la == BanglaParser::T__13)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(242);
          expression(10);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(243);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(244);
          _la = _input->LA(1);
          if (!(_la == BanglaParser::T__14

          || _la == BanglaParser::T__15)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(245);
          expression(9);
          break;
        }

        default:
          break;
        } 
      }
      setState(250);
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

BanglaParser::ArraySizeAccessContext* BanglaParser::OperandContext::arraySizeAccess() {
  return getRuleContext<BanglaParser::ArraySizeAccessContext>(0);
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
  enterRule(_localctx, 38, BanglaParser::RuleOperand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(256);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(251);
      match(BanglaParser::INT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(252);
      match(BanglaParser::FLOAT);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(253);
      match(BanglaParser::ID);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(254);
      arrayElementAccess();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(255);
      arraySizeAccess();
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
  enterRule(_localctx, 40, BanglaParser::RuleComparisonOperator);
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
    setState(258);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8257536) != 0))) {
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
    case 18: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool BanglaParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 9);
    case 1: return precpred(_ctx, 8);

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
