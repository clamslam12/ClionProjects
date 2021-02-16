#include <iostream>
#include <fstream>
#include <algorithm>
#include "vehicle.h"
#include "functions.h"
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;


int main() {


ifstream infile;
infile.open("vehiclein.txt");
vehicle c1,c2,c3,c4,c5,c6,c7,c8;
read_data(c1,c2,c3,c4,c5,c6,c7,c8);

vector <vehicle> vehicle_vector;



to_vector(vehicle_vector,c1,c2,c3,c4,c5,c6,c7,c8);





























return 0;
}
cmake_minimum_required(VERSION 3.13)
project(HW3_retry2)

set(CMAKE_CXX_STANDARD 14)

add_executable(HW3_retry2 main.cpp)