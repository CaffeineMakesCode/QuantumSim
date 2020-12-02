
#ifndef RQXINTERFACE_H
#define RQXINTERFACE_H
#include "qInterface.hpp"
#include "QubitLayer.hpp"
#include <cqasm.hpp>

class rQXInterface : public qInterface {
    public:
        int execute();
        int set_state(int* state_vec);
        int add_circuit();
        int execute_circuit(tree::base::One<cqasm::semantic::Subcircuit> circuit);
        int* get_state();
        int set_qasm(std::string path);
        rQXInterface();
        virtual ~rQXInterface();
    private:
        QubitLayer _qubitLayer ;
        int _numQubits;
        cqasm::tree::One<cqasm::semantic::Program> _program;
        
};

#endif