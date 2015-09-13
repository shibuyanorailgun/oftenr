include ../Makefile.config

SRC := $(wildcard *.cpp)
OBJ := $(SRC:.cpp=.o)

oftenr.cv.so: $(OBJ)
	$(CXX) -shared -o $@ $(OBJ) $(LIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

-include *.d

clean:
	rm -rf cv.exec *.o *.d *.out *.so
