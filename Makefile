#compiler being used
CXX = g++

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
STANDARD = -std=c++17
OPENMPFLAGS = -Xpreprocessor -fopenmp
CXXFLAGS = -g -Wall $(STANDARD) $(OPENMPFLAGS)

# set linker flag for OpenMP based on OS
ifeq ($(detected_OS),Darwin)        # Mac OS X
    OMPLINKERFLAG = -lomp
endif
ifeq ($(detected_OS),Linux)
    OMPLINKERFLAG = -lgomp
endif

# project directories
BENCHMARKS = benchmarks/

# the build target executable
TARGET = main

# test file
TESTS = tests

# the dependencies
TARGET_DEPS  = definitions.hpp
QLAYER_DEPS = QubitLayer.hpp
EXAMPLES_DEPS = qAlgorithms.hpp
TIMERS = timers.hpp
TESTS_DEPS = tests.hpp

# the other source files
QUBITLAYER = QubitLayer
EXAMPLES = qAlgorithms
SINGLEQGATETIMES = singleQGateTimes
TWOQGATETIMES = twoQGateTimes
THREEQGATETIMES = threeQGateTimes
EPR = epr

# list of object files
objectFiles = $(TARGET).o $(QUBITLAYER).o $(EXAMPLES).o $(SINGLEQGATETIMES).o $(TWOQGATETIMES).o $(THREEQGATETIMES).o $(EPR).o $(TESTS).o

#list of executables
executables = $(TARGET) $(SINGLEQGATETIMES) $(TWOQGATETIMES) $(THREEQGATETIMES) $(EPR) $(TESTS)

# debug directory
DEBUG = main.dSYM

# number of qubits
NUMQUBITS = 2

# flag to set number of qubits
DFLAG = -DnumQubits

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
COM_STRING	      = "Compiling"
LINK_STRING	      = "Linking"
OK_STRING	      = "OK"
TESTS_STRING      = "Running\ tests..."
BENCHMARKS_STRING = "Running\ benchmarks..."

all: $(TARGET)

$(TARGET): $(TARGET).o $(QUBITLAYER).o $(EXAMPLES).o
	@printf "%b" "$(CYAN)$(LINK_STRING)   $(NO_COLOR)$(TARGET).o $(QUBITLAYER).o $(EXAMPLES).o  			"
	@$(CXX) $(CXXFLAGS) -lomp -o $(TARGET) $(TARGET).o $(QUBITLAYER).o $(EXAMPLES).o
	@printf "%b" "$(GREEN)$(OK_STRING)\n"
	@printf "%b" "$(GREEN)$(SUCCESS_STRING)$(NO_COLOR)\n";

$(TARGET).o: $(TARGET).cpp $(TARGET_DEPS) $(QLAYER_DEPS)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)                             			"
	@$(CXX) $(DFLAG)=$(NUMQUBITS) $(CXXFLAGS) -c $(TARGET).cpp
	@printf "%b" "$(GREEN)$(OK_STRING)\n"

$(QUBITLAYER).o: $(QUBITLAYER).cpp $(TARGET_DEPS) $(QLAYER_DEPS)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)                       			"
	@$(CXX) $(DFLAG)=$(NUMQUBITS) $(CXXFLAGS) -c $(QUBITLAYER).cpp
	@printf "%b" "$(GREEN)$(OK_STRING)\n"

$(EXAMPLES).o: $(EXAMPLES).cpp $(TARGET_DEPS) $(QLAYER_DEPS) $(EXAMPLES_DEPS)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)                      			"
	@$(CXX) $(DFLAG)=$(NUMQUBITS) $(CXXFLAGS) -c $(EXAMPLES).cpp
	@printf "%b" "$(GREEN)$(OK_STRING)\n"

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
singleQBenchmark: NUMQUBITS = 1
twoQBenchmark: $(TWOQGATETIMES)
threeQBenchmark: $(THREEQGATETIMES)
threeQBenchmark: NUMQUBITS = 3

$(SINGLEQGATETIMES): $(SINGLEQGATETIMES).o $(QUBITLAYER).o
	@printf "%b" "$(CYAN)$(LINK_STRING)   $(NO_COLOR)$(SINGLEQGATETIMES).o $(QUBITLAYER).o			"
	@$(CXX) $(CXXFLAGS) -lomp -o $(SINGLEQGATETIMES) $(SINGLEQGATETIMES).o $(QUBITLAYER).o
	@printf "%b" "$(GREEN)$(OK_STRING)\n"
	@if [ -a $(SINGLEQGATETIMES) ] ; \
	then printf "%b" "$(GREEN)$(SUCCESS_STRING)$(NO_COLOR)\n"; \
	fi;
	@$(RM) $(objectFiles)

$(TWOQGATETIMES): $(TWOQGATETIMES).o $(QUBITLAYER).o
	@printf "%b" "$(CYAN)$(LINK_STRING)   $(NO_COLOR)$(TWOQGATETIMES).o $(QUBITLAYER).o 				"
	@$(CXX) $(CXXFLAGS) -lomp -o $(TWOQGATETIMES) $(TWOQGATETIMES).o $(QUBITLAYER).o
	@printf "%b" "$(GREEN)$(OK_STRING)\n"
	@if [ -a $(TWOQGATETIMES) ] ; \
	then printf "%b" "$(GREEN)$(SUCCESS_STRING)$(NO_COLOR)\n"; \
	fi;
	@$(RM) $(objectFiles)

