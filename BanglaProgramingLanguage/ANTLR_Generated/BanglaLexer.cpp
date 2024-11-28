
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
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "SHURU", "SHESH", "DHORI", "JODI", 
      "TANAHOLE", "JOTOKKHON", "DEKHAO", "FILE", "KHULO", "LEKHO", "BONDHO", 
      "NATUN_LINE", "OKARJOKOR", "ID", "NUMBER", "STRING", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,30,200,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,
  	6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,13,
  	1,13,1,13,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,
  	1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,21,1,21,
  	1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,24,
  	1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,25,1,25,
  	1,25,1,25,1,25,1,25,1,26,1,26,5,26,167,8,26,10,26,12,26,170,9,26,1,27,
  	4,27,173,8,27,11,27,12,27,174,1,27,1,27,4,27,179,8,27,11,27,12,27,180,
  	3,27,183,8,27,1,28,1,28,5,28,187,8,28,10,28,12,28,190,9,28,1,28,1,28,
  	1,29,4,29,195,8,29,11,29,12,29,196,1,29,1,29,1,188,0,30,1,1,3,2,5,3,7,
  	4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,
  	17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,
  	57,29,59,30,1,0,4,1,0,2437,2527,3,0,95,95,2437,2527,2534,2543,1,0,2534,
  	2543,3,0,9,10,13,13,32,32,205,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,
  	1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,
  	0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,
  	29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,
  	0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,
  	0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,1,
  	61,1,0,0,0,3,63,1,0,0,0,5,65,1,0,0,0,7,67,1,0,0,0,9,69,1,0,0,0,11,71,
  	1,0,0,0,13,73,1,0,0,0,15,75,1,0,0,0,17,77,1,0,0,0,19,79,1,0,0,0,21,81,
  	1,0,0,0,23,83,1,0,0,0,25,85,1,0,0,0,27,87,1,0,0,0,29,92,1,0,0,0,31,96,
  	1,0,0,0,33,100,1,0,0,0,35,104,1,0,0,0,37,112,1,0,0,0,39,119,1,0,0,0,41,
  	125,1,0,0,0,43,130,1,0,0,0,45,135,1,0,0,0,47,140,1,0,0,0,49,145,1,0,0,
  	0,51,155,1,0,0,0,53,164,1,0,0,0,55,172,1,0,0,0,57,184,1,0,0,0,59,194,
  	1,0,0,0,61,62,5,123,0,0,62,2,1,0,0,0,63,64,5,125,0,0,64,4,1,0,0,0,65,
  	66,5,40,0,0,66,6,1,0,0,0,67,68,5,44,0,0,68,8,1,0,0,0,69,70,5,41,0,0,70,
  	10,1,0,0,0,71,72,5,59,0,0,72,12,1,0,0,0,73,74,5,61,0,0,74,14,1,0,0,0,
  	75,76,5,91,0,0,76,16,1,0,0,0,77,78,5,93,0,0,78,18,1,0,0,0,79,80,5,42,
  	0,0,80,20,1,0,0,0,81,82,5,47,0,0,82,22,1,0,0,0,83,84,5,43,0,0,84,24,1,
  	0,0,0,85,86,5,45,0,0,86,26,1,0,0,0,87,88,5,2486,0,0,88,89,5,2497,0,0,
  	89,90,5,2480,0,0,90,91,5,2497,0,0,91,28,1,0,0,0,92,93,5,2486,0,0,93,94,
  	5,2503,0,0,94,95,5,2487,0,0,95,30,1,0,0,0,96,97,5,2471,0,0,97,98,5,2480,
  	0,0,98,99,5,2495,0,0,99,32,1,0,0,0,100,101,5,2479,0,0,101,102,5,2470,
  	0,0,102,103,5,2495,0,0,103,34,1,0,0,0,104,105,5,2468,0,0,105,106,5,2494,
  	0,0,106,107,5,2472,0,0,107,108,5,2494,0,0,108,109,5,2489,0,0,109,110,
  	5,2482,0,0,110,111,5,2503,0,0,111,36,1,0,0,0,112,113,5,2479,0,0,113,114,
  	5,2468,0,0,114,115,5,2453,0,0,115,116,5,2509,0,0,116,117,5,2487,0,0,117,
  	118,5,2467,0,0,118,38,1,0,0,0,119,120,5,2470,0,0,120,121,5,2503,0,0,121,
  	122,5,2454,0,0,122,123,5,2494,0,0,123,124,5,2451,0,0,124,40,1,0,0,0,125,
  	126,5,2475,0,0,126,127,5,2494,0,0,127,128,5,2439,0,0,128,129,5,2482,0,
  	0,129,42,1,0,0,0,130,131,5,2454,0,0,131,132,5,2497,0,0,132,133,5,2482,
  	0,0,133,134,5,2507,0,0,134,44,1,0,0,0,135,136,5,2482,0,0,136,137,5,2503,
  	0,0,137,138,5,2454,0,0,138,139,5,2507,0,0,139,46,1,0,0,0,140,141,5,2476,
  	0,0,141,142,5,2472,0,0,142,143,5,2509,0,0,143,144,5,2471,0,0,144,48,1,
  	0,0,0,145,146,5,2472,0,0,146,147,5,2468,0,0,147,148,5,2497,0,0,148,149,
  	5,2472,0,0,149,150,5,95,0,0,150,151,5,2482,0,0,151,152,5,2494,0,0,152,
  	153,5,2439,0,0,153,154,5,2472,0,0,154,50,1,0,0,0,155,156,5,2437,0,0,156,
  	157,5,2453,0,0,157,158,5,2494,0,0,158,159,5,2480,0,0,159,160,5,2509,0,
  	0,160,161,5,2479,0,0,161,162,5,2453,0,0,162,163,5,2480,0,0,163,52,1,0,
  	0,0,164,168,7,0,0,0,165,167,7,1,0,0,166,165,1,0,0,0,167,170,1,0,0,0,168,
  	166,1,0,0,0,168,169,1,0,0,0,169,54,1,0,0,0,170,168,1,0,0,0,171,173,7,
  	2,0,0,172,171,1,0,0,0,173,174,1,0,0,0,174,172,1,0,0,0,174,175,1,0,0,0,
  	175,182,1,0,0,0,176,178,5,46,0,0,177,179,7,2,0,0,178,177,1,0,0,0,179,
  	180,1,0,0,0,180,178,1,0,0,0,180,181,1,0,0,0,181,183,1,0,0,0,182,176,1,
  	0,0,0,182,183,1,0,0,0,183,56,1,0,0,0,184,188,5,34,0,0,185,187,9,0,0,0,
  	186,185,1,0,0,0,187,190,1,0,0,0,188,189,1,0,0,0,188,186,1,0,0,0,189,191,
  	1,0,0,0,190,188,1,0,0,0,191,192,5,34,0,0,192,58,1,0,0,0,193,195,7,3,0,
  	0,194,193,1,0,0,0,195,196,1,0,0,0,196,194,1,0,0,0,196,197,1,0,0,0,197,
  	198,1,0,0,0,198,199,6,29,0,0,199,60,1,0,0,0,7,0,168,174,180,182,188,196,
  	1,6,0,0
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
