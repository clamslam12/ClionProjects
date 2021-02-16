//
// Created by clams on 2/19/2019.
//

#ifndef HW3_VEHICLE_H
#define HW3_VEHICLE_H

#include <string>
#include <vector>
#include <string>
using  namespace std;


class vehicle {

private:
    string make;
    string model;
    int year;

public:

    vehicle();
    void set_make(string imake);
    string get_make();
    void set_model(string imodel);
    string get_model();
    void set_year(int iyear);
    int get_year();



};




#endif //HW3_VEHICLE_H
