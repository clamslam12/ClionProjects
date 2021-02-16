//
// Created by clams on 2/19/2019.
//

#include "vehicle.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

vehicle::vehicle() {



}

void vehicle::set_make(string imake) {

    make = imake;

}

string vehicle::get_make() {


    return make;
}

void vehicle::set_model(string imodel) {

    model = imodel;

}

string vehicle::get_model() {

    return model;
}

void vehicle::set_year(int iyear) {

    year = iyear;

}

int vehicle::get_year() {

    return year;
}
