all: compile run

compile:
	gcc hello.c -o opt

run:
# 输入选项及参数正确的情况
	./opt -a100 -b 200 -c 300 -d
	./opt -a100 -b200 -c300 -d
# 选项a是可选参数，这里不带参数也是正确的
	./opt -a -b 200 -c 300 -d
# 输入选项参数错误的情况
	./opt -a 100 -b 200 -c 300 -d
# 参数丢失，也会导致错误，c选项是必须有参数的，不加参数提示错误如下
	./opt -a -b 200 -c
# 命令行选项未定义，-e选项未在optstring中定义，会报错
	./opt -a -b 200 -e

clean:
	rm -rf opt

