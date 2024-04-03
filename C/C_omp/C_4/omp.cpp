#include <iostream>   
#include <omp.h>   
  
static omp_lock_t lock;  

// for 循环中的所有内容进行加锁保护，同时只能有一个线程执行 for 循环中的内容
int main()
{
    omp_init_lock(&lock); // 初始化互斥锁   
    
    #pragma omp parallel for   
    for(int i = 0; i < 5; ++i)  
    {  
        omp_set_lock(&lock);   // 获得互斥器   
        std::cout << omp_get_thread_num() << "+" << std::endl;  
        std::cout << omp_get_thread_num() << "-" << std::endl;  
        omp_unset_lock(&lock); // 释放互斥器   
    }  
    
    omp_destroy_lock(&lock);  // 销毁互斥器   
    return 0;  
}