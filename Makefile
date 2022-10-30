# get the name of the OS
OS_NAME := $(shell uname -s | tr A-Z a-z)

# compiler being used
CXX = g++

# set linker flag for OpenMP based on OS
ifeq ($(OS_NAME), darwin)
OPENMP_LINKER_FLAG = -lomp
OPENMP_FLAGS = -Xpreprocessor -fopenmp
endif
ifeq ($(OS_NAME), linux)
OPENMP_LINKER_FLAG = -lgomp
OPENMP_FLAGS = -fopenmp
endif

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
STANDARD = -std=c++17
CXXFLAGS = -g -Wall $(STANDARD)

# parallel flag for program
PROG_PARALLEL_FLAG = -p

# antlr lib flag
ANTLR_LIB_FLAG		= -lantlr4-runtime

# project directories
BENCHMARKS_DIR	= benchmarks/
SRC_DIR			= src/
TESTS_DIR		= tests/
EXAMPLES_DIR	= examples/
PARSERS_DIR		= $(SRC_DIR)parsers/

# the build target executable
TARGET = $(SRC_DIR)main

# test file
TESTS = $(TESTS_DIR)tests

# the dependencies
TARGET_DEPS  			= $(SRC_DIR)definitions.hpp
QLAYER_DEPS 			= $(SRC_DIR)QubitLayer.hpp
EXAMPLES_DEPS 			= $(EXAMPLES_DIR)qAlgorithms.hpp
TIMERS 					= $(BENCHMARKS_DIR)timers.hpp
TESTS_DEPS 				= $(TESTS_DIR)tests.hpp
QASM_PARSER_DEP 		= $(PARSERS_DIR)qasm3Parser.h
QASM_LEXER_DEP  		= $(PARSERS_DIR)qasm3Lexer.h
QASM_LISTENER_DEP		= $(PARSERS_DIR)qasm3Listener.h
QASM_BASE_LISTENER_DEP	= $(PARSERS_DIR)qasm3BaseListener.h
QASM_CUST_LISTENER_DEP	= $(PARSERS_DIR)Qasm3CustomListener.hpp
OPEN_QASM_CONSTANTS		= $(PARSERS_DIR)OpenQasmConstants.hpp

# the other source files
QUBITLAYER 			= $(SRC_DIR)QubitLayer
EXAMPLES 			= $(EXAMPLES_DIR)qAlgorithms
SINGLEQGATETIMES 	= $(BENCHMARKS_DIR)singleQGateTimes
TWOQGATETIMES 		= $(BENCHMARKS_DIR)twoQGateTimes
THREEQGATETIMES 	= $(BENCHMARKS_DIR)threeQGateTimes
EPR 				= $(BENCHMARKS_DIR)epr
QASM_PARSER			= $(PARSERS_DIR)qasm3Parser
QASM_LEXER			= $(PARSERS_DIR)qasm3Lexer
QASM_LISTENER		= $(PARSERS_DIR)qasm3Listener
QASM_BASE_LISTENER	= $(PARSERS_DIR)qasm3BaseListener
QASM_CUST_LISTENER	= $(PARSERS_DIR)Qasm3CustomListener

# list of object files
objectFiles = $(TARGET).o $(QUBITLAYER).o $(EXAMPLES).o $(SINGLEQGATETIMES).o $(TWOQGATETIMES).o $(THREEQGATETIMES).o $(EPR).o $(TESTS).o $(QASM_PARSER).o $(QASM_LEXER).o $(QASM_LISTENER).o $(QASM_BASE_LISTENER).o $(QASM_CUST_LISTENER).o

#list of executables
executables = $(TARGET) $(SINGLEQGATETIMES) $(TWOQGATETIMES) $(THREEQGATETIMES) $(EPR) $(TESTS)

# debug directory
DEBUG = main.dSYM

