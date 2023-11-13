cmake_minimum_required(VERSION 3.15)                        # 指定使用的 cmake 的最低版本
project(test)                                               # 定义工程名称
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)        # 搜索文件

message("=========")
message(${SRC})
# 字符串移除
list(REMOVE_ITEM SRC ${PROJECT_SOURCE_DIR}/src/main.cpp)
message("=========")
message(${SRC})
message("=========")

include_directories(${PROJECT_SOURCE_DIR}/include)          # 指定头文件路径
set(LIBRARY_OUTPUT_PATH ./ans)                              # 指定库文件生成路径
add_library(example SHARED ${SRC})                          # 制作动态库SHARED
# add_library(example STATIC ${SRC})                        # 制作静态库STATIC

# 字符串拼接
set(tmp hello world)    
set(tmp1 ${tmp} ${SRC})
message(${tmp})
message(${tmp1})

# 字符串追加
list(APPEND tmp "aaa" "bbb" ${SRC})
message(${tmp})

