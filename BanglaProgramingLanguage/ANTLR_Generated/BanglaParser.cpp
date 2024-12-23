
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
      "printStatement", "printArguments", "fileDeclaration", "fileAssignment", 
      "fileRead", "fileWrite", "fileClose", "ifStatement", "forStatement", 
      "condition", "expression", "operand", "comparisonOperator"
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
  	4,1,43,328,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,1,0,1,0,1,0,1,0,1,1,1,1,5,
  	1,59,8,1,10,1,12,1,62,9,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,86,8,2,1,3,1,3,1,3,1,
  	3,3,3,92,8,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,5,4,113,8,4,10,4,12,4,116,9,4,3,4,118,8,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,130,8,4,10,4,12,4,133,9,4,3,4,135,
  	8,4,1,4,1,4,3,4,139,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,7,1,
  	7,1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,
  	11,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,
  	14,3,14,183,8,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,191,8,14,5,14,193,
  	8,14,10,14,12,14,196,9,14,1,14,1,14,3,14,200,8,14,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,3,15,211,8,15,1,15,1,15,1,16,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,5,19,
  	246,8,19,10,19,12,19,249,9,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,5,20,265,8,20,10,20,12,20,268,9,20,1,20,
  	1,20,3,20,272,8,20,1,21,1,21,1,21,1,21,1,21,3,21,279,8,21,1,21,1,21,1,
  	21,1,21,1,21,3,21,286,8,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,23,1,
  	23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,3,23,306,8,23,1,23,1,
  	23,1,23,1,23,1,23,1,23,5,23,314,8,23,10,23,12,23,317,9,23,1,24,1,24,1,
  	24,1,24,1,24,3,24,324,8,24,1,25,1,25,1,25,0,1,46,26,0,2,4,6,8,10,12,14,
  	16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,0,5,2,0,37,37,39,
  	39,1,0,35,36,1,0,13,14,1,0,15,16,1,0,17,22,354,0,52,1,0,0,0,2,56,1,0,
  	0,0,4,85,1,0,0,0,6,87,1,0,0,0,8,138,1,0,0,0,10,140,1,0,0,0,12,148,1,0,
  	0,0,14,150,1,0,0,0,16,155,1,0,0,0,18,158,1,0,0,0,20,162,1,0,0,0,22,165,
  	1,0,0,0,24,168,1,0,0,0,26,171,1,0,0,0,28,182,1,0,0,0,30,201,1,0,0,0,32,
  	214,1,0,0,0,34,224,1,0,0,0,36,232,1,0,0,0,38,240,1,0,0,0,40,253,1,0,0,
  	0,42,273,1,0,0,0,44,290,1,0,0,0,46,305,1,0,0,0,48,323,1,0,0,0,50,325,
  	1,0,0,0,52,53,5,23,0,0,53,54,3,2,1,0,54,55,5,24,0,0,55,1,1,0,0,0,56,60,
  	5,1,0,0,57,59,3,4,2,0,58,57,1,0,0,0,59,62,1,0,0,0,60,58,1,0,0,0,60,61,
  	1,0,0,0,61,63,1,0,0,0,62,60,1,0,0,0,63,64,5,2,0,0,64,3,1,0,0,0,65,86,
  	3,6,3,0,66,86,3,8,4,0,67,86,3,10,5,0,68,69,3,18,9,0,69,70,5,3,0,0,70,
  	86,1,0,0,0,71,72,3,22,11,0,72,73,5,3,0,0,73,86,1,0,0,0,74,75,3,24,12,
  	0,75,76,5,3,0,0,76,86,1,0,0,0,77,86,3,26,13,0,78,86,3,30,15,0,79,86,3,
  	32,16,0,80,86,3,34,17,0,81,86,3,36,18,0,82,86,3,38,19,0,83,86,3,40,20,
  	0,84,86,3,42,21,0,85,65,1,0,0,0,85,66,1,0,0,0,85,67,1,0,0,0,85,68,1,0,
  	0,0,85,71,1,0,0,0,85,74,1,0,0,0,85,77,1,0,0,0,85,78,1,0,0,0,85,79,1,0,
  	0,0,85,80,1,0,0,0,85,81,1,0,0,0,85,82,1,0,0,0,85,83,1,0,0,0,85,84,1,0,
  	0,0,86,5,1,0,0,0,87,88,5,25,0,0,88,91,5,37,0,0,89,90,5,4,0,0,90,92,3,
  	46,23,0,91,89,1,0,0,0,91,92,1,0,0,0,92,93,1,0,0,0,93,94,5,3,0,0,94,7,
  	1,0,0,0,95,96,5,25,0,0,96,97,5,37,0,0,97,98,5,5,0,0,98,99,3,12,6,0,99,
  	100,5,6,0,0,100,101,5,3,0,0,101,139,1,0,0,0,102,103,5,25,0,0,103,104,
  	5,37,0,0,104,105,5,5,0,0,105,106,3,12,6,0,106,107,5,6,0,0,107,108,5,4,
  	0,0,108,117,5,5,0,0,109,114,3,46,23,0,110,111,5,7,0,0,111,113,3,46,23,
  	0,112,110,1,0,0,0,113,116,1,0,0,0,114,112,1,0,0,0,114,115,1,0,0,0,115,
  	118,1,0,0,0,116,114,1,0,0,0,117,109,1,0,0,0,117,118,1,0,0,0,118,119,1,
  	0,0,0,119,120,5,6,0,0,120,121,5,3,0,0,121,139,1,0,0,0,122,123,5,25,0,
  	0,123,124,5,37,0,0,124,125,5,4,0,0,125,134,5,5,0,0,126,131,3,46,23,0,
  	127,128,5,7,0,0,128,130,3,46,23,0,129,127,1,0,0,0,130,133,1,0,0,0,131,
  	129,1,0,0,0,131,132,1,0,0,0,132,135,1,0,0,0,133,131,1,0,0,0,134,126,1,
  	0,0,0,134,135,1,0,0,0,135,136,1,0,0,0,136,137,5,6,0,0,137,139,5,3,0,0,
  	138,95,1,0,0,0,138,102,1,0,0,0,138,122,1,0,0,0,139,9,1,0,0,0,140,141,
  	5,37,0,0,141,142,5,5,0,0,142,143,3,12,6,0,143,144,5,6,0,0,144,145,5,4,
  	0,0,145,146,3,46,23,0,146,147,5,3,0,0,147,11,1,0,0,0,148,149,7,0,0,0,
  	149,13,1,0,0,0,150,151,5,37,0,0,151,152,5,5,0,0,152,153,3,12,6,0,153,
  	154,5,6,0,0,154,15,1,0,0,0,155,156,5,37,0,0,156,157,5,8,0,0,157,17,1,
  	0,0,0,158,159,5,37,0,0,159,160,5,4,0,0,160,161,3,46,23,0,161,19,1,0,0,
  	0,162,163,3,18,9,0,163,164,5,3,0,0,164,21,1,0,0,0,165,166,5,37,0,0,166,
  	167,5,9,0,0,167,23,1,0,0,0,168,169,5,37,0,0,169,170,5,10,0,0,170,25,1,
  	0,0,0,171,172,5,26,0,0,172,173,5,11,0,0,173,174,3,28,14,0,174,175,5,12,
  	0,0,175,176,5,3,0,0,176,27,1,0,0,0,177,183,5,37,0,0,178,183,5,40,0,0,
  	179,183,5,27,0,0,180,183,3,14,7,0,181,183,3,16,8,0,182,177,1,0,0,0,182,
  	178,1,0,0,0,182,179,1,0,0,0,182,180,1,0,0,0,182,181,1,0,0,0,183,194,1,
  	0,0,0,184,190,5,7,0,0,185,191,5,37,0,0,186,191,5,40,0,0,187,191,5,27,
  	0,0,188,191,3,14,7,0,189,191,3,16,8,0,190,185,1,0,0,0,190,186,1,0,0,0,
  	190,187,1,0,0,0,190,188,1,0,0,0,190,189,1,0,0,0,191,193,1,0,0,0,192,184,
  	1,0,0,0,193,196,1,0,0,0,194,192,1,0,0,0,194,195,1,0,0,0,195,199,1,0,0,
  	0,196,194,1,0,0,0,197,198,5,7,0,0,198,200,5,27,0,0,199,197,1,0,0,0,199,
  	200,1,0,0,0,200,29,1,0,0,0,201,202,5,32,0,0,202,210,5,37,0,0,203,204,
  	5,4,0,0,204,205,5,33,0,0,205,206,5,11,0,0,206,207,5,40,0,0,207,208,5,
  	7,0,0,208,209,7,1,0,0,209,211,5,12,0,0,210,203,1,0,0,0,210,211,1,0,0,
  	0,211,212,1,0,0,0,212,213,5,3,0,0,213,31,1,0,0,0,214,215,5,37,0,0,215,
  	216,5,4,0,0,216,217,5,33,0,0,217,218,5,11,0,0,218,219,5,40,0,0,219,220,
  	5,7,0,0,220,221,7,1,0,0,221,222,5,12,0,0,222,223,5,3,0,0,223,33,1,0,0,
  	0,224,225,5,37,0,0,225,226,5,4,0,0,226,227,5,35,0,0,227,228,5,11,0,0,
  	228,229,5,37,0,0,229,230,5,12,0,0,230,231,5,3,0,0,231,35,1,0,0,0,232,
  	233,5,36,0,0,233,234,5,11,0,0,234,235,5,37,0,0,235,236,5,7,0,0,236,237,
  	3,28,14,0,237,238,5,12,0,0,238,239,5,3,0,0,239,37,1,0,0,0,240,241,5,34,
  	0,0,241,242,5,11,0,0,242,247,5,37,0,0,243,244,5,7,0,0,244,246,5,37,0,
  	0,245,243,1,0,0,0,246,249,1,0,0,0,247,245,1,0,0,0,247,248,1,0,0,0,248,
  	250,1,0,0,0,249,247,1,0,0,0,250,251,5,12,0,0,251,252,5,3,0,0,252,39,1,
  	0,0,0,253,254,5,28,0,0,254,255,5,11,0,0,255,256,3,44,22,0,256,257,5,12,
  	0,0,257,266,3,2,1,0,258,259,5,29,0,0,259,260,5,11,0,0,260,261,3,44,22,
  	0,261,262,5,12,0,0,262,263,3,2,1,0,263,265,1,0,0,0,264,258,1,0,0,0,265,
  	268,1,0,0,0,266,264,1,0,0,0,266,267,1,0,0,0,267,271,1,0,0,0,268,266,1,
  	0,0,0,269,270,5,30,0,0,270,272,3,2,1,0,271,269,1,0,0,0,271,272,1,0,0,
  	0,272,41,1,0,0,0,273,274,5,31,0,0,274,278,5,11,0,0,275,279,3,6,3,0,276,
  	279,3,20,10,0,277,279,5,3,0,0,278,275,1,0,0,0,278,276,1,0,0,0,278,277,
  	1,0,0,0,278,279,1,0,0,0,279,280,1,0,0,0,280,281,3,44,22,0,281,285,5,3,
  	0,0,282,286,3,18,9,0,283,286,3,22,11,0,284,286,3,24,12,0,285,282,1,0,
  	0,0,285,283,1,0,0,0,285,284,1,0,0,0,285,286,1,0,0,0,286,287,1,0,0,0,287,
  	288,5,12,0,0,288,289,3,2,1,0,289,43,1,0,0,0,290,291,3,48,24,0,291,292,
  	3,50,25,0,292,293,3,48,24,0,293,45,1,0,0,0,294,295,6,23,-1,0,295,306,
  	5,39,0,0,296,306,5,38,0,0,297,306,5,40,0,0,298,306,5,37,0,0,299,306,3,
  	14,7,0,300,306,3,16,8,0,301,302,5,11,0,0,302,303,3,46,23,0,303,304,5,
  	12,0,0,304,306,1,0,0,0,305,294,1,0,0,0,305,296,1,0,0,0,305,297,1,0,0,
  	0,305,298,1,0,0,0,305,299,1,0,0,0,305,300,1,0,0,0,305,301,1,0,0,0,306,
  	315,1,0,0,0,307,308,10,9,0,0,308,309,7,2,0,0,309,314,3,46,23,10,310,311,
  	10,8,0,0,311,312,7,3,0,0,312,314,3,46,23,9,313,307,1,0,0,0,313,310,1,
  	0,0,0,314,317,1,0,0,0,315,313,1,0,0,0,315,316,1,0,0,0,316,47,1,0,0,0,
  	317,315,1,0,0,0,318,324,5,39,0,0,319,324,5,38,0,0,320,324,5,37,0,0,321,
  	324,3,14,7,0,322,324,3,16,8,0,323,318,1,0,0,0,323,319,1,0,0,0,323,320,
  	1,0,0,0,323,321,1,0,0,0,323,322,1,0,0,0,324,49,1,0,0,0,325,326,7,4,0,
  	0,326,51,1,0,0,0,22,60,85,91,114,117,131,134,138,182,190,194,199,210,
  	247,266,271,278,285,305,313,315,323
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
    setState(52);
    match(BanglaParser::SHURU);
    setState(53);
    block();
    setState(54);
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
    setState(56);
    match(BanglaParser::T__0);
    setState(60);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 230149849088) != 0)) {
      setState(57);
      statement();
      setState(62);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(63);
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

BanglaParser::FileDeclarationContext* BanglaParser::StatementContext::fileDeclaration() {
  return getRuleContext<BanglaParser::FileDeclarationContext>(0);
}

BanglaParser::FileAssignmentContext* BanglaParser::StatementContext::fileAssignment() {
  return getRuleContext<BanglaParser::FileAssignmentContext>(0);
}

BanglaParser::FileReadContext* BanglaParser::StatementContext::fileRead() {
  return getRuleContext<BanglaParser::FileReadContext>(0);
}

BanglaParser::FileWriteContext* BanglaParser::StatementContext::fileWrite() {
  return getRuleContext<BanglaParser::FileWriteContext>(0);
}

BanglaParser::FileCloseContext* BanglaParser::StatementContext::fileClose() {
  return getRuleContext<BanglaParser::FileCloseContext>(0);
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
    setState(85);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(65);
      variableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(66);
      arrayDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(67);
      arrayElementAssignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(68);
      assignmentStatement();
      setState(69);
      match(BanglaParser::T__2);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(71);
      incrementStatement();
      setState(72);
      match(BanglaParser::T__2);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(74);
      decrementStatement();
      setState(75);
      match(BanglaParser::T__2);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(77);
      printStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(78);
      fileDeclaration();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(79);
      fileAssignment();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(80);
      fileRead();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(81);
      fileWrite();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(82);
      fileClose();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(83);
      ifStatement();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(84);
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
    setState(87);
    match(BanglaParser::DHORI);
    setState(88);
    match(BanglaParser::ID);
    setState(91);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BanglaParser::T__3) {
      setState(89);
      match(BanglaParser::T__3);
      setState(90);
      expression(0);
    }
    setState(93);
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
    setState(138);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(95);
      match(BanglaParser::DHORI);
      setState(96);
      match(BanglaParser::ID);
      setState(97);
      match(BanglaParser::T__4);
      setState(98);
      arrayIndex();
      setState(99);
      match(BanglaParser::T__5);
      setState(100);
      match(BanglaParser::T__2);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(102);
      match(BanglaParser::DHORI);
      setState(103);
      match(BanglaParser::ID);
      setState(104);
      match(BanglaParser::T__4);
      setState(105);
      arrayIndex();
      setState(106);
      match(BanglaParser::T__5);
      setState(107);
      match(BanglaParser::T__3);
      setState(108);
      match(BanglaParser::T__4);
      setState(117);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 2061584304128) != 0)) {
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

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(122);
      match(BanglaParser::DHORI);
      setState(123);
      match(BanglaParser::ID);
      setState(124);
      match(BanglaParser::T__3);
      setState(125);
      match(BanglaParser::T__4);
      setState(134);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 2061584304128) != 0)) {
        setState(126);
        expression(0);
        setState(131);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == BanglaParser::T__6) {
          setState(127);
          match(BanglaParser::T__6);
          setState(128);
          expression(0);
          setState(133);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(136);
      match(BanglaParser::T__5);
      setState(137);
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
    setState(140);
    match(BanglaParser::ID);
    setState(141);
    match(BanglaParser::T__4);
    setState(142);
    arrayIndex();
    setState(143);
    match(BanglaParser::T__5);
    setState(144);
    match(BanglaParser::T__3);
    setState(145);
    expression(0);
    setState(146);
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
    setState(148);
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
    setState(150);
    match(BanglaParser::ID);
    setState(151);
    match(BanglaParser::T__4);
    setState(152);
    arrayIndex();
    setState(153);
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
    setState(155);
    match(BanglaParser::ID);
    setState(156);
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
    setState(158);
    match(BanglaParser::ID);
    setState(159);
    match(BanglaParser::T__3);
    setState(160);
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
    setState(162);
    assignmentStatement();
    setState(163);
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
    setState(165);
    match(BanglaParser::ID);
    setState(166);
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
    setState(168);
    match(BanglaParser::ID);
    setState(169);
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
    setState(171);
    match(BanglaParser::DEKHAO);
    setState(172);
    match(BanglaParser::T__10);
    setState(173);
    printArguments();
    setState(174);
    match(BanglaParser::T__11);
    setState(175);
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
    setState(182);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(177);
      match(BanglaParser::ID);
      break;
    }

    case 2: {
      setState(178);
      match(BanglaParser::STRING);
      break;
    }

    case 3: {
      setState(179);
      match(BanglaParser::NATUN_LINE);
      break;
    }

    case 4: {
      setState(180);
      arrayElementAccess();
      break;
    }

    case 5: {
      setState(181);
      arraySizeAccess();
      break;
    }

    default:
      break;
    }
    setState(194);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(184);
        match(BanglaParser::T__6);
        setState(190);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          setState(185);
          match(BanglaParser::ID);
          break;
        }

        case 2: {
          setState(186);
          match(BanglaParser::STRING);
          break;
        }

        case 3: {
          setState(187);
          match(BanglaParser::NATUN_LINE);
          break;
        }

        case 4: {
          setState(188);
          arrayElementAccess();
          break;
        }

        case 5: {
          setState(189);
          arraySizeAccess();
          break;
        }

        default:
          break;
        } 
      }
      setState(196);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(199);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BanglaParser::T__6) {
      setState(197);
      match(BanglaParser::T__6);
      setState(198);
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
  enterRule(_localctx, 30, BanglaParser::RuleFileDeclaration);
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
    setState(201);
    match(BanglaParser::FILE);
    setState(202);
    match(BanglaParser::ID);
    setState(210);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BanglaParser::T__3) {
      setState(203);
      match(BanglaParser::T__3);
      setState(204);
      match(BanglaParser::FILE_OPEN);
      setState(205);
      match(BanglaParser::T__10);
      setState(206);
      match(BanglaParser::STRING);
      setState(207);
      match(BanglaParser::T__6);
      setState(208);
      _la = _input->LA(1);
      if (!(_la == BanglaParser::FILE_READ

      || _la == BanglaParser::FILE_WRITE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(209);
      match(BanglaParser::T__11);
    }
    setState(212);
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
  enterRule(_localctx, 32, BanglaParser::RuleFileAssignment);
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
    setState(214);
    match(BanglaParser::ID);
    setState(215);
    match(BanglaParser::T__3);
    setState(216);
    match(BanglaParser::FILE_OPEN);
    setState(217);
    match(BanglaParser::T__10);
    setState(218);
    match(BanglaParser::STRING);
    setState(219);
    match(BanglaParser::T__6);
    setState(220);
    _la = _input->LA(1);
    if (!(_la == BanglaParser::FILE_READ

    || _la == BanglaParser::FILE_WRITE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(221);
    match(BanglaParser::T__11);
    setState(222);
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
  enterRule(_localctx, 34, BanglaParser::RuleFileRead);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(224);
    match(BanglaParser::ID);
    setState(225);
    match(BanglaParser::T__3);
    setState(226);
    match(BanglaParser::FILE_READ);
    setState(227);
    match(BanglaParser::T__10);
    setState(228);
    match(BanglaParser::ID);
    setState(229);
    match(BanglaParser::T__11);
    setState(230);
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
  enterRule(_localctx, 36, BanglaParser::RuleFileWrite);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    match(BanglaParser::FILE_WRITE);
    setState(233);
    match(BanglaParser::T__10);
    setState(234);
    match(BanglaParser::ID);
    setState(235);
    match(BanglaParser::T__6);
    setState(236);
    printArguments();
    setState(237);
    match(BanglaParser::T__11);
    setState(238);
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
  enterRule(_localctx, 38, BanglaParser::RuleFileClose);
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
    setState(240);
    match(BanglaParser::FILE_CLOSE);
    setState(241);
    match(BanglaParser::T__10);
    setState(242);
    match(BanglaParser::ID);
    setState(247);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BanglaParser::T__6) {
      setState(243);
      match(BanglaParser::T__6);
      setState(244);
      match(BanglaParser::ID);
      setState(249);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(250);
    match(BanglaParser::T__11);
    setState(251);
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
  enterRule(_localctx, 40, BanglaParser::RuleIfStatement);
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
    setState(253);
    match(BanglaParser::IF);
    setState(254);
    match(BanglaParser::T__10);
    setState(255);
    condition();
    setState(256);
    match(BanglaParser::T__11);
    setState(257);
    block();
    setState(266);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BanglaParser::ELSE_IF) {
      setState(258);
      match(BanglaParser::ELSE_IF);
      setState(259);
      match(BanglaParser::T__10);
      setState(260);
      condition();
      setState(261);
      match(BanglaParser::T__11);
      setState(262);
      block();
      setState(268);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(271);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BanglaParser::ELSE) {
      setState(269);
      match(BanglaParser::ELSE);
      setState(270);
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
  enterRule(_localctx, 42, BanglaParser::RuleForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
    match(BanglaParser::FOR);
    setState(274);
    match(BanglaParser::T__10);
    setState(278);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(275);
      variableDeclaration();
      break;
    }

    case 2: {
      setState(276);
      initialization();
      break;
    }

    case 3: {
      setState(277);
      match(BanglaParser::T__2);
      break;
    }

    default:
      break;
    }
    setState(280);
    condition();
    setState(281);
    match(BanglaParser::T__2);
    setState(285);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(282);
      assignmentStatement();
      break;
    }

    case 2: {
      setState(283);
      incrementStatement();
      break;
    }

    case 3: {
      setState(284);
      decrementStatement();
      break;
    }

    default:
      break;
    }
    setState(287);
    match(BanglaParser::T__11);
    setState(288);
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
  enterRule(_localctx, 44, BanglaParser::RuleCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    operand();
    setState(291);
    comparisonOperator();
    setState(292);
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
  size_t startState = 46;
  enterRecursionRule(_localctx, 46, BanglaParser::RuleExpression, precedence);

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
    setState(305);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(295);
      match(BanglaParser::INT);
      break;
    }

    case 2: {
      setState(296);
      match(BanglaParser::FLOAT);
      break;
    }

    case 3: {
      setState(297);
      match(BanglaParser::STRING);
      break;
    }

    case 4: {
      setState(298);
      match(BanglaParser::ID);
      break;
    }

    case 5: {
      setState(299);
      arrayElementAccess();
      break;
    }

    case 6: {
      setState(300);
      arraySizeAccess();
      break;
    }

    case 7: {
      setState(301);
      match(BanglaParser::T__10);
      setState(302);
      expression(0);
      setState(303);
      match(BanglaParser::T__11);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(315);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(313);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(307);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(308);
          _la = _input->LA(1);
          if (!(_la == BanglaParser::T__12

          || _la == BanglaParser::T__13)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(309);
          expression(10);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(310);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(311);
          _la = _input->LA(1);
          if (!(_la == BanglaParser::T__14

          || _la == BanglaParser::T__15)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(312);
          expression(9);
          break;
        }

        default:
          break;
        } 
      }
      setState(317);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
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
  enterRule(_localctx, 48, BanglaParser::RuleOperand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(323);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(318);
      match(BanglaParser::INT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(319);
      match(BanglaParser::FLOAT);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(320);
      match(BanglaParser::ID);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(321);
      arrayElementAccess();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(322);
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
  enterRule(_localctx, 50, BanglaParser::RuleComparisonOperator);
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
    setState(325);
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
    case 23: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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
