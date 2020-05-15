#include <iostream>
#include <complex>
#include "QubitLayer.hpp"
#include "qAlgorithms.hpp"

int main(){
    auto start = std::chrono::high_resolution_clock::now();
    //pauliError error = errorX;
    QubitLayer q = grover(0);
    //QubitLayer q;
    //q.pauliX(0);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();
    std::cout << "Execution time: " << duration << " µs" << std::endl;
    q.printMeasurement();
    //q.printQubits();
}