#ifndef DEFINITIONS_H
#define DEFINITIONS_H
#include <complex>

typedef double precision;
constexpr precision pi{3.14159265358979323846};
constexpr std::complex<precision> hadamardCoef{0.707106781186548,0};
constexpr std::complex<precision> complexImg{0,1};
constexpr std::complex<precision> zeroComplex{0,0};
constexpr unsigned int maxQubits{2^32-1};                               //max qubits allowed by QuantumSim is 2^32
typedef std::complex<precision> qubitLayer;

#endif