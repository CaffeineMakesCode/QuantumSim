#include <iostream>
#include <complex>
#include "QubitLayer.h"
#include "qAlgorithms.h"

int main(){
    auto start = std::chrono::system_clock::now();
    QubitLayer q = grover(3);
    std::chrono::duration<double> dur= std::chrono::system_clock::now() - start;
    std::cout << "Time for program " << dur.count() << " seconds" << std::endl;
}