#include <iostream>
#include "qAlgorithms.hpp"

QubitLayer grover(int dSolution, int numReps){
    if (dSolution > numStates){
        std::cout<<"\033[31;31m[Error]\033[m"<<std::endl;
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
        q.mcphase(ctrlQubits, numQubits-1, numQubits-1);
        for (int i = 0; i < numQubits; i++)
            if (!bSolution.test(i))
                q.pauliX(i);
        //grover diffusion operator (inversion about mean and amplitude amplification)
        for (int i = 0; i < numQubits; i++)
            q.hadamard(i);
        for (int i = 0; i < numQubits; i++)
            q.pauliX(i);
        q.mcphase(ctrlQubits, numQubits-1, numQubits-1);
        for (int i = 0; i < numQubits; i++)
            q.pauliX(i);
        for (int i = 0; i < numQubits; i++)
            q.hadamard(i);
    }
    return q;
}

/*QubitLayer repCode3(int errorLocation, pauliError errorType){
    if (numQubits != 3){
        std::cout<<"\033[31;31m[Error]\033[m"<<std::endl;
        std::cout<<"Number of qubits defined:                            "<<numQubits<<std::endl;
        std::cout<<"Number of qubits used by 3 qubit repetition code:    "<<3<<std::endl;
        exit(EXIT_FAILURE);
    }
    QubitLayer q;
    //initialise state to anything you want
    q.rx(0, pi/3);
    std::cout<<"Initial state:"<<std::endl;
    q.printQubits();
    //"copy" state
    q.cnot(0, 1);
    q.cnot(0, 2);
    //inject error
    switch(errorType){
        case errorX: q.pauliX(errorLocation); break;
        case errorY: q.pauliY(errorLocation); break;
        case errorZ: q.pauliZ(errorLocation); break;
    }
    //undo the "copy"
    q.cnot(0, 1);
    q.cnot(0, 2);
    q.toffoli(2, 1, 0);
    std::cout<<"Final state:"<<std::endl;
    return q;
}*/

QubitLayer genEPR(int q1, int q2){
    if (numQubits < 2){
        std::cout<<"\033[31;31m[Error]\033[m"<<std::endl;
        std::cout<<"Number of qubits defined:           "<<numQubits<<std::endl;
        std::cout<<"Minimum number of qubits needed:    "<<2<<std::endl;
        exit(EXIT_FAILURE);
    }
    QubitLayer q;
    //apply hadamard to the first qubit
    q.hadamard(q2);
    //apply cnot on the 2 qubits
    q.cnot(q2, q1);
    return q;
}