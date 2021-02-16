#include <iostream>
#include <fstream>
#include "vehicle.h"
#include "functions.h"
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;


int main() {


    ifstream infile; ///infile stream
    infile.open("vehiclein.txt");
    vehicle c1,c2,c3,c4,c5,c6,c7,c8; ///creating objects
    read_data(c1,c2,c3,c4,c5,c6,c7,c8); ///reads the data from file and assigns year, make, model to each object

    vector <vehicle> vehicle_vector; ///vector to store vehicle objects

    to_vector(vehicle_vector,c1,c2,c3,c4,c5,c6,c7,c8); ///moves all vehicle objects to vector

    vector <int> year_vector; ///vector to store each object's year

    year_to_vector(year_vector,c1,c2,c3,c4,c5,c6,c7,c8);///stores each object's year to a vector


    vector <string> make_vector; ///vector to store each object's make
    vector<string> model_vector;///vector to store each object's model

    make_to_vector(make_vector,c1,c2,c3,c4,c5,c6,c7,c8);///stores each object's make to vector
    model_to_vector(model_vector,c1,c2,c3,c4,c5,c6,c7,c8);///stores each object's model to vector



///menu option

    int ans=1;
    while(ans != 7 && ans == 1||ans != 7 && ans == 2||ans != 7 && ans == 3||ans != 7 && ans == 4||ans != 7 && ans == 5||ans != 7 && ans == 6)
    {
        cout << "********************************\n";
        cout << "Please enter your choice:" << endl;
        cout << "1.Sort by make then Search by make recursively" << endl;
        cout << "2.Sort by model then Search by model recursively" << endl;
        cout << "3.Sort by year then Search by year recursively" << endl;
        cout << "4.Sort by make then Search by make iteratively" << endl;
        cout << "5.Sort by model then Search by model iteratively" << endl;
        cout << "6.Sort by year then Search by year iteratively" << endl;
        cout << "7. Exit" << endl;
        cin >> ans;

        if(ans== 1)
        {
            cout << "Sorting...\n";
            sort(make_vector.begin(),make_vector.end());///sort each object's make in vector
            first_option(make_vector,vehicle_vector);///searches recursively via binary search

        }
        else if(ans==2)
        {
            cout << "Sorting...\n";
            sort(model_vector.begin(),model_vector.end());///sort each object's model in vector
            second_option(model_vector,vehicle_vector);///searches recursively via binary search
        }
        else if(ans==3)
        {
            cout << "Sorting...\n";
            sort(year_vector.begin(),year_vector.end());///sort each object's year in vector
            third_option(year_vector,vehicle_vector);///searches recursively via binary search
        }
        else if(ans==4)
        {
            cout << "Sorting...\n";
            sort(make_vector.begin(),make_vector.end());///sort each object's make in vector
            fourth_option(make_vector,vehicle_vector);///searches iteratively via binary search
        }
        else if(ans==5)
        {
            cout << "Sorting...\n";
            sort(model_vector.begin(),model_vector.end());///sort each object's model in vector
            fifth_option(model_vector,vehicle_vector);///searches iteratively via binary search

        }
        else if(ans==6)
        {
            cout << "Sorting...\n";
            sort(year_vector.begin(),year_vector.end());///sort each object's year in vector
            sixth_option(year_vector,vehicle_vector);///searches iteratively via binary search
        }



    }














































    return 0;
}
