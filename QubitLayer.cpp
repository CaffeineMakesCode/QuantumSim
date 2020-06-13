#include <complex>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <omp.h>
#include "QubitLayer.hpp"

QubitLayer::QubitLayer(qubitLayer *qL){
    qEven_ = new qubitLayer[numStates];
    qOdd_ = new qubitLayer[numStates];
    qEven_[0] = {1,0};
    if (!(qL == nullptr)){
        for (int row=0; row<numStates; row++)
            qEven_[row] = qEven_[row];
    }
}

QubitLayer::~QubitLayer(){
    delete [] qEven_;
    delete [] qOdd_;
}

void QubitLayer::updateLayer(){
    parity ? std::fill(qEven_, qEven_ + numStates, zeroComplex) : std::fill(qOdd_, qOdd_ + numStates, zeroComplex);
    toggleParity();
}

bool QubitLayer::checkZeroState(int qubit){
    return parity ? qEven_[qubit].imag() || qEven_[qubit].real() : qOdd_[qubit].imag() || qOdd_[qubit].real();
}

void QubitLayer::pauliX(int target){
    #pragma omp parallel for shared(qOdd_, qEven_)
    for (int i = 0; i < numStates; i++)
        if (checkZeroState(i)){
            std::bitset<numQubits> state = i;
            state.flip(target);
            parity ? qOdd_[state.to_ulong()] = qEven_[i] : qEven_[state.to_ulong()] = qOdd_[i];
        }
    updateLayer();
}

/*void QubitLayer::pauliY(int target){
    for (int i = 0; i < numStates; i++){
        if (checkZeroState(i)){
            std::bitset<numQubits> state = i;
            //add phase of i if bit is 0 (i.e. set)
            if (!state.test(target)){
                state.flip(target);
                qL_[2*state.to_ulong()+1] = complexImg*qL_[2*i];
            }
            //add phase of -i if bit is 1 (i.e. set)
            else{
                state.flip(target);
                qL_[2*state.to_ulong()+1] = -complexImg*qL_[2*i];
            }
        }
    }
    updateLayer();
}

void QubitLayer::pauliZ(int target){
    for (int i = 0; i < numStates; i++){
        if (checkZeroState(i)){
            std::bitset<numQubits> state = i;
            //add phase if bit is 1 (i.e. it is set)
            if (state.test(target))
                qL_[2*i+1] = -qL_[2*i];
            else
                qL_[2*i+1] = qL_[2*i];
        }
    }
    updateLayer();
}*/

void QubitLayer::hadamard(int target){
    //map |1> to -hadamardCoef*|1> and |0> to hadamardCoef*|0>
    #pragma omp parallel for shared(qOdd_, qEven_)
    for (int i = 0; i < numStates; i++)
        if (checkZeroState(i)){
            std::bitset<numQubits> state = i;
            if (state.test(target))
                parity ? qOdd_[i] -= hadamardCoef*qEven_[i] : qEven_[i] -= hadamardCoef*qOdd_[i];
            else
                parity ? qOdd_[i] += hadamardCoef*qEven_[i] : qEven_[i] += hadamardCoef*qOdd_[i];
        }
    #pragma omp barrier
    //map |0> to hadamardCoef*|1> and |1> to hadamardCoef*|0>
    #pragma omp parallel for shared(qOdd_, qEven_)
    for (int i = 0; i < numStates; i++)
        if (checkZeroState(i)){
            std::bitset<numQubits> state = i;
            state.flip(target);
            parity ? qOdd_[state.to_ulong()] += hadamardCoef*qEven_[i] : qEven_[state.to_ulong()] += hadamardCoef*qOdd_[i];
        }
    updateLayer();
}

/*void QubitLayer::rx(int target, precision theta){
    precision cosTheta = cos(theta/2);
    precision sinTheta = sin(theta/2);
    for (int i = 0; i < numStates; i++){
        if (checkZeroState(i)){
            std::bitset<numQubits> state = i;
            //action if bit is 1 (i.e. set)
            if (state.test(target)){
                qL_[2*i+1] += cosTheta*qL_[2*i];
                state.flip(target);
                qL_[2*state.to_ulong()+1] += -1*sinTheta*complexImg*qL_[2*i];
            }
            //action if bit is 0 (i.e. not set)
            else{
                qL_[2*state.to_ulong()+1] += cosTheta*qL_[2*i];
                state.flip(target);
                qL_[2*state.to_ulong()+1] += -1*sinTheta*complexImg*qL_[2*i];
            }
        }
    }
    updateLayer();
}

void QubitLayer::ry(int target, precision theta){
    precision cosTheta = cos(theta/2);
    precision sinTheta = sin(theta/2);
    for (int i = 0; i < numStates; i++){
        if (checkZeroState(i)){
            std::bitset<numQubits> state = i;
            //action if bit is 1 (i.e. set)
            if (state.test(target)){
                qL_[2*i+1] += cosTheta*qL_[2*i];
                state.flip(target);
                qL_[2*state.to_ulong()+1] += -sinTheta*qL_[2*i];
            }
            //action if bit is 0 (i.e. not set)
            else{
                qL_[2*state.to_ulong()+1] += cosTheta*qL_[2*i];
                state.flip(target);
                qL_[2*state.to_ulong()+1] += sinTheta*qL_[2*i];
            }
        }
    }
    updateLayer();
}

void QubitLayer::rz(int target, precision theta){
    precision cosTheta = cos(theta/2);
    precision sinTheta = sin(theta/2);
    for (int i = 0; i < numStates; i++){
        if (checkZeroState(i)){
            std::bitset<numQubits> state = i;
            //action if bit is 1 (i.e. set)
            if (state.test(target))
                qL_[2*i+1] += cosTheta*qL_[2*i] + complexImg*sinTheta*qL_[2*i];
            //action if bit is 0 (i.e. not set)
            else
                qL_[2*state.to_ulong()+1] += cosTheta*qL_[2*i] - complexImg*sinTheta*qL_[2*i];
        }
    }
    updateLayer();
}*/

