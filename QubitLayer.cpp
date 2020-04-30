#include <complex>
#include <iostream>
#include "QubitLayer.h"

QubitLayer::QubitLayer(qubitLayer *qL){
    qL_ = new qubitLayer[numStates*2];
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
        std::bitset<numQubits> oldStateVec = i;
        oldStateVec.flip(target);
        qL_[2*oldStateVec.to_ulong()+1] = qL_[2*i];
    }
    updateLayer();
}


void QubitLayer::pauliY(int target){
    for (int i = 0; i < numStates; i++){
        std::bitset<numQubits> oldStateVec = i;
        //add phase of i if bit is 0 (i.e. set)
        if (!oldStateVec.test(target)){
            oldStateVec.flip(target);
            qL_[2*oldStateVec.to_ulong()+1] = complexImg*qL_[2*i];
        }
        //add phase of -i if bit is 1 (i.e. set)
        else{
            oldStateVec.flip(target);
            qL_[2*oldStateVec.to_ulong()+1] = -complexImg*qL_[2*i];
        }
    }
    updateLayer();
}

void QubitLayer::pauliZ(int target){
    for (int i = 0; i < numStates; i++){
        if (abs(qL_[2*i]) > 0){
            std::bitset<numQubits> oldStateVec = i;
            //add phase if bit is 1 (i.e. it is set)
            if (oldStateVec.test(target))
                qL_[2*i+1] = -qL_[2*i];
            else
                qL_[2*i+1] = qL_[2*i];
        }
    }
    updateLayer();
}

void QubitLayer::printQubits(){
    std::cout<<"State "<<"old "<<"new \n";
    for (int i = 0; i < numStates; i++){
        std::bitset<numQubits> binaryRep = i;
        std::string state = binaryRep.to_string();
        reverse(state.begin(), state.end());
        std::cout<<"|"<<state<<"> "; 
        std::cout<<qL_[i*2]<<" "<<qL_[i*2+1]<<"\n";
    }
}