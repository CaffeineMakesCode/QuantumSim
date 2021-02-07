#include <iostream>
#include <cassert>
#include "../src/QubitLayer.hpp"
#include "tests.hpp"

// list of quantum gates
enum Gates
{
    X,
    Y,
    Z,
    rx,
    ry,
    rz,
    cnot,
    cphase,
    toffoli,
    mcnot,
    Hadamard,
    mcphase
};

bool testGate(Gates gate)
{
    // initalise state to |111> so all gates can change the state
    qubitLayer testInput[8] = {zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, {1, 0}};
    QubitLayer q = QubitLayer(3, testInput);
    // define array of control qubits for multiple control qubit gates
    int ctrlQubits[2]{0, 1};
    TesterGate testerGate;
    switch (gate)
    {
    case X:
        q.pauliX(0);
        testerGate = pauliXtester;
        break;
    case Y:
        q.pauliY(0);
        testerGate = pauliYtester;
        break;
    case Z:
        q.pauliZ(0);
        testerGate = pauliZtester;
        break;
    case Hadamard:
        q.hadamard(0);
        testerGate = hadamardTester;
        break;
    case rx:
        q.rx(0, pi);
        testerGate = rxTester;
        break;
    case ry:
        q.ry(0, pi);
        testerGate = ryTester;
        break;
    case rz:
        q.rz(0, pi);
        testerGate = rzTester;
        break;
    case cnot:
        q.cnot(0, 1);
        testerGate = cnotTester;
        break;
    case cphase:
        q.cphase(0, 1);
        testerGate = cphaseTester;
        break;
    case toffoli:
        q.toffoli(0, 1, 2);
        testerGate = toffoliTester;
        break;
    case mcnot:
        q.mcnot(ctrlQubits, 2, 2);
        testerGate = mcnotTester;
        break;
    case mcphase:
        q.mcphase(ctrlQubits, 2, 2);
        testerGate = mcphaseTester;
        break;
    default:
        q.pauliX(0);
        break;
    }
    // define variable to store the result of the test
    bool testResult = true;
    // iterate over the states to check if the gates work
    for (unsigned long long int i = 0; i < q.getNumStates(); i++)
        testResult = *(q.getQubitLayerOdd() + i) == testerGate.outputState[i] && testResult;
    std::cout << testerGate.gateName << (testResult ? " \033[32;32m[PASSED]\033[m" : " \033[31;31m[FAILED]\033[m") << std::endl;
    return testResult;
}

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
        if (std::string(argv[i]) == "-p")
        {
            isParallel = true;
            std::cout << "Testing parallel version of QuantumSim" << std::endl;
        }
        else
            std::cout << "Testing sequential version of QuantumSim" << std::endl;
    // define variable to store result of the tests
    bool testResult = true;
    std::cout << "\033[34;34m===========Test Results===========\033[m" << std::endl;
    for (int gate = X; gate <= mcphase; gate++)
        testResult = testGate(static_cast<Gates>(gate)) && testResult;
    return testResult ? EXIT_SUCCESS : EXIT_FAILURE;
}