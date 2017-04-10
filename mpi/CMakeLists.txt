#compile an mpi program

cmake_minimum_required(VERSION 2.9)
find_package(MPI REQUIRED)
set(CMAKE_CXX_COMPILER mpic++)
project(mpi)
set(CMAKE_CXX_STANDARD 11)
add_executable(hello 01_hello_world.cpp)

add_executable(communication 02_communication.cpp)
add_executable(broadcasting 03_broadcasting.cpp)
