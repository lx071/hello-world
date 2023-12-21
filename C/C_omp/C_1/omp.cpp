#include <iostream>
#include <omp.h>
#include <chrono>

// OpenMp parallel
// parallerl 指令用于创建一个并行域，告诉编译器这段代码我要并行执行

void Func()
{
	int length = 5;

	// num_thread表示创建几个线程执行，如果不指定就创建最大线程数
	// omp_get_thread_num()打印当前线程id
#pragma omp parallel num_threads(3)
	{
		for (int i = 0; i < length; i++)
			std::cout << i << ": " << omp_get_thread_num() << std::endl;
	}
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