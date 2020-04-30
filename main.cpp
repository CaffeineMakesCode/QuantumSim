#include <iostream>
#include <complex>
#include "definitions.h"
#include "QubitLayer.h"

int main(){
    qubitLayer qubits[numStates*2];
    qubits[0] = {1,0};
    QubitLayer q{qubits};
    for (int i = 0; i < numQubits; i++)
        q.hadamard(i);
    for (int i = 0; i < numQubits; i++)
        q.pauliX(i);
    q.cphase(0, 1);
    for (int i = 0; i < numQubits; i++)
        q.pauliX(i);
    for (int i = 0; i < numQubits; i++)
        q.hadamard(i);
    for (int i = 0; i < numQubits; i++)
        q.pauliX(i);
    q.cphase(0, 1);
    for (int i = 0; i < numQubits; i++)
        q.pauliX(i);
    for (int i = 0; i < numQubits; i++)
        q.hadamard(i);
    q.printQubits();
}