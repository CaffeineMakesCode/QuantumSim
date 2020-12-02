#include <iostream>
#include <complex>
#include <chrono>
#include "QubitLayer.hpp"
#include "qAlgorithms.hpp"
#include "rQXInterface.hpp"

int main(){
    // auto start = std::chrono::steady_clock::now();
    // QubitLayer q = grover(2, 0);
    // auto stop = std::chrono::steady_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();
    // std::cout << "Execution time: " << duration << " µs" << std::endl;
    // q.printMeasurement();
    rQXInterface interface;
    interface.set_qasm("tests/bell.qasm");
    interface.execute();
    

}