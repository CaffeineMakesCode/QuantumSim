#include <complex>
#include <iostream>
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

bool QubitLayer::checkControls(int *controls, int numControls, std::bitset<numQubits> state){
    int finalControl{0};
    for (int i = 0; i < numControls; i++)
        finalControl += state.test(controls[i]);
    return (numControls == finalControl);
}

void QubitLayer::cnot(int *controls, int numControls, int target){
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
        //reverse(state.begin(), state.end());
        std::cout<<qL_[i*2]<<", ";
        std::cout<<"|"<<state<<">\n"; 
    }
}