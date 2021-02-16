//
// Created by clams on 2/6/2019.
//
#include <iostream>
#include <string>
#include <cstdlib>
#include <string>
#include <fstream>
#include "student.h"
#include "functions.h"

using namespace std;


void student::set_age(int i) {

    age = i;

}

int student::get_age() {
    return age;
}

void student::set_name(char *n) {

    name = n;

}

char* student::get_name() {
    return name;
}

student student::operator+(const student &obj) {

    student s;
    s.age = this->age + obj.age;

    return s;
}

int* student::arr_return() {


    return arr2;
}

