# QuantumSim

![Generic badge](https://img.shields.io/badge/Version-0.10-blue.svg)
[![Generic badge](https://img.shields.io/badge/License-MIT-green.svg)](https://opensource.org/licenses/MIT)

QuantumSim is a simulator for quantum computing.

## Cloning and checking

Clone the repository
```zsh 
git clone https://github.com/CaffeineMakesCode/QuantumSim
```
Run the checks from the root folder
```zsh 
cd <path-to-repository>/QuantumSim && make check
```
___
## Usage
The `QubitLayer` class in `src/QubitLayer.cpp` defines the functions for the quantum gates and the arrays that store the amplitudes for the qubits. The table below lists the functions that can be used by a `QubitLayer` object. `precision` is a `typedef` for `double`.
| Quantum Gate               | Function                                             |
| ---------------------------|------------------------------------------------------|
| Pauli X                    | `pauliX(int target)`                                 |
| Pauli Y                    | `pauliY(int target)`                                 |
| Pauli Z                    | `pauliZ(int target)`                                 |
| Hadamard                   | `hadamard(int target)`                               |
| Rotation X                 | `rx(int target, precision theta)`                    |
| Rotation Y                 | `ry(int target, precision theta)`                    |
| Rotation Z                 | `rz(int target, precision theta)`                    |
| Controlled NOT             | `cnot(int control, int target)`                      |
| Toffoli                    | `toffoli(int control1, int control2, int target)`    |
| Multiple controlled CNOT   | `mcnot(int *controls, int numControls, int target)`  |
| Controlled Phase           | `cphase(int control, int target)`                    |
| Multiple controlled Phase  | `mcphase(int *controls, int numControls, int target)`| 
___
## Example

Running a quantum circuit is done by writing the circuit in `src/main.cpp`.
```cpp 
#include <iostream>
#include <complex>
#include "QubitLayer.hpp"
#include "qAlgorithms.hpp"

int main(){
    // create a QubitLayer object
    QubitLayer q;
    // apply a hadamard gate
    q.hadamard(0);
    // apply cnot on the 2 qubits
    q.cnot(0, 1);
    // print qubits
    q.printQubits();
}
```
This circuit creates an EPR pair.

By default when a `QubitLayer` object is created, it is initialised with 2 qubits. To setup a larger quantum circuit, a `QubitLayer` object can be constructed using arguments.
```cpp 
#include <iostream>
#include <complex>
#include "QubitLayer.hpp"
#include "qAlgorithms.hpp"

int main(){
    // create a QubitLayer object with 4 qubits
    QubitLayer q(4);
    // apply hadamard gates
    q.hadamard(0);
    q.hadamard(2);
    // apply cnot gates
    q.cnot(0, 1);
    q.cnot(2, 3);
    // print qubits
    q.printQubits();
}
```
___
## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.