# colours
BLUE     = \033[34;34m
CYAN     = \033[36;36m
GREEN    = \033[32;32m
RED      = \033[31;31m
YELLOW   = \033[33;33m
MAGENTA  = \033[35;35m
NO_COLOR = \033[m

# info strings
SUCCESS_STRING    = "Compiled\ successfully!"
WARNING_STRING	  = "Warning:\ "
COM_STRING	      = "Compiling"
LINK_STRING	      = "Linking"
OK_STRING	      = "OK"
TESTS_STRING      = "Running\ tests..."
BENCHMARKS_STRING = "Running\ benchmarks..."
OPENMP_NOT_FOUND  = "OpenMP\ not\ found.\ Making\ QuantumSim\ without\ it"

all: $(TARGET)

$(TARGET): $(TARGET).o $(QUBITLAYER).o $(QASM_LEXER).o $(QASM_PARSER).o $(QASM_BASE_LISTENER).o $(QASM_LISTENER).o $(QASM_CUST_LISTENER).o
	@if $(CXX) $(CXXFLAGS) $(OPENMP_LINKER_FLAG) -o $(TARGET) $(TARGET).o $(QUBITLAYER).o $(QASM_LEXER).o $(QASM_PARSER).o $(QASM_BASE_LISTENER).o $(QASM_LISTENER).o $(QASM_CUST_LISTENER).o $(ANTLR_LIB_FLAG) ; then \
		printf "%b" "$(CYAN)$(LINK_STRING)   $(NO_COLOR)$(TARGET).o $(QUBITLAYER).o $(QASM_LEXER).o $(QASM_PARSER).o $(QASM_BASE_LISTENER).o $(QASM_LISTENER).o $(QASM_CUST_LISTENER).o"; \
		$(CXX) $(CXXFLAGS) $(OPENMP_LINKER_FLAG) -o $(TARGET) $(TARGET).o $(QUBITLAYER).o $(QASM_LEXER).o $(QASM_PARSER).o $(QASM_BASE_LISTENER).o $(QASM_LISTENER).o $(QASM_CUST_LISTENER).o $(ANTLR_LIB_FLAG) ; \
	else \
		printf "%b" "$(YELLOW)$(WARNING_STRING)$(NO_COLOR) $(OPENMP_NOT_FOUND)\n" ; \
		printf "%b" "$(CYAN)$(LINK_STRING)   $(NO_COLOR)$(TARGET).o $(QUBITLAYER).o $(QASM_LEXER).o $(QASM_PARSER).o $(QASM_BASE_LISTENER).o $(QASM_LISTENER).o $(QASM_CUST_LISTENER).o "; \
		$(CXX) $(CXXFLAGS) -o $(TARGET) $(TARGET).o $(QUBITLAYER).o $(QASM_LEXER).o $(QASM_PARSER).o $(QASM_BASE_LISTENER).o $(QASM_LISTENER).o $(QASM_CUST_LISTENER).o $(ANTLR_LIB_FLAG); \
	fi;
	@printf "%b" "$(GREEN)$(OK_STRING)\n"
	@printf "%b" "$(GREEN)$(SUCCESS_STRING)$(NO_COLOR)\n";

$(TARGET).o: $(TARGET).cpp $(TARGET_DEPS) $(QLAYER_DEPS)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)                             				    	 "
	@$(CXX) $(CXXFLAGS) -I$(PARSERS_DIR) -I$(SRC_DIR) -c $(TARGET).cpp -o $(TARGET).o
	@printf "%b" "$(GREEN)$(OK_STRING)$(NO_COLOR)\n"

$(QUBITLAYER).o: $(QUBITLAYER).cpp $(TARGET_DEPS) $(QLAYER_DEPS)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)                       				    	 "
	@$(CXX) $(CXXFLAGS) -c $(QUBITLAYER).cpp -o $(QUBITLAYER).o
	@printf "%b" "$(GREEN)$(OK_STRING)$(NO_COLOR)\n"

$(EXAMPLES).o: $(EXAMPLES).cpp $(TARGET_DEPS) $(QLAYER_DEPS) $(EXAMPLES_DEPS)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)                      				"
	@$(CXX) $(CXXFLAGS) -c $(EXAMPLES).cpp -o $(EXAMPLES).o
	@printf "%b" "$(GREEN)$(OK_STRING)$(NO_COLOR)\n"

$(QASM_LEXER).o: $(QASM_LEXER).cpp $(QASM_LEXER_DEP)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)                      				 "
	@$(CXX) $(CXXFLAGS) -I$(PARSERS_DIR) -c $(QASM_LEXER).cpp -o $(QASM_LEXER).o
	@printf "%b" "$(GREEN)$(OK_STRING)$(NO_COLOR)\n"

$(QASM_PARSER).o: $(QASM_PARSER).cpp $(QASM_PARSER_DEP) $(QASM_LISTENER_DEP)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)                      				 "
	@$(CXX) $(CXXFLAGS) -I$(PARSERS_DIR) -c $(QASM_PARSER).cpp -o $(QASM_PARSER).o
	@printf "%b" "$(GREEN)$(OK_STRING)$(NO_COLOR)\n"

$(QASM_BASE_LISTENER).o: $(QASM_BASE_LISTENER).cpp $(QASM_BASE_LISTENER_DEP) $(QASM_LISTENER_DEP)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)                      				 "
	@$(CXX) $(CXXFLAGS) -I$(PARSERS_DIR) -c $(QASM_BASE_LISTENER).cpp -o $(QASM_BASE_LISTENER).o
	@printf "%b" "$(GREEN)$(OK_STRING)$(NO_COLOR)\n"

$(QASM_LISTENER).o: $(QASM_LISTENER).cpp $(QASM_LISTENER_DEP)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)                      				 "
	@$(CXX) $(CXXFLAGS) -I$(PARSERS_DIR) -c $(QASM_LISTENER).cpp -o $(QASM_LISTENER).o
	@printf "%b" "$(GREEN)$(OK_STRING)$(NO_COLOR)\n"

