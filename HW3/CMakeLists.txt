cmake_minimum_required(VERSION 3.13)
project(HW3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(cmake-build-debug)

add_executable(HW3
        .idea/encodings.xml
        .idea/HW3.iml
        .idea/misc.xml
        .idea/modules.xml
        .idea/workspace.xml
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/Makefile
        cmake-build-debug/vehiclein.txt
        CMakeLists.txt
        functions.cpp
        functions.h
        main.cpp
        vehicle.cpp
        vehicle.h)
