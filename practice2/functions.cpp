//
// Created by clams on 2/13/2019.

#include <iostream>
#include <string>
#include <cstdlib>
#include <string>
#include <fstream>
#include "student.h"
#include "functions.h"
using namespace std;


double average(int *arr, int size) {

    double avg;
    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];

    }
     avg = sum/size;

    return avg;
}

int sum_of_array(int *arr, int size) {

    int total = 0;
    for(int i=0;i<size;i++)
    {
       total+= arr[i];
    }
    return total;
}
