include ../Makefile.config

SRC := $(wildcard *.cpp)
OBJ := $(SRC:.cpp=.o)

obj.o: $(OBJ)
	ld -r -o $@ $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

-include *.d

clean:
	rm -rf *.o *.d *.out *.so
