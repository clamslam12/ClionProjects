cmake_minimum_required(VERSION 3.13)
project(HW5)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(HW5
        LinkedList.cpp
        LinkedList.h
        main.cpp)
