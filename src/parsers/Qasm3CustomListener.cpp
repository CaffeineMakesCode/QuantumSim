#include <iostream>
#include "OpenQasmConstants.hpp"
#include "Qasm3CustomListener.hpp"

void Qasm3CustomListener::enterHeader(qasm3Parser::HeaderContext *ctx)
{
    std::cout << ctx->toStringTree() << std::endl;
}

void Qasm3CustomListener::exitProgram(qasm3Parser::ProgramContext *ctx)
{
    //print out qubits at the end of the program
    layer->printQubits();
}

void Qasm3CustomListener::enterQuantumDeclarationStatement(qasm3Parser::QuantumDeclarationStatementContext *ctx)
{
    //get the number of qubits and create a QubitLayer object
    antlr4::tree::TerminalNode *numQubits = ctx->quantumDeclaration()->designator()->expression()->expressionTerminator()->Integer();
    unsigned int n = std::stoi(numQubits->toString());
    layer = new QubitLayer(n);
}

void Qasm3CustomListener::enterQuantumInstruction(qasm3Parser::QuantumInstructionContext *ctx)
{
    //get the gate and the index of the qubit(s)
    std::string gate = ctx->quantumGateCall()->quantumGateName()->Identifier()->toString();
    std::vector<qasm3Parser::IndexIdentifierContext *> qubits = ctx->quantumGateCall()->indexIdentifierList()->indexIdentifier();
    applyGate(gate, qubits);
}

void Qasm3CustomListener::applyGate(std::string gate, std::vector<qasm3Parser::IndexIdentifierContext *> qubits)
{
    //check for available gates defined in QubitLayer
    if (gate == OPENQASM_HADAMARD_GATE)
    {
        int i = std::stoi(qubits[0]->expressionList()->expression(0)->expressionTerminator()->Integer()->toString());
        layer->hadamard(i);
    }
    if (gate == OPENQASM_CNOT_GATE)
    {
        layer->cnot(std::stoi(qubits[0]->expressionList()->expression(0)->expressionTerminator()->Integer()->toString()),
                    std::stoi(qubits[1]->expressionList()->expression(0)->expressionTerminator()->Integer()->toString()));
    }
}