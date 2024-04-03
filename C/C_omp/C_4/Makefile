all: compile run

# -fopenmp=libgomp -I/usr/lib/gcc/x86_64-linux-gnu/11/include -L/usr/lib/gcc/x86_64-linux-gnu/11
compile:
	clang++ -fopenmp -o main omp.cpp

run:
	./main

clean:
	rm -rf main.o main

