#include <iostream>
#include <complex>
#include "QubitLayer.h"
#include "qAlgorithms.h"

int main(){
    QubitLayer q = grover(10);
    qProb r = q.getMaxAmplitude();
    std::cout<<r.prob<<std::endl;
    std::cout<<r.state<<std::endl;
    //q.printQubits();
}