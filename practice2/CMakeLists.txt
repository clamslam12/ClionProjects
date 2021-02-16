cmake_minimum_required(VERSION 3.13)
project(practice2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(practice2
        functions.cpp
        functions.h
        main.cpp
        student.cpp
        student.h)