$(THREEQGATETIMES): $(THREEQGATETIMES).o $(QUBITLAYER).o
	@printf "%b" "$(CYAN)$(LINK_STRING)   $(NO_COLOR)$(THREEQGATETIMES).o $(QUBITLAYER).o 			"
	@$(CXX) $(CXXFLAGS) -lomp -o $(THREEQGATETIMES) $(THREEQGATETIMES).o $(QUBITLAYER).o
	@printf "%b" "$(GREEN)$(OK_STRING)\n"
	@if [ -a $(THREEQGATETIMES) ] ; \
	then printf "%b" "$(GREEN)$(SUCCESS_STRING)$(NO_COLOR)\n"; \
	fi;
	@$(RM) $(objectFiles)

$(SINGLEQGATETIMES).o: $(BENCHMARKS)$(SINGLEQGATETIMES).cpp $(TARGET_DEPS) $(QLAYER_DEPS) $(BENCHMARKS)$(TIMERS)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)                          		"
	@$(CXX) $(DFLAG)=$(NUMQUBITS) $(CXXFLAGS) -c $(BENCHMARKS)$(SINGLEQGATETIMES).cpp
	@printf "%b" "$(GREEN)$(OK_STRING)\n"

$(TWOQGATETIMES).o: $(BENCHMARKS)$(TWOQGATETIMES).cpp $(TARGET_DEPS) $(QLAYER_DEPS) $(BENCHMARKS)$(TIMERS)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)                          		"
	@$(CXX) $(DFLAG)=$(NUMQUBITS) $(CXXFLAGS) -c $(BENCHMARKS)$(TWOQGATETIMES).cpp
	@printf "%b" "$(GREEN)$(OK_STRING)\n"

$(THREEQGATETIMES).o: $(BENCHMARKS)$(THREEQGATETIMES).cpp $(TARGET_DEPS) $(QLAYER_DEPS) $(BENCHMARKS)$(TIMERS)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)                          		"
	@$(CXX) $(DFLAG)=$(NUMQUBITS) $(CXXFLAGS) -c $(BENCHMARKS)$(THREEQGATETIMES).cpp
	@printf "%b" "$(GREEN)$(OK_STRING)\n"

eprBenchmark: $(EPR)

$(EPR): $(EPR).o $(QUBITLAYER).o
	@printf "%b" "$(CYAN)$(LINK_STRING)   $(NO_COLOR)$(EPR).o $(QUBITLAYER).o					"
	@$(CXX) $(CXXFLAGS) -lomp -o $(EPR) $(EPR).o $(QUBITLAYER).o
	@printf "%b" "$(GREEN)$(OK_STRING)\n"
	@if [ -a $(EPR) ] ; \
	then printf "%b" "$(GREEN)$(SUCCESS_STRING)$(NO_COLOR)\n"; \
	fi;

$(EPR).o: $(BENCHMARKS)$(EPR).cpp $(TARGET_DEPS) $(QLAYER_DEPS) $(BENCHMARKS)$(TIMERS)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)                          			"
	@$(CXX) $(DFLAG)=$(NUMQUBITS) $(CXXFLAGS) -c $(BENCHMARKS)$(EPR).cpp
	@printf "%b" "$(GREEN)$(OK_STRING)\n"

cleanObj:
	@printf "%b" "$(MAGENTA)Removing $(NO_COLOR)object files 						"
	@$(RM) $(objectFiles)
	@printf "%b" "$(GREEN)$(OK_STRING)$(NO_COLOR)\n"

clean:
	@printf "%b" "$(MAGENTA)Removing $(NO_COLOR)executables and object files 				"
	@$(RM) $(executables) $(objectFiles)
	@printf "%b" "$(GREEN)$(OK_STRING)$(NO_COLOR)\n"

# testing (first set number of qubits to 3)
check: NUMQUBITS = 3
check: $(TESTS)

$(TESTS): $(TESTS).o $(QUBITLAYER).o
	@printf "%b" "$(CYAN)$(LINK_STRING)   $(NO_COLOR)$(TESTS).o $(QUBITLAYER).o					"
	@$(CXX) $(CXXFLAGS) $(OMPLINKERFLAG) -o $(TESTS) $(TESTS).o $(QUBITLAYER).o
	@printf "%b" "$(GREEN)$(OK_STRING)\n"
	@printf "%b" "$(GREEN)$(SUCCESS_STRING) $(TESTS_STRING)$(NO_COLOR)\n";
	@./tests	
	@$(RM) $(executables) $(objectFiles)

$(TESTS).o: $(TESTS).cpp $(TARGET_DEPS) $(QLAYER_DEPS) $(TESTS_DEPS)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)                             			"
	@$(CXX) $(CXXFLAGS) $(DFLAG)=$(NUMQUBITS) -c $(TESTS).cpp
	@printf "%b" "$(GREEN)$(OK_STRING)\n"