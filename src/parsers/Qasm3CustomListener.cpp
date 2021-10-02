#include <iostream>
#include "OpenQasmConstants.hpp"
#include "Qasm3CustomListener.hpp"

void Qasm3CustomListener::enterHeader(qasm3Parser::HeaderContext *ctx)
{
    //std::cout << ctx->toStringTree() << std::endl;
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
    qasm3Parser::QuantumGateCallContext *gateCtx = ctx->quantumGateCall();
    applyGate(gateCtx);
}

void Qasm3CustomListener::applyGate(qasm3Parser::QuantumGateCallContext *ctx)
{
    //gate name
    std::string gate = ctx->quantumGateName()->Identifier()->toString();
    //target qubit
    std::vector<qasm3Parser::IndexIdentifierContext *> qubits = ctx->indexIdentifierList()->indexIdentifier();
    int target = std::stoi(qubits[0]->expressionList()->expression(0)->expressionTerminator()->Integer()->toString());
    //gate arguments if any
    precision angle = pi;
    if (ctx->expressionList() != nullptr)
    {
        if (ctx->expressionList()->expression(0)->logicalAndExpression() != nullptr)
        {
            qasm3Parser::MultiplicativeExpressionContext *expr = ctx->expressionList()->expression(0)->logicalAndExpression()->bitOrExpression()->xOrExpression()->bitAndExpression()->equalityExpression()->comparisonExpression()->bitShiftExpression()->additiveExpression()->multiplicativeExpression();
            std::string scalarConstantOfAngle = "1";
            // check if there is a scalar constant
            if (expr->multiplicativeExpression()->powerExpression()->expressionTerminator()->Integer() != nullptr)
            {
                scalarConstantOfAngle = expr->multiplicativeExpression()->powerExpression()->expressionTerminator()->Integer()->toString();
            }
            if (expr->multiplicativeExpression()->powerExpression()->expressionTerminator()->RealNumber() != nullptr)
            {
                scalarConstantOfAngle = expr->multiplicativeExpression()->powerExpression()->expressionTerminator()->RealNumber()->toString();
            }
            if (expr->MUL() != nullptr)
            {
                // check if there is a scalar constant
                if (expr->multiplicativeExpression()->powerExpression()->expressionTerminator()->Integer() != nullptr)
                {
                    scalarConstantOfAngle = expr->multiplicativeExpression()->powerExpression()->expressionTerminator()->Integer()->toString();
                }
                if (expr->multiplicativeExpression()->powerExpression()->expressionTerminator()->RealNumber() != nullptr)
                {
                    scalarConstantOfAngle = expr->multiplicativeExpression()->powerExpression()->expressionTerminator()->RealNumber()->toString();
                }
                angle = std::stod(scalarConstantOfAngle) * pi;
            }
            if (expr->DIV() != nullptr)
            {
                // check if there is a scalar constant
                if (expr->powerExpression()->expressionTerminator()->Integer() != nullptr)
                {
                    scalarConstantOfAngle = expr->powerExpression()->expressionTerminator()->Integer()->toString();
                }
                if (expr->powerExpression()->expressionTerminator()->RealNumber() != nullptr)
                {
                    scalarConstantOfAngle = expr->powerExpression()->expressionTerminator()->RealNumber()->toString();
                }
                angle = pi / std::stod(scalarConstantOfAngle);
            }
        }
    }
    //check for available gates defined in QubitLayer
    if (gate == OPENQASM_X_GATE)
    {
        layer->pauliX(target);
    }
    if (gate == OPENQASM_Y_GATE)
    {
        layer->pauliY(target);
    }
    if (gate == OPENQASM_Z_GATE)
    {
        layer->pauliZ(target);
    }
    if (gate == OPENQASM_RX_GATE)
    {
        layer->rx(target, angle);
    }
    if (gate == OPENQASM_RY_GATE)
    {
        layer->ry(target, angle);
    }
    if (gate == OPENQASM_RZ_GATE)
    {
        layer->rz(target, angle);
    }
    if (gate == OPENQASM_HADAMARD_GATE)
    {
        layer->hadamard(target);
    }
    if (gate == OPENQASM_CNOT_GATE)
    {
        int control = target;
        target = std::stoi(qubits[1]->expressionList()->expression(0)->expressionTerminator()->Integer()->toString());
        layer->cnot(control, target);
    }
    if (gate == OPENQASM_CPHASE_GATE)
    {
        int control = target;
        target = std::stoi(qubits[1]->expressionList()->expression(0)->expressionTerminator()->Integer()->toString());
        layer->cphase(control, target);
    }
}