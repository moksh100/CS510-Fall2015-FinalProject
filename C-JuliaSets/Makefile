all: julia

julia: complex.o cplane.o -lm

run: all
	./julia ${ARGS}

clean:
	rm -f julia *.o
