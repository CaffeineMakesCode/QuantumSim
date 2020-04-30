#ifndef QUBITLAYER_H
#define QUBITLAYER_H
#include "definitions.h"

class QubitLayer{
    public:
        QubitLayer(qubitLayer *qL = nullptr);
        ~QubitLayer();
        void pauliX(int target);
        void pauliY(int target);
        void pauliZ(int target);
        void hadamard(int target);
        void cnot(int control, int target);
        void cphase(int control, int target);
        void updateLayer();
        void printQubits();
    private:
        qubitLayer *qL_;
};

#endif