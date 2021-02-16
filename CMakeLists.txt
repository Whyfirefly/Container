cmake_minimum_required(VERSION 3.17)
project(Container)

set(CMAKE_CXX_STANDARD 14)

add_executable(Container main.cpp Stack.h utilites.h Exception.h Queue.h)