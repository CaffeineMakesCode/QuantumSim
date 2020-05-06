#ifndef QALGORITHMS_H
#define QALGORITHMS_H
#include "QubitLayer.h"

enum pauliError {errorX, errorY, errorZ};

/**
 * Performs Grover search on 'n' qubits.
 * 'n' is defined as numQubits in defitions.h
 * 
 * @param dSolution location of the solution in decimal
 * @param numReps   optional parameter to specify the number of Grover iterations
 * @return QubitLayer object containing the amplitudes of all the state
 */
QubitLayer grover(int dSolution, int numReps = 0);
/**
 * 3 qubit repetition code.
 * 
 * @param a0              amplitude of |0>
 * @param a1              amplitude of |1>
 * @param errorLocation   qubit where error occured
 * @param errorType       type of error
 * @return QubitLayer object containing the amplitudes of all the state
 */
QubitLayer repCode3(int errorLocation, pauliError errorType);

#endif