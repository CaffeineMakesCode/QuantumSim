#ifndef OPENQASM_CONSTANTS_H
#define OPENQASM_CONSTANTS_H
#include <string_view>

constexpr std::string_view OPENQASM_X_GATE{"x"};
constexpr std::string_view OPENQASM_Y_GATE{"y"};
constexpr std::string_view OPENQASM_Z_GATE{"z"};
constexpr std::string_view OPENQASM_HADAMARD_GATE{"h"};
constexpr std::string_view OPENQASM_RX_GATE{"rx"};
constexpr std::string_view OPENQASM_RY_GATE{"ry"};
constexpr std::string_view OPENQASM_RZ_GATE{"rz"};
constexpr std::string_view OPENQASM_CNOT_GATE{"cx"};
constexpr std::string_view OPENQASM_TOFFOLI_GATE{"ccx"};
constexpr std::string_view OPENQASM_CPHASE_GATE{"cphase"};

#endif