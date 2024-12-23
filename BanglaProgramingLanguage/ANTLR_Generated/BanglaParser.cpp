
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
      "printStatement", "printArguments", "fileOperations", "fileDeclaration", 
      "fileAssignment", "fileRead", "fileWrite", "fileClose", "ifStatement", 
      "forStatement", "condition", "expression", "operand", "comparisonOperator"
    },
    std::vector<std::string>{
      "", "'{'", "'}'", "';'", "'='", "'['", "']'", "','", "'.\\u09B8\\u0982\\u0996\\u09CD\\u09AF\\u09BE()'", 
      "'++'", "'--'", "'('", "')'", "'*'", "'/'", "'+'", "'-'", "'>='", 
      "'<='", "'>'", "'<'", "'=='", "'!='", "'\\u09B6\\u09C1\\u09B0\\u09C1'", 
      "'\\u09B6\\u09C7\\u09B7'", "'\\u09A7\\u09B0\\u09BF'", "'\\u09A6\\u09C7\\u0996\\u09BE\\u0993'", 
      "'\\u09A8\\u09A4\\u09C1\\u09A8_\\u09B2\\u09BE\\u0987\\u09A8'", "'\\u09AF\\u09A6\\u09BF'", 
      "'\\u09A4\\u09BE\\u09A8\\u09BE\\u09B9\\u09B2\\u09C7 \\u09AF\\u09A6\\u09BF'", 
      "'\\u09A4\\u09BE\\u09A8\\u09BE\\u09B9\\u09B2\\u09C7'", "'\\u09AF\\u09A4\\u0995\\u09CD\\u09B7\\u09A3'", 
      "'\\u09AB\\u09BE\\u0987\\u09B2'", "'\\u0996\\u09C1\\u09B2\\u09CB'", 
      "'\\u09AC\\u09A8\\u09CD\\u09A7'", "'\\u09AA\\u09DC\\u09CB'", "'\\u09B2\\u09C7\\u0996\\u09CB'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "SHURU", "SHESH", "DHORI", "DEKHAO", "NATUN_LINE", 
      "IF", "ELSE_IF", "ELSE", "FOR", "FILE", "FILE_OPEN", "FILE_CLOSE", 
      "FILE_READ", "FILE_WRITE", "ID", "FLOAT", "INT", "STRING", "LINE_COMMENT", 
      "BLOCK_COMMENT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,43,333,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,1,0,1,0,1,0,1,0,
  	1,1,1,1,5,1,61,8,1,10,1,12,1,64,9,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,84,8,2,1,3,1,3,1,3,1,3,3,3,
  	90,8,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,5,4,111,8,4,10,4,12,4,114,9,4,3,4,116,8,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,128,8,4,10,4,12,4,131,9,4,3,4,133,8,4,1,
  	4,1,4,3,4,137,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,7,
  	1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,1,12,
  	1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,3,14,
  	181,8,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,189,8,14,5,14,191,8,14,10,
  	14,12,14,194,9,14,1,14,1,14,3,14,198,8,14,1,15,1,15,1,15,1,15,1,15,3,
  	15,205,8,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,3,16,216,8,16,
  	1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,
  	1,20,1,20,1,20,1,20,1,20,5,20,251,8,20,10,20,12,20,254,9,20,1,20,1,20,
  	1,20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,5,21,270,
  	8,21,10,21,12,21,273,9,21,1,21,1,21,3,21,277,8,21,1,22,1,22,1,22,1,22,
  	1,22,3,22,284,8,22,1,22,1,22,1,22,1,22,1,22,3,22,291,8,22,1,22,1,22,1,
  	22,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,
  	24,1,24,3,24,311,8,24,1,24,1,24,1,24,1,24,1,24,1,24,5,24,319,8,24,10,
  	24,12,24,322,9,24,1,25,1,25,1,25,1,25,1,25,3,25,329,8,25,1,26,1,26,1,
  	26,0,1,48,27,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,
  	42,44,46,48,50,52,0,5,2,0,37,37,39,39,1,0,35,36,1,0,13,14,1,0,15,16,1,
  	0,17,22,358,0,54,1,0,0,0,2,58,1,0,0,0,4,83,1,0,0,0,6,85,1,0,0,0,8,136,
  	1,0,0,0,10,138,1,0,0,0,12,146,1,0,0,0,14,148,1,0,0,0,16,153,1,0,0,0,18,
  	156,1,0,0,0,20,160,1,0,0,0,22,163,1,0,0,0,24,166,1,0,0,0,26,169,1,0,0,
  	0,28,180,1,0,0,0,30,204,1,0,0,0,32,206,1,0,0,0,34,219,1,0,0,0,36,229,
  	1,0,0,0,38,237,1,0,0,0,40,245,1,0,0,0,42,258,1,0,0,0,44,278,1,0,0,0,46,
  	295,1,0,0,0,48,310,1,0,0,0,50,328,1,0,0,0,52,330,1,0,0,0,54,55,5,23,0,
  	0,55,56,3,2,1,0,56,57,5,24,0,0,57,1,1,0,0,0,58,62,5,1,0,0,59,61,3,4,2,
  	0,60,59,1,0,0,0,61,64,1,0,0,0,62,60,1,0,0,0,62,63,1,0,0,0,63,65,1,0,0,
  	0,64,62,1,0,0,0,65,66,5,2,0,0,66,3,1,0,0,0,67,84,3,6,3,0,68,84,3,8,4,
  	0,69,84,3,10,5,0,70,71,3,18,9,0,71,72,5,3,0,0,72,84,1,0,0,0,73,74,3,22,
  	11,0,74,75,5,3,0,0,75,84,1,0,0,0,76,77,3,24,12,0,77,78,5,3,0,0,78,84,
  	1,0,0,0,79,84,3,26,13,0,80,84,3,30,15,0,81,84,3,42,21,0,82,84,3,44,22,
  	0,83,67,1,0,0,0,83,68,1,0,0,0,83,69,1,0,0,0,83,70,1,0,0,0,83,73,1,0,0,
  	0,83,76,1,0,0,0,83,79,1,0,0,0,83,80,1,0,0,0,83,81,1,0,0,0,83,82,1,0,0,
  	0,84,5,1,0,0,0,85,86,5,25,0,0,86,89,5,37,0,0,87,88,5,4,0,0,88,90,3,48,
  	24,0,89,87,1,0,0,0,89,90,1,0,0,0,90,91,1,0,0,0,91,92,5,3,0,0,92,7,1,0,
  	0,0,93,94,5,25,0,0,94,95,5,37,0,0,95,96,5,5,0,0,96,97,3,12,6,0,97,98,
  	5,6,0,0,98,99,5,3,0,0,99,137,1,0,0,0,100,101,5,25,0,0,101,102,5,37,0,
  	0,102,103,5,5,0,0,103,104,3,12,6,0,104,105,5,6,0,0,105,106,5,4,0,0,106,
  	115,5,5,0,0,107,112,3,48,24,0,108,109,5,7,0,0,109,111,3,48,24,0,110,108,
  	1,0,0,0,111,114,1,0,0,0,112,110,1,0,0,0,112,113,1,0,0,0,113,116,1,0,0,
  	0,114,112,1,0,0,0,115,107,1,0,0,0,115,116,1,0,0,0,116,117,1,0,0,0,117,
  	118,5,6,0,0,118,119,5,3,0,0,119,137,1,0,0,0,120,121,5,25,0,0,121,122,
  	5,37,0,0,122,123,5,4,0,0,123,132,5,5,0,0,124,129,3,48,24,0,125,126,5,
  	7,0,0,126,128,3,48,24,0,127,125,1,0,0,0,128,131,1,0,0,0,129,127,1,0,0,
  	0,129,130,1,0,0,0,130,133,1,0,0,0,131,129,1,0,0,0,132,124,1,0,0,0,132,
  	133,1,0,0,0,133,134,1,0,0,0,134,135,5,6,0,0,135,137,5,3,0,0,136,93,1,
  	0,0,0,136,100,1,0,0,0,136,120,1,0,0,0,137,9,1,0,0,0,138,139,5,37,0,0,
  	139,140,5,5,0,0,140,141,3,12,6,0,141,142,5,6,0,0,142,143,5,4,0,0,143,
  	144,3,48,24,0,144,145,5,3,0,0,145,11,1,0,0,0,146,147,7,0,0,0,147,13,1,
  	0,0,0,148,149,5,37,0,0,149,150,5,5,0,0,150,151,3,12,6,0,151,152,5,6,0,
  	0,152,15,1,0,0,0,153,154,5,37,0,0,154,155,5,8,0,0,155,17,1,0,0,0,156,
  	157,5,37,0,0,157,158,5,4,0,0,158,159,3,48,24,0,159,19,1,0,0,0,160,161,
  	3,18,9,0,161,162,5,3,0,0,162,21,1,0,0,0,163,164,5,37,0,0,164,165,5,9,
  	0,0,165,23,1,0,0,0,166,167,5,37,0,0,167,168,5,10,0,0,168,25,1,0,0,0,169,
  	170,5,26,0,0,170,171,5,11,0,0,171,172,3,28,14,0,172,173,5,12,0,0,173,
  	174,5,3,0,0,174,27,1,0,0,0,175,181,5,37,0,0,176,181,5,40,0,0,177,181,
  	5,27,0,0,178,181,3,14,7,0,179,181,3,16,8,0,180,175,1,0,0,0,180,176,1,
  	0,0,0,180,177,1,0,0,0,180,178,1,0,0,0,180,179,1,0,0,0,181,192,1,0,0,0,
  	182,188,5,7,0,0,183,189,5,37,0,0,184,189,5,40,0,0,185,189,5,27,0,0,186,
  	189,3,14,7,0,187,189,3,16,8,0,188,183,1,0,0,0,188,184,1,0,0,0,188,185,
  	1,0,0,0,188,186,1,0,0,0,188,187,1,0,0,0,189,191,1,0,0,0,190,182,1,0,0,
  	0,191,194,1,0,0,0,192,190,1,0,0,0,192,193,1,0,0,0,193,197,1,0,0,0,194,
  	192,1,0,0,0,195,196,5,7,0,0,196,198,5,27,0,0,197,195,1,0,0,0,197,198,
  	1,0,0,0,198,29,1,0,0,0,199,205,3,32,16,0,200,205,3,34,17,0,201,205,3,
  	36,18,0,202,205,3,38,19,0,203,205,3,40,20,0,204,199,1,0,0,0,204,200,1,
  	0,0,0,204,201,1,0,0,0,204,202,1,0,0,0,204,203,1,0,0,0,205,31,1,0,0,0,
  	206,207,5,32,0,0,207,215,5,37,0,0,208,209,5,4,0,0,209,210,5,33,0,0,210,
  	211,5,11,0,0,211,212,5,40,0,0,212,213,5,7,0,0,213,214,7,1,0,0,214,216,
  	5,12,0,0,215,208,1,0,0,0,215,216,1,0,0,0,216,217,1,0,0,0,217,218,5,3,
  	0,0,218,33,1,0,0,0,219,220,5,37,0,0,220,221,5,4,0,0,221,222,5,33,0,0,
  	222,223,5,11,0,0,223,224,5,40,0,0,224,225,5,7,0,0,225,226,7,1,0,0,226,
  	227,5,12,0,0,227,228,5,3,0,0,228,35,1,0,0,0,229,230,5,37,0,0,230,231,
  	5,4,0,0,231,232,5,35,0,0,232,233,5,11,0,0,233,234,5,37,0,0,234,235,5,
  	12,0,0,235,236,5,3,0,0,236,37,1,0,0,0,237,238,5,36,0,0,238,239,5,11,0,
  	0,239,240,5,37,0,0,240,241,5,7,0,0,241,242,3,28,14,0,242,243,5,12,0,0,
  	243,244,5,3,0,0,244,39,1,0,0,0,245,246,5,34,0,0,246,247,5,11,0,0,247,
  	252,5,37,0,0,248,249,5,7,0,0,249,251,5,37,0,0,250,248,1,0,0,0,251,254,
  	1,0,0,0,252,250,1,0,0,0,252,253,1,0,0,0,253,255,1,0,0,0,254,252,1,0,0,
  	0,255,256,5,12,0,0,256,257,5,3,0,0,257,41,1,0,0,0,258,259,5,28,0,0,259,
  	260,5,11,0,0,260,261,3,46,23,0,261,262,5,12,0,0,262,271,3,2,1,0,263,264,
  	5,29,0,0,264,265,5,11,0,0,265,266,3,46,23,0,266,267,5,12,0,0,267,268,
  	3,2,1,0,268,270,1,0,0,0,269,263,1,0,0,0,270,273,1,0,0,0,271,269,1,0,0,
  	0,271,272,1,0,0,0,272,276,1,0,0,0,273,271,1,0,0,0,274,275,5,30,0,0,275,
  	277,3,2,1,0,276,274,1,0,0,0,276,277,1,0,0,0,277,43,1,0,0,0,278,279,5,
  	31,0,0,279,283,5,11,0,0,280,284,3,6,3,0,281,284,3,20,10,0,282,284,5,3,
  	0,0,283,280,1,0,0,0,283,281,1,0,0,0,283,282,1,0,0,0,283,284,1,0,0,0,284,
  	285,1,0,0,0,285,286,3,46,23,0,286,290,5,3,0,0,287,291,3,18,9,0,288,291,
  	3,22,11,0,289,291,3,24,12,0,290,287,1,0,0,0,290,288,1,0,0,0,290,289,1,
  	0,0,0,290,291,1,0,0,0,291,292,1,0,0,0,292,293,5,12,0,0,293,294,3,2,1,
  	0,294,45,1,0,0,0,295,296,3,50,25,0,296,297,3,52,26,0,297,298,3,50,25,
  	0,298,47,1,0,0,0,299,300,6,24,-1,0,300,311,5,39,0,0,301,311,5,38,0,0,
  	302,311,5,40,0,0,303,311,5,37,0,0,304,311,3,14,7,0,305,311,3,16,8,0,306,
  	307,5,11,0,0,307,308,3,48,24,0,308,309,5,12,0,0,309,311,1,0,0,0,310,299,
  	1,0,0,0,310,301,1,0,0,0,310,302,1,0,0,0,310,303,1,0,0,0,310,304,1,0,0,
  	0,310,305,1,0,0,0,310,306,1,0,0,0,311,320,1,0,0,0,312,313,10,9,0,0,313,
  	314,7,2,0,0,314,319,3,48,24,10,315,316,10,8,0,0,316,317,7,3,0,0,317,319,
  	3,48,24,9,318,312,1,0,0,0,318,315,1,0,0,0,319,322,1,0,0,0,320,318,1,0,
  	0,0,320,321,1,0,0,0,321,49,1,0,0,0,322,320,1,0,0,0,323,329,5,39,0,0,324,
  	329,5,38,0,0,325,329,5,37,0,0,326,329,3,14,7,0,327,329,3,16,8,0,328,323,
  	1,0,0,0,328,324,1,0,0,0,328,325,1,0,0,0,328,326,1,0,0,0,328,327,1,0,0,
  	0,329,51,1,0,0,0,330,331,7,4,0,0,331,53,1,0,0,0,23,62,83,89,112,115,129,
  	132,136,180,188,192,197,204,215,252,271,276,283,290,310,318,320,328
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
    setState(54);
    match(BanglaParser::SHURU);
    setState(55);
    block();
    setState(56);
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
    setState(58);
    match(BanglaParser::T__0);
    setState(62);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 230149849088) != 0)) {
      setState(59);
      statement();
      setState(64);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(65);
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

BanglaParser::FileOperationsContext* BanglaParser::StatementContext::fileOperations() {
  return getRuleContext<BanglaParser::FileOperationsContext>(0);
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
    setState(83);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(67);
      variableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(68);
      arrayDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(69);
      arrayElementAssignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(70);
      assignmentStatement();
      setState(71);
      match(BanglaParser::T__2);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(73);
      incrementStatement();
      setState(74);
      match(BanglaParser::T__2);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(76);
      decrementStatement();
      setState(77);
      match(BanglaParser::T__2);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(79);
      printStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(80);
      fileOperations();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(81);
      ifStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(82);
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
    setState(85);
    match(BanglaParser::DHORI);
    setState(86);
    match(BanglaParser::ID);
    setState(89);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BanglaParser::T__3) {
      setState(87);
      match(BanglaParser::T__3);
      setState(88);
      expression(0);
    }
    setState(91);
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
    setState(136);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(93);
      match(BanglaParser::DHORI);
      setState(94);
      match(BanglaParser::ID);
      setState(95);
      match(BanglaParser::T__4);
      setState(96);
      arrayIndex();
      setState(97);
      match(BanglaParser::T__5);
      setState(98);
      match(BanglaParser::T__2);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(100);
      match(BanglaParser::DHORI);
      setState(101);
      match(BanglaParser::ID);
      setState(102);
      match(BanglaParser::T__4);
      setState(103);
      arrayIndex();
      setState(104);
      match(BanglaParser::T__5);
      setState(105);
      match(BanglaParser::T__3);
      setState(106);
      match(BanglaParser::T__4);
      setState(115);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 2061584304128) != 0)) {
        setState(107);
        expression(0);
        setState(112);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == BanglaParser::T__6) {
          setState(108);
          match(BanglaParser::T__6);
          setState(109);
          expression(0);
          setState(114);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(117);
      match(BanglaParser::T__5);
      setState(118);
      match(BanglaParser::T__2);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(120);
      match(BanglaParser::DHORI);
      setState(121);
      match(BanglaParser::ID);
      setState(122);
      match(BanglaParser::T__3);
      setState(123);
      match(BanglaParser::T__4);
      setState(132);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 2061584304128) != 0)) {
        setState(124);
        expression(0);
        setState(129);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == BanglaParser::T__6) {
          setState(125);
          match(BanglaParser::T__6);
          setState(126);
          expression(0);
          setState(131);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(134);
      match(BanglaParser::T__5);
      setState(135);
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
    setState(138);
    match(BanglaParser::ID);
    setState(139);
    match(BanglaParser::T__4);
    setState(140);
    arrayIndex();
    setState(141);
    match(BanglaParser::T__5);
    setState(142);
    match(BanglaParser::T__3);
    setState(143);
    expression(0);
    setState(144);
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
    setState(146);
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
    setState(148);
    match(BanglaParser::ID);
    setState(149);
    match(BanglaParser::T__4);
    setState(150);
    arrayIndex();
    setState(151);
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
    setState(153);
    match(BanglaParser::ID);
    setState(154);
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
    setState(156);
    match(BanglaParser::ID);
    setState(157);
    match(BanglaParser::T__3);
    setState(158);
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
    setState(160);
    assignmentStatement();
    setState(161);
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
    setState(163);
    match(BanglaParser::ID);
    setState(164);
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
    setState(166);
    match(BanglaParser::ID);
    setState(167);
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
    setState(169);
    match(BanglaParser::DEKHAO);
    setState(170);
    match(BanglaParser::T__10);
    setState(171);
    printArguments();
    setState(172);
    match(BanglaParser::T__11);
    setState(173);
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
    setState(180);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(175);
      match(BanglaParser::ID);
      break;
    }

    case 2: {
      setState(176);
      match(BanglaParser::STRING);
      break;
    }

    case 3: {
      setState(177);
      match(BanglaParser::NATUN_LINE);
      break;
    }

    case 4: {
      setState(178);
      arrayElementAccess();
      break;
    }

    case 5: {
      setState(179);
      arraySizeAccess();
      break;
    }

    default:
      break;
    }
    setState(192);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(182);
        match(BanglaParser::T__6);
        setState(188);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          setState(183);
          match(BanglaParser::ID);
          break;
        }

        case 2: {
          setState(184);
          match(BanglaParser::STRING);
          break;
        }

        case 3: {
          setState(185);
          match(BanglaParser::NATUN_LINE);
          break;
        }

        case 4: {
          setState(186);
          arrayElementAccess();
          break;
        }

        case 5: {
          setState(187);
          arraySizeAccess();
          break;
        }

        default:
          break;
        } 
      }
      setState(194);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(197);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BanglaParser::T__6) {
      setState(195);
      match(BanglaParser::T__6);
      setState(196);
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

//----------------- FileOperationsContext ------------------------------------------------------------------

BanglaParser::FileOperationsContext::FileOperationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BanglaParser::FileDeclarationContext* BanglaParser::FileOperationsContext::fileDeclaration() {
  return getRuleContext<BanglaParser::FileDeclarationContext>(0);
}

BanglaParser::FileAssignmentContext* BanglaParser::FileOperationsContext::fileAssignment() {
  return getRuleContext<BanglaParser::FileAssignmentContext>(0);
}

BanglaParser::FileReadContext* BanglaParser::FileOperationsContext::fileRead() {
  return getRuleContext<BanglaParser::FileReadContext>(0);
}

BanglaParser::FileWriteContext* BanglaParser::FileOperationsContext::fileWrite() {
  return getRuleContext<BanglaParser::FileWriteContext>(0);
}

BanglaParser::FileCloseContext* BanglaParser::FileOperationsContext::fileClose() {
  return getRuleContext<BanglaParser::FileCloseContext>(0);
}


size_t BanglaParser::FileOperationsContext::getRuleIndex() const {
  return BanglaParser::RuleFileOperations;
}

void BanglaParser::FileOperationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFileOperations(this);
}

