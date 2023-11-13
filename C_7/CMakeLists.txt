cmake_minimum_required(VERSION 3.15)                        # 指定使用的 cmake 的最低版本
project(test)                                               # 定义工程名称
# set(SRC main.cpp example.cpp)                             # 定义变量
# aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC)       # 搜索文件
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)            # 搜索文件
# set(EXECUTABLE_OUTPUT_PATH ./res)                         # 指定可执行程序生成路径(也适用于动态库)
include_directories(${PROJECT_SOURCE_DIR}/include)          # 指定头文件路径
# set(CMAKE_CXX_STANDARD 11)                                # 指定使用的C++标准
message("===重要消息===")
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib2)          # 指定静态库/动态库的路径
add_executable(app ${SRC})                                  # 定义工程会生成一个可执行程序
message(STATUS "===非重要消息===")
target_link_libraries(app example)                          # 链接动态库
# message(FATAL_ERROR "===错误，终止===")
message(STATUS "===非重要消息===")
