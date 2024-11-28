
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
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "SHURU", "SHESH", 
      "DHORI", "DEKHAO", "NATUN_LINE", "ID", "ID_START", "ID_PART", "FLOAT", 
      "INT", "STRING", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,17,125,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,1,0,1,1,1,1,1,2,1,2,
  	1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,
  	9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,12,1,12,5,12,85,8,12,10,12,12,12,88,9,12,1,
  	13,1,13,1,14,1,14,1,15,4,15,95,8,15,11,15,12,15,96,1,15,1,15,4,15,101,
  	8,15,11,15,12,15,102,1,16,4,16,106,8,16,11,16,12,16,107,1,17,1,17,5,17,
  	112,8,17,10,17,12,17,115,9,17,1,17,1,17,1,18,4,18,120,8,18,11,18,12,18,
  	121,1,18,1,18,1,113,0,19,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,
  	21,11,23,12,25,13,27,0,29,0,31,14,33,15,35,16,37,17,1,0,4,1,0,2437,2527,
  	4,0,95,95,2434,2434,2437,2527,2534,2543,1,0,2534,2543,3,0,9,10,13,13,
  	32,32,128,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,
  	0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,
  	1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,
  	0,0,0,37,1,0,0,0,1,39,1,0,0,0,3,41,1,0,0,0,5,43,1,0,0,0,7,45,1,0,0,0,
  	9,47,1,0,0,0,11,49,1,0,0,0,13,51,1,0,0,0,15,53,1,0,0,0,17,58,1,0,0,0,
  	19,62,1,0,0,0,21,66,1,0,0,0,23,72,1,0,0,0,25,82,1,0,0,0,27,89,1,0,0,0,
  	29,91,1,0,0,0,31,94,1,0,0,0,33,105,1,0,0,0,35,109,1,0,0,0,37,119,1,0,
  	0,0,39,40,5,123,0,0,40,2,1,0,0,0,41,42,5,125,0,0,42,4,1,0,0,0,43,44,5,
  	61,0,0,44,6,1,0,0,0,45,46,5,59,0,0,46,8,1,0,0,0,47,48,5,40,0,0,48,10,
  	1,0,0,0,49,50,5,41,0,0,50,12,1,0,0,0,51,52,5,44,0,0,52,14,1,0,0,0,53,
  	54,5,2486,0,0,54,55,5,2497,0,0,55,56,5,2480,0,0,56,57,5,2497,0,0,57,16,
  	1,0,0,0,58,59,5,2486,0,0,59,60,5,2503,0,0,60,61,5,2487,0,0,61,18,1,0,
  	0,0,62,63,5,2471,0,0,63,64,5,2480,0,0,64,65,5,2495,0,0,65,20,1,0,0,0,
  	66,67,5,2470,0,0,67,68,5,2503,0,0,68,69,5,2454,0,0,69,70,5,2494,0,0,70,
  	71,5,2451,0,0,71,22,1,0,0,0,72,73,5,2472,0,0,73,74,5,2468,0,0,74,75,5,
  	2497,0,0,75,76,5,2472,0,0,76,77,5,95,0,0,77,78,5,2482,0,0,78,79,5,2494,
  	0,0,79,80,5,2439,0,0,80,81,5,2472,0,0,81,24,1,0,0,0,82,86,3,27,13,0,83,
  	85,3,29,14,0,84,83,1,0,0,0,85,88,1,0,0,0,86,84,1,0,0,0,86,87,1,0,0,0,
  	87,26,1,0,0,0,88,86,1,0,0,0,89,90,7,0,0,0,90,28,1,0,0,0,91,92,7,1,0,0,
  	92,30,1,0,0,0,93,95,7,2,0,0,94,93,1,0,0,0,95,96,1,0,0,0,96,94,1,0,0,0,
  	96,97,1,0,0,0,97,98,1,0,0,0,98,100,5,46,0,0,99,101,7,2,0,0,100,99,1,0,
  	0,0,101,102,1,0,0,0,102,100,1,0,0,0,102,103,1,0,0,0,103,32,1,0,0,0,104,
  	106,7,2,0,0,105,104,1,0,0,0,106,107,1,0,0,0,107,105,1,0,0,0,107,108,1,
  	0,0,0,108,34,1,0,0,0,109,113,5,34,0,0,110,112,9,0,0,0,111,110,1,0,0,0,
  	112,115,1,0,0,0,113,114,1,0,0,0,113,111,1,0,0,0,114,116,1,0,0,0,115,113,
  	1,0,0,0,116,117,5,34,0,0,117,36,1,0,0,0,118,120,7,3,0,0,119,118,1,0,0,
  	0,120,121,1,0,0,0,121,119,1,0,0,0,121,122,1,0,0,0,122,123,1,0,0,0,123,
  	124,6,18,0,0,124,38,1,0,0,0,7,0,86,96,102,107,113,121,1,6,0,0
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
