cmake_minimum_required(VERSION 3.21)
project(cpp_02)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp_02_00 ex00/srcs/main.cpp ex01/srcs/Fixed.cpp)
target_include_directories(cpp_02_00 PRIVATE ex00/includes/)
add_executable(cpp_02_01 ex01/srcs/main.cpp ex01/srcs/Fixed.cpp)
target_include_directories(cpp_02_01 PRIVATE ex01/includes/)
add_executable(cpp_02_02 ex02/srcs/main.cpp ex02/srcs/Fixed.cpp ex02/includes/Fixed.hpp)
target_include_directories(cpp_02_02 PRIVATE ex02/includes/)
add_executable(cpp_02_03 ex03/srcs/main.cpp ex03/srcs/Point.cpp ex03/includes/Point.hpp ex03/srcs/bsp.cpp)
target_include_directories(cpp_02_03 PRIVATE ex03/includes/)
