#Tutorial on C++ 11 new features
cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 11)

project(C11)

add_executable(initialiser_list initialiser_list.cpp)
add_executable(initialiser_list2 initialiser_list2.cpp)
add_executable(uniform_initialization uniform_initialization.cpp)
add_executable(typeInference type_inference.cpp)
add_executable(enums enums.cpp)
add_executable(static_assertion static_assertion.cpp)
add_executable(default_delete default_delete.cpp)
add_executable(symmetric_diff symmetric_diff.cpp)