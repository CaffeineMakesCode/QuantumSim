#include <iostream>
#include <complex>
#include <string>
#include "timers.hpp"
#include "../src/QubitLayer.hpp"
#include "../src/definitions.hpp"

int main(){
    if (numQubits < 2){
        std::cout<<"\033[31;31m[Error]\033[m"<<std::endl;
        std::cout<<"Number of qubits defined:           "<<numQubits<<std::endl;
        std::cout<<"Minimum number of qubits needed:    "<<2<<std::endl;
        exit(EXIT_FAILURE);
    }
    QubitLayer q;
    start = Clock::now();
    //apply hadamard to the first qubit
    q.hadamard(1);
    //apply cnot on the 2 qubits
    q.cnot(1, 0);
    stop = Clock::now();
    duration = std::chrono::duration_cast<mus>(stop-start).count();
    std::cout << "Execution time ("<< numQubits <<" qubits): " << duration << " µs" << std::endl;
}