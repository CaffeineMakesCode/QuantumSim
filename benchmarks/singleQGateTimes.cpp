#include <iostream>
#include <complex>
#include <string>
#include "timers.hpp"
#include "../src/QubitLayer.hpp"

// list of single qubit gates
enum Gates { init, X, Y, Z, Hadamard, rx, ry, rz };

void runGate(unsigned int numQubits, Gates gate){
    QubitLayer q(numQubits);
    std::string gateName;
    start = Clock::now();
    switch(gate){
        case X : q.pauliX(0); gateName = "Pauli X "; break;
        case Y : q.pauliY(0); gateName = "Pauli Y "; break;
        case Z : q.pauliZ(0); gateName = "Pauli Z "; break;
        case Hadamard : q.hadamard(0); gateName = "Hadamard"; break;
        case rx : q.rx(0, pi); gateName = "Rx      "; break;
        case ry : q.ry(0, pi); gateName = "Ry      "; break;
        case rz : q.rz(0, pi); gateName = "Rz      "; break;
        default : q.rx(0, pi); gateName = "Init"; break;
    }
    stop = Clock::now();
    duration = std::chrono::duration_cast<ns>(stop-start).count();
    if (!(gateName == "Init"))
        std::cout << gateName << " : " << duration << " ns" << std::endl;
}

int main(){
    // define number of qubits (1) for this benchmark
    unsigned int n = 1;
    std::cout << "\033[34;34m-------------Single Qubit Gates--------------\033[m" << std::endl;
    std::cout <<"Number of qubits: "<< n << std::endl;
    for (int gate = init; gate <= rz; gate++)
        runGate(n, static_cast<Gates>(gate));
}