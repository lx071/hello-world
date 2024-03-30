all: compile run

compile:
	g++ -std=c++11  -g -pthread -Wno-format -fpermissive -fopenmp -o main.o -c omp.cpp
	g++ -std=c++11  -g -pthread -Wno-format -fpermissive -fopenmp -o main main.o

run:
	./main

clean:
	rm -rf main.o main

