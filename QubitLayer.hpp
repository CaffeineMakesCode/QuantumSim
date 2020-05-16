#ifndef QUBITLAYER_H
#define QUBITLAYER_H
#include "definitions.hpp"

struct qProb{
    std::bitset<numQubits> state;
    precision prob;
};

class QubitLayer{
    public:
        QubitLayer(qubitLayer *qL = nullptr);
        ~QubitLayer();
        void pauliX(int target);
        void pauliY(int target);
        void pauliZ(int target);
        void hadamard(int target);
        void rx(int target, precision theta);
        void ry(int target, precision theta);
        void rz(int target, precision theta);
        bool checkControls(int *controls, int numControls, std::bitset<numQubits> state);
        void cnot(int control, int target);
        void toffoli(int control1, int control2, int target);
        void mcnot(int *controls, int numControls, int target);
        void cphase(int control, int target);
        void mcphase(int *controls, int numControls, int target);
        qProb getMaxAmplitude();
        void updateLayer();
        void printMeasurement();
        void printQubits();
    private:
        qubitLayer *qL_;
};

#endif