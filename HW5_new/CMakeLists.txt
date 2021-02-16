cmake_minimum_required(VERSION 3.13)
project(HW5_new)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(DurbinHW5)

add_executable(HW5_new
        DurbinHW5/LinkedList.cpp
        DurbinHW5/LinkedList.h
        DurbinHW5/main.cpp
        LinkedList.cpp
        LinkedList.h
        main.cpp)