$(QASM_CUST_LISTENER).o: $(QASM_CUST_LISTENER).cpp $(QASM_CUST_LISTENER_DEP) $(QLAYER_DEPS) $(OPEN_QASM_CONSTANTS)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)                      			 "
	@$(CXX) $(CXXFLAGS) -I$(PARSERS_DIR) -I$(SRC_DIR) -c $(QASM_CUST_LISTENER).cpp -o $(QASM_CUST_LISTENER).o
	@printf "%b" "$(GREEN)$(OK_STRING)$(NO_COLOR)\n"

benchmark: 
	@make singleQBenchmark
	@make twoQBenchmark
	@make threeQBenchmark
	@printf "%b" "$(BLUE)$(BENCHMARKS_STRING)$(NO_COLOR)\n"
	@printf "%b" "$(BLUE)=================Gate Times==================$(NO_COLOR)\n"
	@./$(SINGLEQGATETIMES)
	@./$(TWOQGATETIMES)
	@./$(THREEQGATETIMES)
	@printf "%b" "$(BLUE)=============================================$(NO_COLOR)\n"
	@$(RM) $(executables)
singleQBenchmark: $(SINGLEQGATETIMES)
twoQBenchmark: $(TWOQGATETIMES)
threeQBenchmark: $(THREEQGATETIMES)

$(SINGLEQGATETIMES): $(SINGLEQGATETIMES).o $(QUBITLAYER).o
	@printf "%b" "$(CYAN)$(LINK_STRING)   $(NO_COLOR)$(SINGLEQGATETIMES).o $(QUBITLAYER).o			"
	@$(CXX) $(CXXFLAGS) $(OPENMP_LINKER_FLAG) -o $(SINGLEQGATETIMES) $(SINGLEQGATETIMES).o $(QUBITLAYER).o
	@printf "%b" "$(GREEN)$(OK_STRING)\n"
	@if [ -a $(SINGLEQGATETIMES) ] ; \
	then printf "%b" "$(GREEN)$(SUCCESS_STRING)$(NO_COLOR)\n"; \
	fi;
	@$(RM) $(objectFiles)

$(TWOQGATETIMES): $(TWOQGATETIMES).o $(QUBITLAYER).o
	@printf "%b" "$(CYAN)$(LINK_STRING)   $(NO_COLOR)$(TWOQGATETIMES).o $(QUBITLAYER).o 				"
	@$(CXX) $(CXXFLAGS) $(OPENMP_LINKER_FLAG) -o $(TWOQGATETIMES) $(TWOQGATETIMES).o $(QUBITLAYER).o
	@printf "%b" "$(GREEN)$(OK_STRING)\n"
	@if [ -a $(TWOQGATETIMES) ] ; \
	then printf "%b" "$(GREEN)$(SUCCESS_STRING)$(NO_COLOR)\n"; \
	fi;
	@$(RM) $(objectFiles)

$(THREEQGATETIMES): $(THREEQGATETIMES).o $(QUBITLAYER).o
	@printf "%b" "$(CYAN)$(LINK_STRING)   $(NO_COLOR)$(THREEQGATETIMES).o $(QUBITLAYER).o 			"
	@$(CXX) $(CXXFLAGS) $(OPENMP_LINKER_FLAG) -o $(THREEQGATETIMES) $(THREEQGATETIMES).o $(QUBITLAYER).o
	@printf "%b" "$(GREEN)$(OK_STRING)\n"
	@if [ -a $(THREEQGATETIMES) ] ; \
	then printf "%b" "$(GREEN)$(SUCCESS_STRING)$(NO_COLOR)\n"; \
	fi;
	@$(RM) $(objectFiles)

$(SINGLEQGATETIMES).o: $(SINGLEQGATETIMES).cpp $(TARGET_DEPS) $(QLAYER_DEPS) $(TIMERS)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)                          		"
	@$(CXX) $(CXXFLAGS) -c $(SINGLEQGATETIMES).cpp -o $(SINGLEQGATETIMES).o
	@printf "%b" "$(GREEN)$(OK_STRING)\n"

