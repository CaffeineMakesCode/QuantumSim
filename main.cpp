#include <iostream>
#include <complex>
#include "QubitLayer.h"
#include "qAlgorithms.h"

int main(){
    QubitLayer q = grover(10);
    q.printMeasurement();
    q.printQubits();
}