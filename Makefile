#compiler being used
CXX = clang++

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
STANDARD = -std=c++17
CXXFLAGS = -g -Wall $(STANDARD)

# the build target executable
TARGET = main

# the dependencies
TARGET_DEPS  = definitions.h
QLAYER_DEPS = QubitLayer.h

# the other source files
QUBITLAYER = QubitLayer

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
SUCCESS_STRING = "[BUILD\ SUCCESS]"
COM_STRING	   = "Compiling"
LINK_STRING	   = "Linking"
OK_STRING	   = "[OK]"

all: $(TARGET)

$(TARGET): $(TARGET).o $(QUBITLAYER).o
	@printf "%b" "$(CYAN)$(LINK_STRING) $(NO_COLOR)$(TARGET).o $(QUBITLAYER).o   "
	@$(CXX) $(CXXFLAGS) -o $(TARGET) $(TARGET).o $(QUBITLAYER).o
	@printf "%b" "$(GREEN)$(OK_STRING)\n"
	@if [ -a $(TARGET) ] ; \
	then printf "%b" "$(GREEN)$(SUCCESS_STRING)\n"; \
	fi;

$(TARGET).o: $(TARGET).cpp $(TARGET_DEPS) $(QLAYER_DEPS)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)           "
	@$(CXX) $(CXXFLAGS) -c $(TARGET).cpp
	@printf "%b" "$(GREEN)$(OK_STRING)\n"

$(QUBITLAYER).o: $(QUBITLAYER).cpp $(QLAYER_DEPS)
	@printf "%b" "$(BLUE)$(COM_STRING) $(NO_COLOR)$(@)        "
	@$(CXX) $(CXXFLAGS) -c $(QUBITLAYER).cpp
	@printf "%b" "$(GREEN)$(OK_STRING)\n"

clean:
	@printf "%b" "$(MAGENTA)Removing $(NO_COLOR)executable, object files and debug files "
	@$(RM) $(TARGET) $(TARGET).o $(QUBITLAYER).o
	@$(RM) -rf $(DEBUG)
	@printf "%b" "$(GREEN)$(OK_STRING)\n"
