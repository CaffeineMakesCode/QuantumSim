#include <complex>
#include <iostream>
#include <cmath>
#include "QubitLayer.h"

QubitLayer::QubitLayer(qubitLayer *qL){
    qL_ = new qubitLayer[numStates*2];
    qL_[0] = {1,0};
    if (!(qL == nullptr)){
        for (int row=0; row<(numStates*2); row++)
            qL_[row] = qL[row];
    }
}

QubitLayer::~QubitLayer(){
    delete [] qL_;
}

void QubitLayer::updateLayer(){
    for (int i = 0; i < numStates; i++){
        qL_[2*i] = qL_[2*i+1];
        qL_[2*i+1] = {0,0};
    }
}

void QubitLayer::pauliX(int target){
    for (int i = 0; i < numStates; i++){
        if (abs(qL_[2*i]) > 0){
            std::bitset<numQubits> state = i;
            state.flip(target);
            qL_[2*state.to_ulong()+1] = qL_[2*i];
        }
    }
    updateLayer();
}

void QubitLayer::pauliY(int target){
    for (int i = 0; i < numStates; i++){
        if (abs(qL_[2*i]) > 0){
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
        if (abs(qL_[2*i]) > 0){
            std::bitset<numQubits> state = i;
            //add phase if bit is 1 (i.e. it is set)
            if (state.test(target))
                qL_[2*i+1] = -qL_[2*i];
            else
                qL_[2*i+1] = qL_[2*i];
        }
    }
    updateLayer();
}

void QubitLayer::hadamard(int target){
    for (int i = 0; i < numStates; i++){
        if (abs(qL_[2*i]) > 0){
            std::bitset<numQubits> state = i;
            //change to |-> if bit is 1 (i.e. set)
            if (state.test(target)){
                qL_[2*i+1] += -hadamardCoef*qL_[2*i];
                state.flip(target);
                qL_[2*state.to_ulong()+1] += hadamardCoef*qL_[2*i];
            }
            //change to |+> if bit is 0 (i.e. not set)
            else{
                qL_[2*state.to_ulong()+1] += hadamardCoef*qL_[2*i];
                state.flip(target);
                qL_[2*state.to_ulong()+1] += hadamardCoef*qL_[2*i];
            }
        }
    }
    updateLayer();
}

void QubitLayer::rx(int target, precision theta){
    precision cosTheta = cos(theta/2);
    precision sinTheta = sin(theta/2);
    for (int i = 0; i < numStates; i++){
        if (abs(qL_[2*i]) > 0){
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
        if (abs(qL_[2*i]) > 0){
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
        if (abs(qL_[2*i]) > 0){
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
}

bool QubitLayer::checkControls(int *controls, int numControls, std::bitset<numQubits> state){
    int finalControl{0};
    for (int i = 0; i < numControls; i++)
        finalControl += state.test(controls[i]);
    return (numControls == finalControl);
}

void QubitLayer::cnot(int control, int target){
    for (int i = 0; i < numStates; i++){
        if (abs(qL_[2*i]) > 0){
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
        if (abs(qL_[2*i]) > 0){
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
        if (abs(qL_[2*i]) > 0){
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

void QubitLayer::cphase(int *controls, int numControls, int target){
    for (int i = 0; i < numStates; i++){
        if (abs(qL_[2*i]) > 0){
            std::bitset<numQubits> state = i;
            //add phase to target qubit if control bit(s) is 1 (i.e. set)
            if (checkControls(controls, numControls, state) && state.test(target))
                qL_[2*i+1] = -qL_[2*i];
            else
                qL_[2*i+1] = qL_[2*i];
        }
    }
    updateLayer();
}

qProb QubitLayer::getMaxAmplitude(){
    std::bitset<numQubits> state;
    qProb result;
    float currentProb{0};
    float previousProb{0};
    for (int i = 0; i < numStates; i++){
        state = i;
        currentProb = abs(qL_[2*i]);
        if (currentProb > previousProb){
            result.state = state;
            result.prob = currentProb;
        }
        previousProb = currentProb;
    }
    return result;
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
        std::cout<<qL_[i*2]<<", ";
        std::cout<<"|"<<state<<">\n"; 
    }
}