#include <iostream>
#include <complex>
#include "definitions.h"
#include "QubitLayer.h"

int main(){
    QubitLayer q;
    int ctrlQubits[numQubits-1]{0,1};
    for (int i = 0; i < numQubits; i++)
        q.hadamard(i);
    for (int i = 0; i < numQubits; i++)
        q.pauliX(i);
    q.cphase(ctrlQubits, 2, 2);
    for (int i = 0; i < numQubits; i++)
        q.pauliX(i);
    for (int i = 0; i < numQubits; i++)
        q.hadamard(i);
    for (int i = 0; i < numQubits; i++)
        q.pauliX(i);
    q.cphase(ctrlQubits, 2, 2);
    for (int i = 0; i < numQubits; i++)
        q.pauliX(i);
    for (int i = 0; i < numQubits; i++)
        q.hadamard(i);
    q.printQubits();
}