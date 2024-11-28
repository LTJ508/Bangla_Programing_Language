#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "ANTLR_Generated/BanglaLexer.h"
#include "ANTLR_Generated/BanglaParser.h"
#include "ANTLR_Generated/BanglaBaseListener.h"

using namespace std;
using namespace antlr4;

int main(int argc, const char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <source-file>" << std::endl;
        return 1;
    }

    std::ifstream stream;
    stream.open(argv[1]);
    ANTLRInputStream input(stream);
    BanglaLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    BanglaParser parser(&tokens);

    tree::ParseTree* tree = parser.program();
    std::cout << tree->toStringTree(&parser) << std::endl;

    return 0;
}