bool QubitLayer::checkControls(int *controls, int numControls, std::bitset<numQubits> state){
    int finalControl{0};
    for (int i = 0; i < numControls; i++)
        finalControl += state.test(controls[i]);
    return (numControls == finalControl);
}

/*void QubitLayer::cnot(int control, int target){
    for (int i = 0; i < numStates; i++){
        if (checkZeroState(i)){
            std::bitset<numQubits> state = i;
            //flip target qubit if control bit(s) is 1 (i.e. set)
            if (state.test(control)){
                state.flip(target);
                qL_[2*state.to_ulong()+1] = qL_[2*i];
            }
            else
                qL_[2*i+1] = qL_[2*i];
        }
    }
    updateLayer();
}

void QubitLayer::toffoli(int control1, int control2, int target){
    for (int i = 0; i < numStates; i++){
        if (checkZeroState(i)){
            std::bitset<numQubits> state = i;
            //flip target qubit if control bit(s) is 1 (i.e. set)
            if (state.test(control1)&&state.test(control2)){
                state.flip(target);
                qL_[2*state.to_ulong()+1] = qL_[2*i];
            }
            else
                qL_[2*i+1] = qL_[2*i];
        }
    }
    updateLayer();
}

void QubitLayer::mcnot(int *controls, int numControls, int target){
    for (int i = 0; i < numStates; i++){
        if (checkZeroState(i)){
            std::bitset<numQubits> state = i;
            //flip target qubit if control bit(s) is 1 (i.e. set)
            if (checkControls(controls, numControls, state)){
                state.flip(target);
                qL_[2*state.to_ulong()+1] = qL_[2*i];
            }
            else
                qL_[2*i+1] = qL_[2*i];
        }
    }
    updateLayer();
}

void QubitLayer::cphase(int control, int target){
    for (int i = 0; i < numStates; i++){
        if (checkZeroState(i)){
            std::bitset<numQubits> state = i;
            //add phase to target qubit if control bit(s) is 1 (i.e. set)
            if (state.test(control) && state.test(target))
                qL_[2*i+1] = -qL_[2*i];
            else
                qL_[2*i+1] = qL_[2*i];
        }
    }
    updateLayer();
}*/

void QubitLayer::mcphase(int *controls, int numControls, int target){
    #pragma omp parallel for shared(qOdd_, qEven_)
    for (int i = 0; i < numStates; i++){
        if (checkZeroState(i)){
            std::bitset<numQubits> state = i;
            //add phase to target qubit if control bit(s) is 1 (i.e. set)
            if (checkControls(controls, numControls, state) && state.test(target)){
                if (parity)
                    qOdd_[i] = -qEven_[i];
                else
                    qEven_[i] = -qOdd_[i];
            }
            else{
                if (parity)
                    qOdd_[i] = qEven_[i];
                else
                    qEven_[i] = qOdd_[i];
            }
        }
    }
    updateLayer();
}

qProb QubitLayer::getMaxAmplitude(){
    std::bitset<numQubits> state;
    qProb result;
    precision currentProb{0};
    precision previousProb{0};
    for (int i = 0; i < numStates; i++){
        state = i;
        currentProb = parity ? abs(qEven_[i])*abs(qEven_[i]) : abs(qOdd_[i])*abs(qOdd_[i]);
        if (currentProb > previousProb){
            result.state = state;
            result.prob = currentProb;
            previousProb = currentProb;
        }
    }
    return result;
}

void QubitLayer::toggleParity(){
    parity = !parity;
}

void QubitLayer::printMeasurement(){
    qProb q = getMaxAmplitude();
    std::cout<<"Measurement outcome:        |"<<q.state<<">"<<std::endl;
    std::cout<<"Probability of outcome:     "<<q.prob<<std::endl;
}

void QubitLayer::printQubits(){
    std::cout<<"Amplitude, "<<"State \n";
    for (int i = 0; i < numStates; i++){
        std::bitset<numQubits> binaryRep = i;
        std::string state = binaryRep.to_string();
        std::cout<<qEven_[i]<<" "<<qOdd_[i]<<" ";
        std::cout<<"|"<<state<<">\n"; 
    }
}