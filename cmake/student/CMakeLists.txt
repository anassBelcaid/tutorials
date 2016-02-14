cmake_minimum_required(VERSION 2.9)

project(Student)

# bringing the header from include
INCLUDE_DIRECTORIES(include)

# add the sources in src using the GLOB
file(GLOB SOURCES "src/*.cpp")

add_executable(student  ${SOURCES})