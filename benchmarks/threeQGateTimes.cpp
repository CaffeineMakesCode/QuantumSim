#include <iostream>
#include <complex>
#include <string>
#include "timers.hpp"
#include "../src/QubitLayer.hpp"

// list of single qubit gates
enum Gates { init, toffoli };

void runGate(unsigned int numQubits, Gates gate){
    QubitLayer q(numQubits);
    //initliase qubit to |110> to let gates run
    q.pauliX(0);
    q.pauliX(1);
    std::string gateName;
    start = Clock::now();
    switch(gate){
        case toffoli : q.toffoli(0, 1, 2); gateName = "Toffoli "; break;
        default : q.toffoli(0, 1, 2); gateName = "Init"; break;
    }
    stop = Clock::now();
    duration = std::chrono::duration_cast<ns>(stop-start).count();
    if (!(gateName == "Init"))
        std::cout << gateName << " : " << duration << " ns" << std::endl;
}

int main(){
    // define number of qubits (3) for this benchmark
    unsigned int n = 3;
    std::cout << "\033[34;34m--------------Three Qubit Gates--------------\033[m" << std::endl;
    std::cout <<"Number of qubits: "<< n << std::endl;
    for (int gate = init; gate <= toffoli; gate++ )
        runGate(n, static_cast<Gates>(gate));
}