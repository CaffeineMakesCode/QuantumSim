#include <iostream>
#include <complex>
#include "definitions.h"
#include "QubitLayer.h"
#include "qAlgorithms.h"

int main(){
    QubitLayer q = grover(10);
    q.printQubits();
}