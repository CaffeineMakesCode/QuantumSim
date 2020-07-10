#ifndef numQubits
#define numQubits 5
#endif
#ifndef numStates
#define numStates (int)pow(2,numQubits)
#endif
#ifndef DEFINITIONS_H
#define DEFINITIONS_H
#include <complex>

typedef double precision;
constexpr precision pi{3.14159265358979323846};
constexpr std::complex<precision> hadamardCoef{0.707106781186548,0};
constexpr std::complex<precision> complexImg{0,1};
constexpr std::complex<precision> zeroComplex{0,0};
typedef std::complex<precision> qubitLayer;

#endif
