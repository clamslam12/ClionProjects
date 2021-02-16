//
// Created by clams on 2/20/2019.
#include "functions.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include "main.cpp"
using namespace std;
//

void read_data(vehicle& obj,vehicle& obj2, vehicle& obj3,vehicle& obj4,vehicle& obj5, vehicle& obj6,vehicle& obj7,vehicle& obj8)
{
    ifstream infile;
    infile.open("vehiclein.txt");



    string y;
    string ma, mo;
    getline(infile, y);
    obj.set_year(stoi(y));
    getline(infile, ma);
    obj.set_make(ma);
    getline(infile, mo);
    obj.set_model(mo);

    getline(infile, y);
    obj2.set_year(stoi(y));
    getline(infile, ma);
    obj2.set_make(ma);
    getline(infile, mo);
    obj2.set_model(mo);

    getline(infile, y);
    obj3.set_year(stoi(y));
    getline(infile, ma);
    obj3.set_make(ma);
    getline(infile, mo);
    obj3.set_model(mo);

    getline(infile, y);
    obj4.set_year(stoi(y));
    getline(infile, ma);
    obj4.set_make(ma);
    getline(infile, mo);
    obj4.set_model(mo);

    getline(infile, y);
    obj5.set_year(stoi(y));
    getline(infile, ma);
    obj5.set_make(ma);
    getline(infile, mo);
    obj5.set_model(mo);

    getline(infile, y);
    obj6.set_year(stoi(y));
    getline(infile, ma);
    obj6.set_make(ma);
    getline(infile, mo);
    obj6.set_model(mo);

    getline(infile, y);
    obj7.set_year(stoi(y));
    getline(infile, ma);
    obj7.set_make(ma);
    getline(infile, mo);
    obj7.set_model(mo);

    getline(infile, y);
    obj8.set_year(stoi(y));
    getline(infile, ma);
    obj8.set_make(ma);
    getline(infile, mo);
    obj8.set_model(mo);




}

void to_vector(vector <vehicle> vehicle_vector, vehicle obj,vehicle obj2, vehicle obj3, vehicle obj4, vehicle obj5, vehicle obj6 , vehicle obj7, vehicle obj8) {




    vehicle_vector.push_back(obj);
    vehicle_vector.push_back(obj2);
    vehicle_vector.push_back(obj3);
    vehicle_vector.push_back(obj4);
    vehicle_vector.push_back(obj5);
    vehicle_vector.push_back(obj6);
    vehicle_vector.push_back(obj7);
    vehicle_vector.push_back(obj8);

}

