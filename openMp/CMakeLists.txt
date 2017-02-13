# cmake for compiling opemMp programms

cmake_minimum_required(VERSION 2.9)
project(openMp)

#compiler specification

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fopenmp")
set(CMAKE_CXX_STANDARD 11)
#project
project(openMp)

add_executable( helloWorld 01_hello_world.cpp )
add_executable( sum_vector 02_sum_vector.cpp)
add_executable( sections 03_sections.cpp)