void BanglaParser::FileOperationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFileOperations(this);
}

BanglaParser::FileOperationsContext* BanglaParser::fileOperations() {
  FileOperationsContext *_localctx = _tracker.createInstance<FileOperationsContext>(_ctx, getState());
  enterRule(_localctx, 30, BanglaParser::RuleFileOperations);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(204);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(199);
      fileDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(200);
      fileAssignment();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(201);
      fileRead();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(202);
      fileWrite();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(203);
      fileClose();
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

//----------------- FileDeclarationContext ------------------------------------------------------------------

BanglaParser::FileDeclarationContext::FileDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::FileDeclarationContext::FILE() {
  return getToken(BanglaParser::FILE, 0);
}

tree::TerminalNode* BanglaParser::FileDeclarationContext::ID() {
  return getToken(BanglaParser::ID, 0);
}

tree::TerminalNode* BanglaParser::FileDeclarationContext::FILE_OPEN() {
  return getToken(BanglaParser::FILE_OPEN, 0);
}

tree::TerminalNode* BanglaParser::FileDeclarationContext::STRING() {
  return getToken(BanglaParser::STRING, 0);
}

tree::TerminalNode* BanglaParser::FileDeclarationContext::FILE_READ() {
  return getToken(BanglaParser::FILE_READ, 0);
}

tree::TerminalNode* BanglaParser::FileDeclarationContext::FILE_WRITE() {
  return getToken(BanglaParser::FILE_WRITE, 0);
}


size_t BanglaParser::FileDeclarationContext::getRuleIndex() const {
  return BanglaParser::RuleFileDeclaration;
}

void BanglaParser::FileDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFileDeclaration(this);
}

