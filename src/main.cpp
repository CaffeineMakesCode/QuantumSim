#include <iostream>
#include <fstream>
#include <complex>
#include <antlr4-common.h>
#include "qasm3Lexer.h"
#include "Qasm3CustomListener.hpp"

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
        if (std::string(argv[i]) == "-p")
        {
            isParallel = true;
            std::cout << "Running parallel version of QuantumSim" << std::endl;
        }
    std::ifstream infile;
    if (argc > 1)
    {
        infile.open(argv[1], std::ios::in);
        // Provide the input text in a stream
        antlr4::ANTLRInputStream input(infile);

        // Create a lexer which scans the input stream
        // to create a token stream.
        qasm3Lexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);

        // Create a parser which parses the token stream
        // to create a parse tree.
        qasm3Parser parser(&tokens);
        antlr4::tree::ParseTree *tree = parser.program();

        Qasm3CustomListener listener;

        antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
        infile.close();
    }
}