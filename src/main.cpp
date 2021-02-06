#include <iostream>
#include <complex>
#include <chrono>
#include "QubitLayer.hpp"
#include "../examples/qAlgorithms.hpp"

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
        if (std::string(argv[i]) == "-p")
        {
            isParallel = true;
            std::cout << "Running parallel version of QuantumSim" << std::endl;
        }
    auto start = std::chrono::steady_clock::now();
    QubitLayer q = grover(2, 0);
    auto stop = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();
    std::cout << "Execution time: " << duration << " µs" << std::endl;
    q.printMeasurement();
}