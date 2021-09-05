#include <iostream>
#include "Qasm3CustomListener.hpp"
#include "QubitLayer.hpp"

void Qasm3CustomListener::enterHeader(qasm3Parser::HeaderContext *ctx)
{
    std::cout << ctx->toStringTree() << std::endl;
}

void Qasm3CustomListener::enterQuantumDeclarationStatement(qasm3Parser::QuantumDeclarationStatementContext *ctx)
{
    antlr4::tree::TerminalNode *numQubits = ctx->quantumDeclaration()->designator()->expression()->expressionTerminator()->Integer();
    std::cout << numQubits->toString() << std::endl;
}

void Qasm3CustomListener::enterQuantumInstruction(qasm3Parser::QuantumInstructionContext *ctx)
{
    std::string gate = ctx->quantumGateCall()->quantumGateName()->Identifier()->toString();
    std::vector<qasm3Parser::IndexIdentifierContext *> qubitIndices = ctx->quantumGateCall()->indexIdentifierList()->indexIdentifier();
    for (qasm3Parser::IndexIdentifierContext *q : qubitIndices)
    {
        std::vector<qasm3Parser::ExpressionContext *> indices = q->expressionList()->expression();
        for (qasm3Parser::ExpressionContext *i : indices)
            std::cout << i->expressionTerminator()->Integer()->toString() << std::endl;
    }
}