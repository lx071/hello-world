all: compile run

# -fopenmp=libgomp -I/usr/lib/gcc/x86_64-linux-gnu/11/include -L/usr/lib/gcc/x86_64-linux-gnu/11
# -fopenmp -L/usr/lib/llvm-$(CLANG_VERSION)/lib
compile:
	clang++ -fopenmp -o main omp.cpp

run:
	./main

clean:
	rm -rf main.o main

