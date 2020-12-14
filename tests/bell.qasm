version 1.0
#define a quantum register of 2 qubits
qubits 2

#Prep
#{prep_z q[0] | prep_z q[1]}

# create a Bell pair via a Hadamard rotation
#h q[0]
x q[0]
#y q[0]
cnot q[0],q[1]
#rx q[1], 3.787868

# measure both qubits to test correlations
measure q[0]
measure q[1]

