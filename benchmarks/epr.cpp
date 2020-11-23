#include <iostream>
#include <complex>
#include <string>
#include "timers.hpp"
#include "../src/QubitLayer.hpp"
#include "../src/definitions.hpp"

int main(){
    unsigned int numQubits = 2;
    QubitLayer q(numQubits);
    start = Clock::now();
    //apply hadamard to the first qubit
    q.hadamard(1);
    //apply cnot on the 2 qubits
    q.cnot(1, 0);
    stop = Clock::now();
    duration = std::chrono::duration_cast<mus>(stop-start).count();
    std::cout << "Execution time ("<< numQubits <<" qubits): " << duration << " µs" << std::endl;
    q.printQubits();
}