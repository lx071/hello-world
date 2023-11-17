cmake_minimum_required(VERSION 3.15)                        # 指定使用的 cmake 的最低版本
project(test)                                               # 定义工程名称
add_definitions(-DDEBUG)                                    # 宏定义
add_executable(app test.cpp)
