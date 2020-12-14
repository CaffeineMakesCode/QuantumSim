#include <complex>
#include "rQXInterface.hpp"
#include "QubitLayer.hpp"
#include <cqasm.hpp>

rQXInterface::rQXInterface(){
 
};

// Calls individual gates and keeps track of qubit state and measurement results etc.
int rQXInterface::execute()
{
    QubitLayer q(_numQubits);
    // DEBUG
    // std::cout << "printQubits in execute()" << std::endl;
    // q.printQubits();
    for (auto subcircuit : _program->subcircuits)
    {
        // subcircuit name
        // subcircuit iterations
        std::cout << subcircuit->name << "\n";

        execute_circuit(subcircuit, q);
    }

    q.printMeasurement();

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

int rQXInterface::execute_circuit(tree::base::One<cqasm::semantic::Subcircuit> circuit, QubitLayer qubitLayer)
{
    // DEBUG
    // std::cout << "printQubits in execute_circuit()" << std::endl;
    // qubitLayer.printQubits();
    for (auto line : circuit->bundles)
    {
        // operation size: parallel or single
        // operation name
        // operation parameters: qubits (as_qubit_refs(), size,
        
        if (line.size() == 1) // a single operation
        {
            auto operation = line->items[0];
            std::string name = operation->name;
            std::cout << "gate: " << name << "\n";
            // std::cout << "operands: " << operation->operands << "\n";

            // auto parameter_0 = operation->operands[0]->as_qubit_refs();
            // // auto parameter_0 = operation->operands[0];
            // std::cout << "parameter_0: " << parameter_0->index[0]->value << "\n";

            if (name == "hadamard" || name == "h")
            {
                auto parameter_0 = operation->operands[0]->as_qubit_refs();
                qubitLayer.hadamard(parameter_0->index[0]->value);
            } else if (name == "identity" || name == "i")
            { 

            } else if (name == "x"){
                auto parameter_0 = operation->operands[0]->as_qubit_refs();
                qubitLayer.pauliX(parameter_0->index[0]->value);
            } else if (name == "y"){
                auto parameter_0 = operation->operands[0]->as_qubit_refs();
                qubitLayer.pauliY(parameter_0->index[0]->value);
            } else if (name == "z"){
                auto parameter_0 = operation->operands[0]->as_qubit_refs();
                qubitLayer.pauliZ(parameter_0->index[0]->value);
            } else if (name == "rx"){
                auto parameter_0 = operation->operands[0]->as_qubit_refs();
                auto parameter_1 = operation->operands[1]->as_const_real();
                qubitLayer.rx(parameter_0->index[0]->value, parameter_1->value);
            } else if (name == "ry"){
                auto parameter_0 = operation->operands[0]->as_qubit_refs();
                auto parameter_1 = operation->operands[1]->as_const_real();
                qubitLayer.ry(parameter_0->index[0]->value, parameter_1->value);
            } else if (name == "rz"){
                auto parameter_0 = operation->operands[0]->as_qubit_refs();
                auto parameter_1 = operation->operands[1]->as_const_real();
                qubitLayer.rz(parameter_0->index[0]->value, parameter_1->value);
            } else if (name == "cnot"){
                auto parameter_0 = operation->operands[0]->as_qubit_refs();
                auto parameter_1 = operation->operands[1]->as_qubit_refs();
                qubitLayer.rx(parameter_0->index[0]->value, parameter_1->index[0]->value);
            } else if (name == "toffoli"){
                auto parameter_0 = operation->operands[0]->as_qubit_refs();
                auto parameter_1 = operation->operands[1]->as_qubit_refs();
                auto parameter_2 = operation->operands[2]->as_qubit_refs();
                qubitLayer.toffoli(parameter_0->index[0]->value, parameter_1->index[0]->value, parameter_2->index[0]->value);
            } else if (name == "measure"){
                auto parameter_0 = operation->operands[0]->as_qubit_refs();
                qubitLayer.measure(parameter_0->index[0]->value);
            } else {
                std::cout << "gate name: " << name << " unknown" << std::endl;
            }
            // DEBUG
            qubitLayer.printQubits();
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