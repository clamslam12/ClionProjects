cmake_minimum_required(VERSION 3.13)
project(HW2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(HW2
        .idea/encodings.xml
        .idea/HW2.iml
        .idea/misc.xml
        .idea/modules.xml
        .idea/workspace.xml
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/HW2.cbp
        cmake-build-debug/Makefile
        cmake-build-debug/setInput.txt
        ArrayBag.cpp
        ArrayBag.h
        CMakeLists.txt
        "Functions (1).cpp"
        "Functions (1).h"
        main.cpp)
