#ifndef QUBITLAYER_H
#define QUBITLAYER_H
#include <bitset>
#include "definitions.hpp"

struct qProb{
    std::bitset<maxQubits> state;
    precision prob;
};

class QubitLayer{
    public:
        QubitLayer(unsigned int numQubits, qubitLayer *qL = nullptr);
        ~QubitLayer();
        void pauliX(int target);
        void pauliY(int target);
        void pauliZ(int target);
        void hadamard(int target);
        void rx(int target, precision theta);
        void ry(int target, precision theta);
        void rz(int target, precision theta);
        void cnot(int control, int target);
        void toffoli(int control1, int control2, int target);
        void mcnot(int *controls, int numControls, int target);
        void cphase(int control, int target);
        void mcphase(int *controls, int numControls, int target);
        qProb getMaxAmplitude();
        void printMeasurement();
        void printQubits();
        qubitLayer *getQubitLayerEven();
        qubitLayer *getQubitLayerOdd();
        unsigned long long int getNumStates();
        unsigned int getNumQubits();
    private:
        bool checkControls(int *controls, int numControls, std::bitset<maxQubits> state);
        bool checkZeroState(int qubit);
        void updateLayer();
        void toggleParity();
        unsigned int numQubits;
        unsigned long long int numStates;
        qubitLayer *qEven_;
        qubitLayer *qOdd_;
        bool parity = true;
};

#endif