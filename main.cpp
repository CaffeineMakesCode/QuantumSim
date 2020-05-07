#include <iostream>
#include <complex>
#include "QubitLayer.h"
#include "qAlgorithms.h"

int main(){
    auto start = std::chrono::system_clock::now();
    pauliError error = errorX;
    QubitLayer q = grover(10);
    std::chrono::duration<double> dur= std::chrono::system_clock::now() - start;
    std::cout << "Time for program " << dur.count() << " seconds" << std::endl;
    q.printMeasurement();
    //q.printQubits();
}