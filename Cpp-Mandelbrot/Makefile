all: mandelbrot

mandelbrot: cplane.o julia.o 

run: all
	./mandelbrot ${ARGS}

clean:
	rm -f mandelbrot *.o
