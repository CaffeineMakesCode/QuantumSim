#include <iostream>
#include <complex>
#include <string>
#ifndef numQubits
#define numQubits 2
#endif
#include "timers.hpp"
#include "../src/QubitLayer.hpp"

// list of single qubit gates
enum Gates { init, cnot, cphase };

void runGate(Gates gate){
    QubitLayer q;
    //initliase qubit to |11> to let both gates run
    q.pauliX(0);
    q.pauliX(1);
    std::string gateName;
    start = Clock::now();
    switch(gate){
        case cnot : q.cnot(0, 1); gateName = "CNOT    "; break;
        case cphase : q.cphase(0, 1); gateName = "CPHASE  "; break;
        default : q.cnot(0, 1); gateName = "Init"; break;
    }
    stop = Clock::now();
    duration = std::chrono::duration_cast<ns>(stop-start).count();
    if (!(gateName == "Init"))
        std::cout << gateName << " : " << duration << " ns" << std::endl;
}

int main(){
    std::cout << "\033[34;34m---------------Two Qubit Gates---------------\033[m" << std::endl;
    std::cout <<"Number of qubits: "<< numQubits << std::endl;
    for (int gate = init; gate <= cphase; gate++ )
        runGate(static_cast<Gates>(gate));
}