void BanglaParser::FileDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFileDeclaration(this);
}

BanglaParser::FileDeclarationContext* BanglaParser::fileDeclaration() {
  FileDeclarationContext *_localctx = _tracker.createInstance<FileDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 32, BanglaParser::RuleFileDeclaration);
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
    setState(206);
    match(BanglaParser::FILE);
    setState(207);
    match(BanglaParser::ID);
    setState(215);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BanglaParser::T__3) {
      setState(208);
      match(BanglaParser::T__3);
      setState(209);
      match(BanglaParser::FILE_OPEN);
      setState(210);
      match(BanglaParser::T__10);
      setState(211);
      match(BanglaParser::STRING);
      setState(212);
      match(BanglaParser::T__6);
      setState(213);
      _la = _input->LA(1);
      if (!(_la == BanglaParser::FILE_READ

      || _la == BanglaParser::FILE_WRITE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(214);
      match(BanglaParser::T__11);
    }
    setState(217);
    match(BanglaParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FileAssignmentContext ------------------------------------------------------------------

BanglaParser::FileAssignmentContext::FileAssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::FileAssignmentContext::ID() {
  return getToken(BanglaParser::ID, 0);
}

tree::TerminalNode* BanglaParser::FileAssignmentContext::FILE_OPEN() {
  return getToken(BanglaParser::FILE_OPEN, 0);
}

tree::TerminalNode* BanglaParser::FileAssignmentContext::STRING() {
  return getToken(BanglaParser::STRING, 0);
}

tree::TerminalNode* BanglaParser::FileAssignmentContext::FILE_READ() {
  return getToken(BanglaParser::FILE_READ, 0);
}

tree::TerminalNode* BanglaParser::FileAssignmentContext::FILE_WRITE() {
  return getToken(BanglaParser::FILE_WRITE, 0);
}


size_t BanglaParser::FileAssignmentContext::getRuleIndex() const {
  return BanglaParser::RuleFileAssignment;
}

void BanglaParser::FileAssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFileAssignment(this);
}

void BanglaParser::FileAssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFileAssignment(this);
}

BanglaParser::FileAssignmentContext* BanglaParser::fileAssignment() {
  FileAssignmentContext *_localctx = _tracker.createInstance<FileAssignmentContext>(_ctx, getState());
  enterRule(_localctx, 34, BanglaParser::RuleFileAssignment);
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
    setState(219);
    match(BanglaParser::ID);
    setState(220);
    match(BanglaParser::T__3);
    setState(221);
    match(BanglaParser::FILE_OPEN);
    setState(222);
    match(BanglaParser::T__10);
    setState(223);
    match(BanglaParser::STRING);
    setState(224);
    match(BanglaParser::T__6);
    setState(225);
    _la = _input->LA(1);
    if (!(_la == BanglaParser::FILE_READ

    || _la == BanglaParser::FILE_WRITE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(226);
    match(BanglaParser::T__11);
    setState(227);
    match(BanglaParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FileReadContext ------------------------------------------------------------------

BanglaParser::FileReadContext::FileReadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BanglaParser::FileReadContext::ID() {
  return getTokens(BanglaParser::ID);
}

tree::TerminalNode* BanglaParser::FileReadContext::ID(size_t i) {
  return getToken(BanglaParser::ID, i);
}

tree::TerminalNode* BanglaParser::FileReadContext::FILE_READ() {
  return getToken(BanglaParser::FILE_READ, 0);
}


size_t BanglaParser::FileReadContext::getRuleIndex() const {
  return BanglaParser::RuleFileRead;
}

void BanglaParser::FileReadContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFileRead(this);
}

void BanglaParser::FileReadContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFileRead(this);
}

BanglaParser::FileReadContext* BanglaParser::fileRead() {
  FileReadContext *_localctx = _tracker.createInstance<FileReadContext>(_ctx, getState());
  enterRule(_localctx, 36, BanglaParser::RuleFileRead);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    match(BanglaParser::ID);
    setState(230);
    match(BanglaParser::T__3);
    setState(231);
    match(BanglaParser::FILE_READ);
    setState(232);
    match(BanglaParser::T__10);
    setState(233);
    match(BanglaParser::ID);
    setState(234);
    match(BanglaParser::T__11);
    setState(235);
    match(BanglaParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FileWriteContext ------------------------------------------------------------------

BanglaParser::FileWriteContext::FileWriteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::FileWriteContext::FILE_WRITE() {
  return getToken(BanglaParser::FILE_WRITE, 0);
}

tree::TerminalNode* BanglaParser::FileWriteContext::ID() {
  return getToken(BanglaParser::ID, 0);
}

BanglaParser::PrintArgumentsContext* BanglaParser::FileWriteContext::printArguments() {
  return getRuleContext<BanglaParser::PrintArgumentsContext>(0);
}


size_t BanglaParser::FileWriteContext::getRuleIndex() const {
  return BanglaParser::RuleFileWrite;
}

void BanglaParser::FileWriteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFileWrite(this);
}

void BanglaParser::FileWriteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFileWrite(this);
}

BanglaParser::FileWriteContext* BanglaParser::fileWrite() {
  FileWriteContext *_localctx = _tracker.createInstance<FileWriteContext>(_ctx, getState());
  enterRule(_localctx, 38, BanglaParser::RuleFileWrite);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
    match(BanglaParser::FILE_WRITE);
    setState(238);
    match(BanglaParser::T__10);
    setState(239);
    match(BanglaParser::ID);
    setState(240);
    match(BanglaParser::T__6);
    setState(241);
    printArguments();
    setState(242);
    match(BanglaParser::T__11);
    setState(243);
    match(BanglaParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FileCloseContext ------------------------------------------------------------------

BanglaParser::FileCloseContext::FileCloseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BanglaParser::FileCloseContext::FILE_CLOSE() {
  return getToken(BanglaParser::FILE_CLOSE, 0);
}

std::vector<tree::TerminalNode *> BanglaParser::FileCloseContext::ID() {
  return getTokens(BanglaParser::ID);
}

tree::TerminalNode* BanglaParser::FileCloseContext::ID(size_t i) {
  return getToken(BanglaParser::ID, i);
}


size_t BanglaParser::FileCloseContext::getRuleIndex() const {
  return BanglaParser::RuleFileClose;
}

void BanglaParser::FileCloseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFileClose(this);
}

void BanglaParser::FileCloseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BanglaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFileClose(this);
}

BanglaParser::FileCloseContext* BanglaParser::fileClose() {
  FileCloseContext *_localctx = _tracker.createInstance<FileCloseContext>(_ctx, getState());
  enterRule(_localctx, 40, BanglaParser::RuleFileClose);
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
    setState(245);
    match(BanglaParser::FILE_CLOSE);
    setState(246);
    match(BanglaParser::T__10);
    setState(247);
    match(BanglaParser::ID);
    setState(252);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BanglaParser::T__6) {
      setState(248);
      match(BanglaParser::T__6);
      setState(249);
      match(BanglaParser::ID);
      setState(254);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(255);
    match(BanglaParser::T__11);
    setState(256);
    match(BanglaParser::T__2);
   
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
  enterRule(_localctx, 42, BanglaParser::RuleIfStatement);
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
    match(BanglaParser::IF);
    setState(259);
    match(BanglaParser::T__10);
    setState(260);
    condition();
    setState(261);
    match(BanglaParser::T__11);
    setState(262);
    block();
    setState(271);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BanglaParser::ELSE_IF) {
      setState(263);
      match(BanglaParser::ELSE_IF);
      setState(264);
      match(BanglaParser::T__10);
      setState(265);
      condition();
      setState(266);
      match(BanglaParser::T__11);
      setState(267);
      block();
      setState(273);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(276);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BanglaParser::ELSE) {
      setState(274);
      match(BanglaParser::ELSE);
      setState(275);
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
  enterRule(_localctx, 44, BanglaParser::RuleForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(278);
    match(BanglaParser::FOR);
    setState(279);
    match(BanglaParser::T__10);
    setState(283);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(280);
      variableDeclaration();
      break;
    }

    case 2: {
      setState(281);
      initialization();
      break;
    }

    case 3: {
      setState(282);
      match(BanglaParser::T__2);
      break;
    }

    default:
      break;
    }
    setState(285);
    condition();
    setState(286);
    match(BanglaParser::T__2);
    setState(290);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(287);
      assignmentStatement();
      break;
    }

    case 2: {
      setState(288);
      incrementStatement();
      break;
    }

    case 3: {
      setState(289);
      decrementStatement();
      break;
    }

    default:
      break;
    }
    setState(292);
    match(BanglaParser::T__11);
    setState(293);
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
  enterRule(_localctx, 46, BanglaParser::RuleCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(295);
    operand();
    setState(296);
    comparisonOperator();
    setState(297);
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
  size_t startState = 48;
  enterRecursionRule(_localctx, 48, BanglaParser::RuleExpression, precedence);

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
    setState(310);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(300);
      match(BanglaParser::INT);
      break;
    }

    case 2: {
      setState(301);
      match(BanglaParser::FLOAT);
      break;
    }

    case 3: {
      setState(302);
      match(BanglaParser::STRING);
      break;
    }

    case 4: {
      setState(303);
      match(BanglaParser::ID);
      break;
    }

    case 5: {
      setState(304);
      arrayElementAccess();
      break;
    }

    case 6: {
      setState(305);
      arraySizeAccess();
      break;
    }

    case 7: {
      setState(306);
      match(BanglaParser::T__10);
      setState(307);
      expression(0);
      setState(308);
      match(BanglaParser::T__11);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(320);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(318);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(312);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(313);
          _la = _input->LA(1);
          if (!(_la == BanglaParser::T__12

          || _la == BanglaParser::T__13)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(314);
          expression(10);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(315);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(316);
          _la = _input->LA(1);
          if (!(_la == BanglaParser::T__14

          || _la == BanglaParser::T__15)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(317);
          expression(9);
          break;
        }

        default:
          break;
        } 
      }
      setState(322);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
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
  enterRule(_localctx, 50, BanglaParser::RuleOperand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(328);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(323);
      match(BanglaParser::INT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(324);
      match(BanglaParser::FLOAT);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(325);
      match(BanglaParser::ID);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(326);
      arrayElementAccess();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(327);
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
  enterRule(_localctx, 52, BanglaParser::RuleComparisonOperator);
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
    setState(330);
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
    case 24: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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
