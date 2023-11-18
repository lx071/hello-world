all: compile run

compile:
	g++ opt.c -o opt

run:
	./opt case1/Q1 -o summary.csv
	./opt case1/Q2 -windows case1/Q2/input_windows.csv -o summary_windows.csv
	./opt case1/Q3 -merge -o summary_merge.csv
	
clean:
	rm -rf opt

