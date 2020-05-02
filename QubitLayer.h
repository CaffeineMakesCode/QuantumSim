#ifndef QUBITLAYER_H
#define QUBITLAYER_H
#include "definitions.h"

struct qProb{
    std::bitset<numQubits> state;
    double prob;
};

class QubitLayer{
    public:
        QubitLayer(qubitLayer *qL = nullptr);
        ~QubitLayer();
        void pauliX(int target);
        void pauliY(int target);
        void pauliZ(int target);
        void hadamard(int target);
        bool checkControls(int *controls, int numControls, std::bitset<numQubits> state);
        void cnot(int *controls, int numControls, int target);
        void cphase(int *controls, int numControls, int target);
        qProb getMaxAmplitude();
        void updateLayer();
        void printQubits();
    private:
        qubitLayer *qL_;
};

#endif