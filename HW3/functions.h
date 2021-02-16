//
// Created by clams on 2/20/2019.
//

#ifndef HW3_FUNCTIONS_H
#define HW3_FUNCTIONS_H

#endif //HW3_FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "vehicle.h"
#include <string>




void read_data(vehicle& obj,vehicle& obj2, vehicle& obj3,vehicle& obj4,vehicle& obj5, vehicle& obj6,vehicle& obj7,vehicle& obj8);

void to_vector(vector <vehicle> &vehicle_vector, vehicle obj,vehicle obj2, vehicle obj3, vehicle obj4, vehicle obj5, vehicle obj6 , vehicle obj7, vehicle obj8);

void year_to_vector(vector <int> &vehicle_vector, vehicle obj,vehicle obj2, vehicle obj3, vehicle obj4, vehicle obj5, vehicle obj6 , vehicle obj7, vehicle obj8);

void display_vector_year(vector<int> &v);

void make_to_vector(vector <string> &vehicle_vector, vehicle obj,vehicle obj2, vehicle obj3, vehicle obj4, vehicle obj5, vehicle obj6 , vehicle obj7, vehicle obj8 );

void display_vector_string(vector <string> &v);
void model_to_vector(vector <string> &vehicle_vector, vehicle obj,vehicle obj2, vehicle obj3, vehicle obj4, vehicle obj5, vehicle obj6 , vehicle obj7, vehicle obj8 );
int binarySearch(vector <string> &v, int l, int r, string x);///recursively string
int binarySearch(vector <int> &v, int l, int r, int x); ///recursively int

void first_option(vector <string> &v1, vector <vehicle> &obj);
void second_option(vector<string> &v1, vector<vehicle> &v2);
void third_option(vector<int> &v1, vector<vehicle> &v2);

int binarySearch_it(vector <string> &v, int l, int r, string x); ///iterative string
int binarySearch_it(vector <int> &v, int l, int r, int x); ///iterative int
void fourth_option(vector<string> &v1, vector<vehicle> &v2);
void fifth_option(vector<string> &v1, vector<vehicle> &v2);
void sixth_option(vector<int> &v1, vector<vehicle> &v2);

