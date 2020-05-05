#include <iostream>
#include "qAlgorithms.h"

QubitLayer grover(int dSolution, int numReps){
    if (dSolution > numStates){
        std::cout<<"\033[31;31m[Error]\033[m"<<std::endl;
        std::cout<<"Ravi says that your solution is not in the problem domain."<<std::endl;
        std::cout<<"Number of states: "<<numStates<<std::endl;
        std::cout<<"Your solution:    "<<dSolution<<std::endl;
        exit(EXIT_FAILURE);
    }
    if (numReps == 0)
        numReps = static_cast<int>(std::sqrt(numStates)/4*pi);
    std::bitset<numQubits> bSolution = dSolution;
    QubitLayer q;
    int ctrlQubits[numQubits-1];
    for (int i = 0; i < (numQubits-1); i++)
        ctrlQubits[i] = i;
    //initiliase qubits to a superposition of all states
    for (int i = 0; i < numQubits; i++)
        q.hadamard(i);
    for (int rep = 0; rep < numReps; rep++){
        //oracle to tag solution
        for (int i = 0; i < numQubits; i++)
            if (!bSolution.test(i))
                q.pauliX(i);
        q.cphase(ctrlQubits, numQubits-1, numQubits-1);
        for (int i = 0; i < numQubits; i++)
            if (!bSolution.test(i))
                q.pauliX(i);
        //grover diffusion operator (inversion about mean and amplitude amplification)
        for (int i = 0; i < numQubits; i++)
            q.hadamard(i);
        for (int i = 0; i < numQubits; i++)
            q.pauliX(i);
        q.cphase(ctrlQubits, numQubits-1, numQubits-1);
        for (int i = 0; i < numQubits; i++)
            q.pauliX(i);
        for (int i = 0; i < numQubits; i++)
            q.hadamard(i);
    }
    return q;
}