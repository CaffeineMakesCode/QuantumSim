#include <complex>
#include <iostream>
#include <cmath>
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
    for (int i = 0; i < numStates; i++)
        if (checkZeroState(i)){
            std::bitset<numQubits> state = i;
            state.flip(target);
            parity ? qOdd_[state.to_ulong()] = qEven_[i] : qEven_[state.to_ulong()] = qOdd_[i];
        }
    updateLayer();
}

void QubitLayer::pauliY(int target){
    for (int i = 0; i < numStates; i++){
        if (checkZeroState(i)){
            std::bitset<numQubits> state = i;
            //flip qubit
            state.flip(target);
            //add phase of -i if bit was 1 (i.e. set) and flip it
            if (!state.test(target))
                parity ? qOdd_[state.to_ulong()] = -complexImg*qEven_[i] : qEven_[state.to_ulong()] = -complexImg*qOdd_[i];
            //add phase of i if bit was 0 (i.e. set) and flip it
            else
                parity ? qOdd_[state.to_ulong()] = complexImg*qEven_[i] : qEven_[state.to_ulong()] = complexImg*qOdd_[i];
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
                parity ? qOdd_[i] = -qEven_[i] : qEven_[i] = -qOdd_[i];
            else
                parity ? qOdd_[i] = qEven_[i] : qEven_[i] = qOdd_[i];
        }
    }
    updateLayer();
}

void QubitLayer::hadamard(int target){
    for (int i = 0; i < numStates; i++)
        if (checkZeroState(i)){
            std::bitset<numQubits> state = i;
            if (state.test(target))
                parity ? qOdd_[i] -= hadamardCoef*qEven_[i] : qEven_[i] -= hadamardCoef*qOdd_[i];
            else
                parity ? qOdd_[i] += hadamardCoef*qEven_[i] : qEven_[i] += hadamardCoef*qOdd_[i];
            state.flip(target);
            parity ? qOdd_[state.to_ulong()] += hadamardCoef*qEven_[i] : qEven_[state.to_ulong()] += hadamardCoef*qOdd_[i];
        }
    updateLayer();
}

void QubitLayer::rx(int target, precision theta){
    precision cosTheta = cos(theta/2);
    precision sinTheta = sin(theta/2);
    for (int i = 0; i < numStates; i++){
        if (checkZeroState(i)){
            std::bitset<numQubits> state = i;
            parity ? qOdd_[i] += cosTheta*qEven_[i] : qEven_[i] += cosTheta*qOdd_[i];
            state.flip(target);
            parity ? qOdd_[state.to_ulong()] += -complexImg*sinTheta*qEven_[i] : qEven_[state.to_ulong()] += -complexImg*sinTheta*qOdd_[i];
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
            parity ? qOdd_[i] += cosTheta*qEven_[i] : qEven_[i] += cosTheta*qOdd_[i];
            state.flip(target);
            //action if bit is 1 (i.e. set)
            if (state.test(target))
                parity ? qOdd_[state.to_ulong()] -= sinTheta*qEven_[i] : qEven_[state.to_ulong()] -= sinTheta*qOdd_[i];
            //action if bit is 0 (i.e. not set)
            else
                parity ? qOdd_[state.to_ulong()] += sinTheta*qEven_[i] : qEven_[state.to_ulong()] += sinTheta*qOdd_[i];
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
                parity ? qOdd_[i] += cosTheta*qEven_[i] + complexImg*sinTheta*qEven_[i] : qEven_[i] += cosTheta*qOdd_[i] + complexImg*sinTheta*qOdd_[i];
            //action if bit is 0 (i.e. not set)
            else
                parity ? qOdd_[i] += cosTheta*qEven_[i] - complexImg*sinTheta*qEven_[i] : qEven_[i] += cosTheta*qOdd_[i] - complexImg*sinTheta*qOdd_[i];

        }
    }
    updateLayer();
}

bool QubitLayer::checkControls(int *controls, int numControls, std::bitset<numQubits> state){
    int finalControl{0};
    for (int i = 0; i < numControls; i++)
        finalControl += state.test(controls[i]);
    return (numControls == finalControl);
}

void QubitLayer::cnot(int control, int target){
    for (int i = 0; i < numStates; i++){
        if (checkZeroState(i)){
            std::bitset<numQubits> state = i;
            //flip target qubit if control bit is 1 (i.e. set)
            if (state.test(control)){
                state.flip(target);
                parity ? qOdd_[state.to_ulong()] = qEven_[i] : qEven_[state.to_ulong()] = qOdd_[i];
            }
            else
                parity ? qOdd_[i] = qEven_[i] : qEven_[i] = qOdd_[i];
        }
    }
    updateLayer();
}

void QubitLayer::toffoli(int control1, int control2, int target){
    for (int i = 0; i < numStates; i++){
        if (checkZeroState(i)){
            std::bitset<numQubits> state = i;
            //flip target qubit if control bits are 1 (i.e. set)
            if (state.test(control1) && state.test(control2)){
                state.flip(target);
                parity ? qOdd_[state.to_ulong()] = qEven_[i] : qEven_[state.to_ulong()] = qOdd_[i];
            }
            else
                parity ? qOdd_[i] = qEven_[i] : qEven_[i] = qOdd_[i];
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
                parity ? qOdd_[state.to_ulong()] = qEven_[i] : qEven_[state.to_ulong()] = qOdd_[i];
            }
            else
                parity ? qOdd_[i] = qEven_[i] : qEven_[i] = qOdd_[i];
        }
    }
    updateLayer();
}

void QubitLayer::cphase(int control, int target){
    for (int i = 0; i < numStates; i++){
        if (checkZeroState(i)){
            std::bitset<numQubits> state = i;
            //add phase to target qubit if control bit and target bits are 1 (i.e. set)
            if (state.test(control) && state.test(target))
                parity ? qOdd_[i] = -qEven_[i] : qEven_[i] = -qOdd_[i];
            else
                parity ? qOdd_[i] = qEven_[i] : qEven_[i] = qOdd_[i];
        }
    }
    updateLayer();
}

void QubitLayer::mcphase(int *controls, int numControls, int target){
    for (int i = 0; i < numStates; i++){
        if (checkZeroState(i)){
            std::bitset<numQubits> state = i;
            //add phase to target qubit if control bit(s) and target bit is 1 (i.e. set)
            if (checkControls(controls, numControls, state) && state.test(target))
                parity ? qOdd_[i] = -qEven_[i] : qEven_[i] = -qOdd_[i];
            else
                parity ? qOdd_[i] = qEven_[i] : qEven_[i] = qOdd_[i];
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

qubitLayer *QubitLayer::getQubitLayerEven(){
    return qEven_;
}

qubitLayer *QubitLayer::getQubitLayerOdd(){
    return qOdd_;
}