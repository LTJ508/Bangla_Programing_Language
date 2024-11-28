
// Generated from Bangla.g4 by ANTLR 4.13.2


#include "BanglaLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct BanglaLexerStaticData final {
  BanglaLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  BanglaLexerStaticData(const BanglaLexerStaticData&) = delete;
  BanglaLexerStaticData(BanglaLexerStaticData&&) = delete;
  BanglaLexerStaticData& operator=(const BanglaLexerStaticData&) = delete;
  BanglaLexerStaticData& operator=(BanglaLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag banglalexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<BanglaLexerStaticData> banglalexerLexerStaticData = nullptr;

void banglalexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (banglalexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(banglalexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<BanglaLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "SHURU", "SHESH", 
      "DHORI", "DEKHAO", "ID", "NUMBER", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'{'", "'}'", "'='", "';'", "'('", "')'", "'\\u09B6\\u09C1\\u09B0\\u09C1'", 
      "'\\u09B6\\u09C7\\u09B7'", "'\\u09A7\\u09B0\\u09BF'", "'\\u09A6\\u09C7\\u0996\\u09BE\\u0993'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "SHURU", "SHESH", "DHORI", "DEKHAO", "ID", 
      "NUMBER", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,13,85,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,1,0,1,0,1,1,1,
  	1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,
  	1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,5,10,61,8,10,10,10,
  	12,10,64,9,10,1,11,4,11,67,8,11,11,11,12,11,68,1,11,1,11,4,11,73,8,11,
  	11,11,12,11,74,3,11,77,8,11,1,12,4,12,80,8,12,11,12,12,12,81,1,12,1,12,
  	0,0,13,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,
  	1,0,4,1,0,2437,2527,3,0,95,95,2437,2527,2534,2543,1,0,2534,2543,3,0,9,
  	10,13,13,32,32,89,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,
  	1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,
  	0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,1,27,1,0,0,0,3,29,1,0,0,0,
  	5,31,1,0,0,0,7,33,1,0,0,0,9,35,1,0,0,0,11,37,1,0,0,0,13,39,1,0,0,0,15,
  	44,1,0,0,0,17,48,1,0,0,0,19,52,1,0,0,0,21,58,1,0,0,0,23,66,1,0,0,0,25,
  	79,1,0,0,0,27,28,5,123,0,0,28,2,1,0,0,0,29,30,5,125,0,0,30,4,1,0,0,0,
  	31,32,5,61,0,0,32,6,1,0,0,0,33,34,5,59,0,0,34,8,1,0,0,0,35,36,5,40,0,
  	0,36,10,1,0,0,0,37,38,5,41,0,0,38,12,1,0,0,0,39,40,5,2486,0,0,40,41,5,
  	2497,0,0,41,42,5,2480,0,0,42,43,5,2497,0,0,43,14,1,0,0,0,44,45,5,2486,
  	0,0,45,46,5,2503,0,0,46,47,5,2487,0,0,47,16,1,0,0,0,48,49,5,2471,0,0,
  	49,50,5,2480,0,0,50,51,5,2495,0,0,51,18,1,0,0,0,52,53,5,2470,0,0,53,54,
  	5,2503,0,0,54,55,5,2454,0,0,55,56,5,2494,0,0,56,57,5,2451,0,0,57,20,1,
  	0,0,0,58,62,7,0,0,0,59,61,7,1,0,0,60,59,1,0,0,0,61,64,1,0,0,0,62,60,1,
  	0,0,0,62,63,1,0,0,0,63,22,1,0,0,0,64,62,1,0,0,0,65,67,7,2,0,0,66,65,1,
  	0,0,0,67,68,1,0,0,0,68,66,1,0,0,0,68,69,1,0,0,0,69,76,1,0,0,0,70,72,5,
  	46,0,0,71,73,7,2,0,0,72,71,1,0,0,0,73,74,1,0,0,0,74,72,1,0,0,0,74,75,
  	1,0,0,0,75,77,1,0,0,0,76,70,1,0,0,0,76,77,1,0,0,0,77,24,1,0,0,0,78,80,
  	7,3,0,0,79,78,1,0,0,0,80,81,1,0,0,0,81,79,1,0,0,0,81,82,1,0,0,0,82,83,
  	1,0,0,0,83,84,6,12,0,0,84,26,1,0,0,0,6,0,62,68,74,76,81,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  banglalexerLexerStaticData = std::move(staticData);
}

}

BanglaLexer::BanglaLexer(CharStream *input) : Lexer(input) {
  BanglaLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *banglalexerLexerStaticData->atn, banglalexerLexerStaticData->decisionToDFA, banglalexerLexerStaticData->sharedContextCache);
}

BanglaLexer::~BanglaLexer() {
  delete _interpreter;
}

std::string BanglaLexer::getGrammarFileName() const {
  return "Bangla.g4";
}

const std::vector<std::string>& BanglaLexer::getRuleNames() const {
  return banglalexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& BanglaLexer::getChannelNames() const {
  return banglalexerLexerStaticData->channelNames;
}

const std::vector<std::string>& BanglaLexer::getModeNames() const {
  return banglalexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& BanglaLexer::getVocabulary() const {
  return banglalexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView BanglaLexer::getSerializedATN() const {
  return banglalexerLexerStaticData->serializedATN;
}

const atn::ATN& BanglaLexer::getATN() const {
  return *banglalexerLexerStaticData->atn;
}




void BanglaLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  banglalexerLexerInitialize();
#else
  ::antlr4::internal::call_once(banglalexerLexerOnceFlag, banglalexerLexerInitialize);
#endif
}
