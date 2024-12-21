
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
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "SHURU", "SHESH", "DHORI", "DEKHAO", 
      "NATUN_LINE", "IF", "ELSE_IF", "ELSE", "FOR", "ID", "ID_START", "ID_PART", 
      "FLOAT", "INT", "STRING", "LINE_COMMENT", "BLOCK_COMMENT", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,37,255,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,
  	4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,10,1,10,1,11,
  	1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,16,1,17,
  	1,17,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,21,
  	1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,
  	1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,26,1,26,1,26,1,26,
  	1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,28,1,28,
  	1,28,1,28,1,28,1,28,1,28,1,28,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,30,
  	1,30,5,30,190,8,30,10,30,12,30,193,9,30,1,31,1,31,1,32,1,32,1,33,4,33,
  	200,8,33,11,33,12,33,201,1,33,1,33,4,33,206,8,33,11,33,12,33,207,1,34,
  	4,34,211,8,34,11,34,12,34,212,1,35,1,35,5,35,217,8,35,10,35,12,35,220,
  	9,35,1,35,1,35,1,36,1,36,1,36,1,36,5,36,228,8,36,10,36,12,36,231,9,36,
  	1,36,1,36,1,37,1,37,1,37,1,37,5,37,239,8,37,10,37,12,37,242,9,37,1,37,
  	1,37,1,37,1,37,1,37,1,38,4,38,250,8,38,11,38,12,38,251,1,38,1,38,2,218,
  	240,0,39,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,
  	13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,
  	49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,0,65,0,67,32,69,33,71,34,
  	73,35,75,36,77,37,1,0,5,1,0,2437,2527,4,0,95,95,2434,2434,2437,2527,2534,
  	2543,1,0,2534,2543,2,0,10,10,13,13,3,0,9,10,13,13,32,32,260,0,1,1,0,0,
  	0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,
  	0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,
  	0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,
  	35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,
  	0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,
  	0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,
  	71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,1,79,1,0,0,0,3,81,1,
  	0,0,0,5,83,1,0,0,0,7,85,1,0,0,0,9,87,1,0,0,0,11,89,1,0,0,0,13,91,1,0,
  	0,0,15,93,1,0,0,0,17,96,1,0,0,0,19,99,1,0,0,0,21,101,1,0,0,0,23,103,1,
  	0,0,0,25,105,1,0,0,0,27,107,1,0,0,0,29,109,1,0,0,0,31,111,1,0,0,0,33,
  	114,1,0,0,0,35,117,1,0,0,0,37,119,1,0,0,0,39,121,1,0,0,0,41,124,1,0,0,
  	0,43,127,1,0,0,0,45,132,1,0,0,0,47,136,1,0,0,0,49,140,1,0,0,0,51,146,
  	1,0,0,0,53,156,1,0,0,0,55,160,1,0,0,0,57,172,1,0,0,0,59,180,1,0,0,0,61,
  	187,1,0,0,0,63,194,1,0,0,0,65,196,1,0,0,0,67,199,1,0,0,0,69,210,1,0,0,
  	0,71,214,1,0,0,0,73,223,1,0,0,0,75,234,1,0,0,0,77,249,1,0,0,0,79,80,5,
  	123,0,0,80,2,1,0,0,0,81,82,5,125,0,0,82,4,1,0,0,0,83,84,5,59,0,0,84,6,
  	1,0,0,0,85,86,5,61,0,0,86,8,1,0,0,0,87,88,5,91,0,0,88,10,1,0,0,0,89,90,
  	5,93,0,0,90,12,1,0,0,0,91,92,5,44,0,0,92,14,1,0,0,0,93,94,5,43,0,0,94,
  	95,5,43,0,0,95,16,1,0,0,0,96,97,5,45,0,0,97,98,5,45,0,0,98,18,1,0,0,0,
  	99,100,5,40,0,0,100,20,1,0,0,0,101,102,5,41,0,0,102,22,1,0,0,0,103,104,
  	5,42,0,0,104,24,1,0,0,0,105,106,5,47,0,0,106,26,1,0,0,0,107,108,5,43,
  	0,0,108,28,1,0,0,0,109,110,5,45,0,0,110,30,1,0,0,0,111,112,5,62,0,0,112,
  	113,5,61,0,0,113,32,1,0,0,0,114,115,5,60,0,0,115,116,5,61,0,0,116,34,
  	1,0,0,0,117,118,5,62,0,0,118,36,1,0,0,0,119,120,5,60,0,0,120,38,1,0,0,
  	0,121,122,5,61,0,0,122,123,5,61,0,0,123,40,1,0,0,0,124,125,5,33,0,0,125,
  	126,5,61,0,0,126,42,1,0,0,0,127,128,5,2486,0,0,128,129,5,2497,0,0,129,
  	130,5,2480,0,0,130,131,5,2497,0,0,131,44,1,0,0,0,132,133,5,2486,0,0,133,
  	134,5,2503,0,0,134,135,5,2487,0,0,135,46,1,0,0,0,136,137,5,2471,0,0,137,
  	138,5,2480,0,0,138,139,5,2495,0,0,139,48,1,0,0,0,140,141,5,2470,0,0,141,
  	142,5,2503,0,0,142,143,5,2454,0,0,143,144,5,2494,0,0,144,145,5,2451,0,
  	0,145,50,1,0,0,0,146,147,5,2472,0,0,147,148,5,2468,0,0,148,149,5,2497,
  	0,0,149,150,5,2472,0,0,150,151,5,95,0,0,151,152,5,2482,0,0,152,153,5,
  	2494,0,0,153,154,5,2439,0,0,154,155,5,2472,0,0,155,52,1,0,0,0,156,157,
  	5,2479,0,0,157,158,5,2470,0,0,158,159,5,2495,0,0,159,54,1,0,0,0,160,161,
  	5,2468,0,0,161,162,5,2494,0,0,162,163,5,2472,0,0,163,164,5,2494,0,0,164,
  	165,5,2489,0,0,165,166,5,2482,0,0,166,167,5,2503,0,0,167,168,5,32,0,0,
  	168,169,5,2479,0,0,169,170,5,2470,0,0,170,171,5,2495,0,0,171,56,1,0,0,
  	0,172,173,5,2468,0,0,173,174,5,2494,0,0,174,175,5,2472,0,0,175,176,5,
  	2494,0,0,176,177,5,2489,0,0,177,178,5,2482,0,0,178,179,5,2503,0,0,179,
  	58,1,0,0,0,180,181,5,2479,0,0,181,182,5,2468,0,0,182,183,5,2453,0,0,183,
  	184,5,2509,0,0,184,185,5,2487,0,0,185,186,5,2467,0,0,186,60,1,0,0,0,187,
  	191,3,63,31,0,188,190,3,65,32,0,189,188,1,0,0,0,190,193,1,0,0,0,191,189,
  	1,0,0,0,191,192,1,0,0,0,192,62,1,0,0,0,193,191,1,0,0,0,194,195,7,0,0,
  	0,195,64,1,0,0,0,196,197,7,1,0,0,197,66,1,0,0,0,198,200,7,2,0,0,199,198,
  	1,0,0,0,200,201,1,0,0,0,201,199,1,0,0,0,201,202,1,0,0,0,202,203,1,0,0,
  	0,203,205,5,46,0,0,204,206,7,2,0,0,205,204,1,0,0,0,206,207,1,0,0,0,207,
  	205,1,0,0,0,207,208,1,0,0,0,208,68,1,0,0,0,209,211,7,2,0,0,210,209,1,
  	0,0,0,211,212,1,0,0,0,212,210,1,0,0,0,212,213,1,0,0,0,213,70,1,0,0,0,
  	214,218,5,34,0,0,215,217,9,0,0,0,216,215,1,0,0,0,217,220,1,0,0,0,218,
  	219,1,0,0,0,218,216,1,0,0,0,219,221,1,0,0,0,220,218,1,0,0,0,221,222,5,
  	34,0,0,222,72,1,0,0,0,223,224,5,47,0,0,224,225,5,47,0,0,225,229,1,0,0,
  	0,226,228,8,3,0,0,227,226,1,0,0,0,228,231,1,0,0,0,229,227,1,0,0,0,229,
  	230,1,0,0,0,230,232,1,0,0,0,231,229,1,0,0,0,232,233,6,36,0,0,233,74,1,
  	0,0,0,234,235,5,47,0,0,235,236,5,42,0,0,236,240,1,0,0,0,237,239,9,0,0,
  	0,238,237,1,0,0,0,239,242,1,0,0,0,240,241,1,0,0,0,240,238,1,0,0,0,241,
  	243,1,0,0,0,242,240,1,0,0,0,243,244,5,42,0,0,244,245,5,47,0,0,245,246,
  	1,0,0,0,246,247,6,37,0,0,247,76,1,0,0,0,248,250,7,4,0,0,249,248,1,0,0,
  	0,250,251,1,0,0,0,251,249,1,0,0,0,251,252,1,0,0,0,252,253,1,0,0,0,253,
  	254,6,38,0,0,254,78,1,0,0,0,9,0,191,201,207,212,218,229,240,251,1,6,0,
  	0
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
