include Makefile.config

PROJ := cv

nr.exec: $(PROJ) main.o
	$(CXX) -o $@ main.o $(LIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

oftenr: $(PROJ)

cv:
	make -C $@

run:
	./nr.exec

clean:
	(for i in $(PROJ); do \
		make -C $$i clean; \
	done)
	rm -rf *.o *.out

.PHONY: oftenr $(PROJ) clean
