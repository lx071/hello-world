#include <iostream>
#include <omp.h>
#include <chrono>

// OpenMp for
// #pragma omp parallel for 告诉编译器接下来的for循环要并行执行，使用的时候需要满足以下四点：

// 在循环的迭代器必须是可计算的并且在执行前就需要确定迭代的次数；
// 在循环的代码块中不能包含break,return,exit；
// 在循环的代码块中不能使用goto跳出到循环外部；
// 迭代器只能够被for语句中的增量表达式所修改。


void Func()
{
	int length = 5;

#pragma omp parallel for num_threads(3)
	for (int i = 0; i < length; i++)
		std::cout << i << ": " << omp_get_thread_num() << std::endl;
}

int main()
{
	auto start = std::chrono::high_resolution_clock::now();

	Func();

	auto end = std::chrono::high_resolution_clock::now();

	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

	std::cout << "执行时间：" << duration.count() << std::endl;

	return 0;
}