# cmake for compiling c++ with openMp and c11
cmake_minimum_required(VERSION 2.9)
project(eigen)
set(CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_FLAGS "-fopenmp")
set(CMAKE_CXX_COMPILER clang-omp++)
add_executable(eigen codes/04_sparse_matrices.cpp)
