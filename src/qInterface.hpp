#ifndef INTERFACE_H
#define INTERFACE_H
#include <complex>

class qInterface{
    public:
        virtual int execute() = 0;
        virtual int set_state(int* state_vec) = 0;
        virtual int add_circuit() = 0;
        virtual int* get_state() = 0;
        virtual int set_qasm(std::string path) = 0;
        virtual ~qInterface();
        // qInterface();
        
};

#endif