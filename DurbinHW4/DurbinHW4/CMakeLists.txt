cmake_minimum_required(VERSION 3.13)
project(DurbinHW4)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(DurbinHW4
        functions.cpp
        functions.h
        main.cpp
        MyVector.cpp
        MyVector.h)
