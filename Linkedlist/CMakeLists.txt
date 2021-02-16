cmake_minimum_required(VERSION 3.13)
project(Linkedlist)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Linkedlist
        main.cpp
        Node.cpp
        Node.h)
