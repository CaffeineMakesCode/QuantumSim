#ifndef DEFINITIONS_H
#define DEFINITIONS_H
#include <complex>

static constexpr int numQubits{4};
static constexpr double pi{3.14159265358979323846};
constexpr std::complex<double> hadamardCoef{0.707106781186548,0};
constexpr std::complex<double> complexImg{0,1};
static constexpr int power2(int qubits){
    int result{1};
    for (int i = 0; i < qubits; i++)
        result *= 2;
    return result;
}
static constexpr int numStates{power2(numQubits)};
typedef std::complex<double> qubitLayer;

#endif