#include <complex>
#include "rQXInterface.hpp"
#include "QubitLayer.hpp"
#include <cqasm.hpp>

rQXInterface::rQXInterface(): _qubitLayer(0){
};

// Calls individual gates and keeps track of qubit state and measurement results etc.
int rQXInterface::execute()
{
    _qubitLayer = QubitLayer(_numQubits);

    for (auto subcircuit : _program->subcircuits)
    {
        // subcircuit name
        // subcircuit iterations
        std::cout << subcircuit->name << "\n";

        execute_circuit(subcircuit);
    }

    _qubitLayer.printMeasurement();

    return 0;
};

int rQXInterface::set_state(int *state_vec)
{
    return 0;
};
int rQXInterface::add_circuit()
{
    return 0;
};

int rQXInterface::execute_circuit(tree::base::One<cqasm::semantic::Subcircuit> circuit)
{
    for (auto line : circuit->bundles)
    {
        // operation size: parallel or single
        // operation name
        // operation parameters: qubits (as_qubit_refs(), size,

        if (line.size() == 1) // a single operation
        {
            auto operation = line->items[0];
            std::string name = operation->name;
            std::cout << "name: " << name << "\n";

            // auto parameter_0 = operation->operands[0]->as_qubit_refs();
            // // auto parameter_0 = operation->operands[0];
            // std::cout << "parameter_0: " << parameter_0->index[0]->value << "\n";

            if (name == "hadamard" || name == "h")
            {
                auto parameter_0 = operation->operands[0]->as_qubit_refs();
                _qubitLayer.hadamard(parameter_0->index[0]->value);
            } else if (name == "identity" || name == "i")
            { 

            } else if (name == "x"){
                auto parameter_0 = operation->operands[0]->as_qubit_refs();
                _qubitLayer.pauliX(parameter_0->index[0]->value);
            } else if (name == "y"){
                auto parameter_0 = operation->operands[0]->as_qubit_refs();
                _qubitLayer.pauliY(parameter_0->index[0]->value);
            } else if (name == "z"){
                auto parameter_0 = operation->operands[0]->as_qubit_refs();
                _qubitLayer.pauliZ(parameter_0->index[0]->value);
            } else if (name == "rx"){
                auto parameter_0 = operation->operands[0]->as_qubit_refs();
                auto parameter_1 = operation->operands[1]->as_const_real();
                _qubitLayer.rx(parameter_0->index[0]->value, parameter_1->value);
            } else if (name == "ry"){
                auto parameter_0 = operation->operands[0]->as_qubit_refs();
                auto parameter_1 = operation->operands[1]->as_const_real();
                _qubitLayer.ry(parameter_0->index[0]->value, parameter_1->value);
            } else if (name == "rz"){
                auto parameter_0 = operation->operands[0]->as_qubit_refs();
                auto parameter_1 = operation->operands[1]->as_const_real();
                _qubitLayer.rz(parameter_0->index[0]->value, parameter_1->value);
            } else if (name == "cnot"){
                auto parameter_0 = operation->operands[0]->as_qubit_refs();
                auto parameter_1 = operation->operands[1]->as_qubit_refs();
                _qubitLayer.rx(parameter_0->index[0]->value, parameter_1->index[0]->value);
            } else if (name == "toffoli"){
                auto parameter_0 = operation->operands[0]->as_qubit_refs();
                auto parameter_1 = operation->operands[1]->as_qubit_refs();
                auto parameter_2 = operation->operands[2]->as_qubit_refs();
                _qubitLayer.toffoli(parameter_0->index[0]->value, parameter_1->index[0]->value, parameter_2->index[0]->value);
            // } else if (name == "measure"){
            //     auto parameter_0 = operation->operands[0]->as_qubit_refs();
            //     // _qubitLayer.pauliX(parameter_0->index[0]->value);

            } else {
                std::cout << "gate name: " << name << " unknown" << std::endl;
            }
        };
    };
    return 0;
};

int *rQXInterface::get_state()
{
    return 0;
};
int rQXInterface::set_qasm(std::string path)
{
    auto result = cqasm::analyze(path, "1.0");
    std::cout << "Analysis successful"
              << "\n";
    _numQubits = result->num_qubits;
    std::cout << "Number of qubits:" << _numQubits << "\n";

    _program = result;
    return 0;
};

rQXInterface::~rQXInterface(){};