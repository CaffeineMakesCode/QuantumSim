#include <iostream>
#include "qAlgorithms.h"

QubitLayer grover(int dSolution){
    if (dSolution > numStates){
        std::cout<<"\033[31;31m[Error]\033[m"<<std::endl;
        std::cout<<"Ravi says that your solution is not in the problem domain."<<std::endl;
        std::cout<<"Number of states: "<<numStates<<std::endl;
        std::cout<<"Your solution:    "<<dSolution<<std::endl;
        exit(EXIT_FAILURE);
    }
    std::bitset<numQubits> bSolution = dSolution;
    QubitLayer q;
    int ctrlQubits[numQubits-1];
    for (int i = 0; i < (numQubits-1); i++)
        ctrlQubits[i] = i;
    for (int i = 0; i < numQubits; i++)
        q.hadamard(i);
    for (int i = 0; i < numQubits; i++)
        if (!bSolution.test(i))
            q.pauliX(i);
    q.cphase(ctrlQubits, numQubits-1, numQubits-1);
    for (int i = 0; i < numQubits; i++)
        if (!bSolution.test(i))
            q.pauliX(i);
    for (int i = 0; i < numQubits; i++)
        q.hadamard(i);
    for (int i = 0; i < numQubits; i++)
        q.pauliX(i);
    q.cphase(ctrlQubits, numQubits-1, numQubits-1);
    for (int i = 0; i < numQubits; i++)
        q.pauliX(i);
    for (int i = 0; i < numQubits; i++)
        q.hadamard(i);
    return q;
}