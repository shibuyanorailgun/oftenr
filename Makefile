include Makefile.config

TARGET := liboftenr.so
PROJ := cv cntl
OBJS := $(addsuffix /obj.o, $(PROJ))

a.out: main.o $(TARGET)
	$(CXX) -o $@ $? $(LIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

$(TARGET): $(PROJ)
	$(CXX) -shared -o $@ $(OBJS) $(LIBS)

cv:
	make -C $@

cntl:
	make -C $@

run:
	./a.out

clean:
	(for i in $(PROJ); do \
		make -C $$i clean; \
	done)
	rm -rf *.o *.out *.so

.PHONY: nr.exec $(TARGET) $(PROJ) run clean
