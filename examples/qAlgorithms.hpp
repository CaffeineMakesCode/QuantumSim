#ifndef QALGORITHMS_H
#define QALGORITHMS_H
#include "../src/QubitLayer.hpp"

enum pauliError { errorX, errorY, errorZ };

/**
 * Performs Grover search on 'n' qubits.
 * 'n' is defined as numQubits in defitions.h
 * @param numQubits number of qubits
 * @param dSolution location of the solution in decimal
 * @param numReps   optional parameter to specify the number of Grover iterations
 * @return QubitLayer object containing the amplitudes of all the state
 */
QubitLayer grover(unsigned int numQubits, int unsigned dSolution, int unsigned numReps = 0);
/**
 * 3 qubit repetition code.
 * @param numQubits       number of qubits
 * @param errorLocation   qubit where error occured
 * @param errorType       type of error
 * @return QubitLayer object containing the amplitudes of all the state
 */
QubitLayer repCode3(unsigned int numQubits, unsigned int errorLocation, pauliError errorType);
/**
 * Generates an EPR pair between 2 qubits.
 * @param numQubits number of qubits
 * @param q1        first qubit in pair
 * @param q2        second qubit in pair
 * @return QubitLayer object containing the amplitudes of all the state
 */
QubitLayer genEPR(unsigned int numQubits, unsigned int q1, unsigned int q2);

#endif