$(TWOQGATETIMES).o: $(TWOQGATETIMES).cpp $(TARGET_DEPS) $(QLAYER_DEPS) $(TIMERS)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)                          			"
	@$(CXX) $(CXXFLAGS) -c $(TWOQGATETIMES).cpp -o $(TWOQGATETIMES).o
	@printf "%b" "$(GREEN)$(OK_STRING)\n"

$(THREEQGATETIMES).o: $(THREEQGATETIMES).cpp $(TARGET_DEPS) $(QLAYER_DEPS) $(TIMERS)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)                          		"
	@$(CXX) $(CXXFLAGS) -c $(THREEQGATETIMES).cpp -o $(THREEQGATETIMES).o
	@printf "%b" "$(GREEN)$(OK_STRING)\n"

eprBenchmark: $(EPR)

$(EPR): $(EPR).o $(QUBITLAYER).o
	@printf "%b" "$(CYAN)$(LINK_STRING)   $(NO_COLOR)$(EPR).o $(QUBITLAYER).o					"
	@$(CXX) $(CXXFLAGS) $(OPENMP_LINKER_FLAG) -o $(EPR) $(EPR).o $(QUBITLAYER).o
	@printf "%b" "$(GREEN)$(OK_STRING)\n"
	@if [ -a $(EPR) ] ; \
		then printf "%b" "$(GREEN)$(SUCCESS_STRING)$(NO_COLOR)\n"; \
	fi;
	@./$(EPR)
	@$(RM) $(executables) $(objectFiles)

$(EPR).o: $(BENCHMARKS)$(EPR).cpp $(TARGET_DEPS) $(QLAYER_DEPS) $(TIMERS)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)                          				"
	@$(CXX) $(CXXFLAGS) -c $(EPR).cpp -o $(EPR).o
	@printf "%b" "$(GREEN)$(OK_STRING)\n"

cleanObj:
	@printf "%b" "$(MAGENTA)Removing $(NO_COLOR)object files 									 "
	@$(RM) $(objectFiles)
	@printf "%b" "$(GREEN)$(OK_STRING)$(NO_COLOR)\n"

clean:
	@printf "%b" "$(MAGENTA)Removing $(NO_COLOR)executables and object files 							 "
	@$(RM) $(executables) $(objectFiles)
	@printf "%b" "$(GREEN)$(OK_STRING)$(NO_COLOR)\n"

# testing
check: $(TESTS)

$(TESTS): $(TESTS).o $(QUBITLAYER).o
	@if $(CXX) $(CXXFLAGS) $(OPENMP_LINKER_FLAG) -o $(TESTS) $(TESTS).o $(QUBITLAYER).o; then \
		printf "%b" "$(CYAN)$(LINK_STRING)   $(NO_COLOR)$(TESTS).o $(QUBITLAYER).o					"; \
		$(CXX) $(CXXFLAGS) $(OPENMP_LINKER_FLAG) -o $(TESTS) $(TESTS).o $(QUBITLAYER).o; \
		printf "%b" "$(GREEN)$(OK_STRING)\n"; \
		printf "%b" "$(GREEN)$(SUCCESS_STRING) $(TESTS_STRING)$(NO_COLOR)\n"; \
		./$(TESTS) $(PROG_PARALLEL_FLAG); \
	else \
		printf "%b" "$(YELLOW)$(WARNING_STRING)$(NO_COLOR) $(OPENMP_NOT_FOUND)\n" ; \
		printf "%b" "$(CYAN)$(LINK_STRING)   $(NO_COLOR)$(TESTS).o $(QUBITLAYER).o					"; \
		$(CXX) $(CXXFLAGS) -o $(TESTS) $(TESTS).o $(QUBITLAYER).o; \
		printf "%b" "$(GREEN)$(OK_STRING)\n"; \
		printf "%b" "$(GREEN)$(SUCCESS_STRING) $(TESTS_STRING)$(NO_COLOR)\n"; \
		./$(TESTS); \
	fi;
	@$(RM) $(executables) $(objectFiles)

$(TESTS).o: $(TESTS).cpp $(TARGET_DEPS) $(QLAYER_DEPS) $(TESTS_DEPS)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)                             				"
	@$(CXX) $(CXXFLAGS) $(OPENMP_FLAGS) -c $(TESTS).cpp -o $(TESTS).o
	@printf "%b" "$(GREEN)$(OK_STRING)\n"