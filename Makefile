CXX := g++
CXXWARNINGS := -Wall -Wextra -Werror -Wno-error=stringop-truncation
CXXOPT := -O3
CXXSTD := -std=c++17
INCLUDES := -I include -I ./external/include
LIB_DIRS := -L ./external/lib64
CXXFLAGS := $(CXXWARNINGS) $(CXXSTD) $(CXXOPT) $(INCLUDES) $(LIB_DIRS) $(shell root-config --cflags)
LDFLAGS := $(shell root-config --libs)
LIBS := -l fmt

.PHONY: all clean

all: main

# If you add new source files in the src/ directory, remember to add the
# corresponding object file as a dependency here so that Make knows that it
# should build it and link to it
#
# Remove the Example object file when you are done looking at it, it doesn't
# contribute to the executable!
main: main.cxx 
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS) $(LIBS)

src/%.o: src/%.cxx
	$(CXX) $(CXXFLAGS) $^ -c -o $@

clean:
	rm -v src/*.o main