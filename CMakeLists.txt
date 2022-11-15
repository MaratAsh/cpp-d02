cmake_minimum_required(VERSION 3.21)
project(cpp_02)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp_02_00 ex00/srcs/main.cpp)
target_include_directories(cpp_02_00 PRIVATE ex00/includes/)
add_executable(cpp_02_01 ex01/main.cpp)
target_include_directories(cpp_02_01 PRIVATE ex01/includes/)
add_executable(cpp_02_02 ex02/main.cpp)
target_include_directories(cpp_02_02 PRIVATE ex02/includes/)
add_executable(cpp_02_03 ex03/main.cpp)
target_include_directories(cpp_02_03 PRIVATE ex03/includes/)
