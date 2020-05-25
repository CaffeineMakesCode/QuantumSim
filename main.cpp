#include <iostream>
#include <complex>
#include "QubitLayer.hpp"
#include "qAlgorithms.hpp"

int main(){
    auto start = std::chrono::steady_clock::now();
    QubitLayer q = grover(0);
    auto stop = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();
    std::cout << "Execution time: " << duration << " µs" << std::endl;
    q.printMeasurement();
}