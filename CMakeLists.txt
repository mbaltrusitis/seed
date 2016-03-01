cmake_minimum_required(VERSION 3.3)
project(Seed)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp include/Branch.h include/Node.h include/Leaf.h)
add_executable(Seed ${SOURCE_FILES})