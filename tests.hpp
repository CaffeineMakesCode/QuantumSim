#ifndef TESTS_H
#define TESTS_H
#include <complex>

constexpr int numStatesTest{8};

struct TesterGate{
    std::string gateName;
    qubitLayer outputState[numStatesTest];
};

// gates with their output states
TesterGate pauliXtester = {
    .gateName = "Pauli X ",
    .outputState = {zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, {1,0}, zeroComplex},
};

TesterGate pauliYtester = {
    .gateName = "Pauli Y ",
    .outputState = {zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, {0,-1}, zeroComplex},
};

TesterGate pauliZtester = {
    .gateName = "Pauli Z ",
    .outputState = {zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, {-1,-0}},
};

TesterGate hadamardTester = {
    .gateName = "Hadamard",
    .outputState = {zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, hadamardCoef, -hadamardCoef},
};

// rotation gates tested with theta=pi
precision cosPi = cos(pi/2);
precision sinPi = sin(pi/2);
TesterGate rxTester = {
    .gateName = "Rx      ",
    .outputState = {zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, {0, -sinPi}, {cosPi, 0}},
};

TesterGate ryTester = {
    .gateName = "Ry      ",
    .outputState = {zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, {-sinPi, 0}, {cosPi, 0}},
};

TesterGate rzTester = {
    .gateName = "Rz      ",
    .outputState = {zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, {cosPi, sinPi}},
};

TesterGate cnotTester = {
    .gateName = "CNOT    ",
    .outputState = {zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, {1, 0}, zeroComplex, zeroComplex},
};

TesterGate cphaseTester = {
    .gateName = "CPHASE  ",
    .outputState = {zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, {-1, 0}},
};

TesterGate toffoliTester = {
    .gateName = "Toffoli ",
    .outputState = {zeroComplex, zeroComplex, zeroComplex, {1, 0}, zeroComplex, zeroComplex, zeroComplex, zeroComplex},
};

TesterGate mcnotTester = {
    .gateName = "M-CNOT  ",
    .outputState = {zeroComplex, zeroComplex, zeroComplex, {1, 0}, zeroComplex, zeroComplex, zeroComplex, zeroComplex},
};

TesterGate mcphaseTester = {
    .gateName = "M-PHASE ",
    .outputState = {zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, zeroComplex, {-1, 0}},
};

#endif