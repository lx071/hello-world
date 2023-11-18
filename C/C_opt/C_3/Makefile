all: compile run

compile:
	gcc opt.c -o long

run:
# 正确输入长选项的情况
	./long --reqarg 100 --optarg=200 --noarg
	./long --reqarg=100 --optarg=200 --noarg
# 可选选项可以不给参数
	./long --reqarg 100 --optarg --noarg
# 输入长选项错误的情况
	./long --reqarg 100 --optarg 200 --noarg
# 必须指定参数的选项，如果不给参数，同样解析错误如下
	./long --reqarg --optarg=200 --noarg


clean:
	rm -rf long

