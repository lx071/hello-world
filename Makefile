all: preprocess compile assemble link

# 1.预处理
preprocess:
	gcc -E hello.c > hello.i

# 2.编译
compile: 
	gcc -S hello.i 

# 3.汇编
assemble:
	gcc -c hello.s 

# 4.链接->可执行文件
link:
	gcc hello.o -o hello

run:
	./hello

compile_1:
	gcc hello.c -o hello


clean:
	rm -rf hello.i hello.s hello.o hello

