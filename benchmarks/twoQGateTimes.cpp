#include <iostream>
#include <complex>
#include <string>
#ifndef numQubits
#define numQubits 2
#endif
#include "timers.hpp"
#include "../QubitLayer.hpp"

// list of single qubit gates
enum Gates { init, cnot, cphase };

void runGate(QubitLayer *q, Gates gate){
    std::string gateName;
    start = Clock::now();
    switch(gate){
        case cnot : q->cnot(0, 1); gateName = "CNOT   "; break;
        case cphase : q->cphase(0, 1); gateName = "CPHASE "; break;
        default : q->cnot(0, 1); gateName = "Init"; break;
    }
    stop = Clock::now();
    duration = std::chrono::duration_cast<ns>(stop-start).count();
    if (!(gateName == "Init"))
        std::cout << gateName << " : " << duration << " ns" << std::endl;
}

int main(){
    QubitLayer q;
    //initliase qubit to |11> to let both gates run
    q.pauliX(0);
    q.pauliX(1);
    std::cout <<"--Two qubit gate times-----------------" << std::endl;
    std::cout <<"Number of qubits: "<< numQubits << std::endl;
    for (int gate = init; gate <= cphase; gate++ )
        runGate(&q, static_cast<Gates>(gate));
    std::cout <<"---------------------------------------" << std::endl;
}