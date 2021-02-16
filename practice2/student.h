//
// Created by clams on 2/6/2019.
//

#ifndef PRACTICE2_STUDENT_H
#define PRACTICE2_STUDENT_H

#endif //PRACTICE2_STUDENT_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

class student
{
private:
    int age;
    char* name;
    int arr2[5]={1,2,3,4,5};


public:
    int *arr_return();
    int arr[5]={1,2,3,4,5};
    void set_age(int i);
    int get_age();
    void set_name(char* name);
    char* get_name();
    student operator+(const student& obj);


};


