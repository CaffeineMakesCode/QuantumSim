#ifndef QASM3CUSTOMLISTENER_H
#define QASM3CUSTOMLISTENER_H
#include "qasm3BaseListener.h"
#include "qasm3Parser.h"
#include "QubitLayer.hpp"

class Qasm3CustomListener : public qasm3BaseListener
{
public:
    void enterHeader(qasm3Parser::HeaderContext *);
    void enterQuantumDeclarationStatement(qasm3Parser::QuantumDeclarationStatementContext *);
    void enterQuantumInstruction(qasm3Parser::QuantumInstructionContext *);
    void exitProgram(qasm3Parser::ProgramContext *);
    void applyGate(std::string gate, std::vector<qasm3Parser::IndexIdentifierContext *> qubits);

private:
    QubitLayer *layer = nullptr;
};

#endif