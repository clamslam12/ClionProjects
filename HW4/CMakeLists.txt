cmake_minimum_required(VERSION 3.13)
project(HW4)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(HW4
        .idea/encodings.xml
        .idea/HW4.iml
        .idea/misc.xml
        .idea/modules.xml
        .idea/workspace.xml
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/HW4.cbp
        cmake-build-debug/HW4.exe.stackdump
        cmake-build-debug/Makefile
        CMakeLists.txt
        functions.cpp
        functions.h
        main.cpp
        MyVector.cpp
        MyVector.h)
