include Makefile.config

PROJ := cv

nr.exec: $(PROJ) main.o
	$(CXX) -o $@ main.o cv/oftenr.cv.so $(LIBS)

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
