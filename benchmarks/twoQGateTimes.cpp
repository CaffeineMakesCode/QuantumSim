#include <iostream>
#include <complex>
#include <string>
#include "timers.hpp"
#include "../src/QubitLayer.hpp"

// list of single qubit gates
enum Gates
{
    init,
    cnot,
    cphase
};

void runGate(unsigned int numQubits, Gates gate)
{
    QubitLayer q(numQubits);
    //initliase qubit to |11> to let both gates run
    q.pauliX(0);
    q.pauliX(1);
    std::string gateName;
    start = Clock::now();
    switch (gate)
    {
    case cnot:
        q.cnot(0, 1);
        gateName = "CNOT    ";
        break;
    case cphase:
        q.cz(0, 1);
        gateName = "CPHASE  ";
        break;
    default:
        q.cnot(0, 1);
        gateName = "Init";
        break;
    }
    stop = Clock::now();
    duration = std::chrono::duration_cast<ns>(stop - start).count();
    if (!(gateName == "Init"))
        std::cout << gateName << " : " << duration << " ns" << std::endl;
}

int main()
{
    // define number of qubits (1) for this benchmark
    unsigned int n = 2;
    std::cout << "\033[34;34m---------------Two Qubit Gates---------------\033[m" << std::endl;
    std::cout << "Number of qubits: " << n << std::endl;
    for (int gate = init; gate <= cphase; gate++)
        runGate(n, static_cast<Gates>(gate));
}