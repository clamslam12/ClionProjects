#include <iostream>
#include <fstream>
#include <algorithm>
#include "vehicle.h"
#include "functions.h"
#include <vector>
#include <string>
#include <cstdlib>

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

void to_vector(vector <vehicle> &vehicle_vector, vehicle obj,vehicle obj2, vehicle obj3, vehicle obj4, vehicle obj5, vehicle obj6 , vehicle obj7, vehicle obj8) {




    vehicle_vector.push_back(obj);
    vehicle_vector.push_back(obj2);
    vehicle_vector.push_back(obj3);
    vehicle_vector.push_back(obj4);
    vehicle_vector.push_back(obj5);
    vehicle_vector.push_back(obj6);
    vehicle_vector.push_back(obj7);
    vehicle_vector.push_back(obj8);

}

void year_to_vector(vector <int> &vehicle_vector, vehicle obj, vehicle obj2, vehicle obj3, vehicle obj4, vehicle obj5,
               vehicle obj6, vehicle obj7, vehicle obj8){

    vehicle_vector.push_back(obj.get_year());
    vehicle_vector.push_back(obj2.get_year());
    vehicle_vector.push_back(obj3.get_year());
    vehicle_vector.push_back(obj4.get_year());
    vehicle_vector.push_back(obj5.get_year());
    vehicle_vector.push_back(obj6.get_year());
    vehicle_vector.push_back(obj7.get_year());
    vehicle_vector.push_back(obj8.get_year());

}

void display_vector_year(vector<int> &v) {

    for(int i=0; i< v.size();i++)
    {
        cout << v[i] << endl;
    }

}

void
make_to_vector(vector<string> &vehicle_vector, vehicle obj, vehicle obj2, vehicle obj3, vehicle obj4, vehicle obj5, vehicle obj6,
               vehicle obj7, vehicle obj8) {

    vehicle_vector.push_back(obj.get_make());
    vehicle_vector.push_back(obj2.get_make());
    vehicle_vector.push_back(obj3.get_make());
    vehicle_vector.push_back(obj4.get_make());
    vehicle_vector.push_back(obj5.get_make());
    vehicle_vector.push_back(obj6.get_make());
    vehicle_vector.push_back(obj7.get_make());
    vehicle_vector.push_back(obj8.get_make());
}

void display_vector_string(vector<string> &v) {

    for(int i=0; i< v.size();i++)
    {
        cout << v[i] << endl;
    }

}

void model_to_vector(vector<string> &vehicle_vector, vehicle obj, vehicle obj2, vehicle obj3, vehicle obj4, vehicle obj5,
                vehicle obj6, vehicle obj7, vehicle obj8) {

    vehicle_vector.push_back(obj.get_model());
    vehicle_vector.push_back(obj2.get_model());
    vehicle_vector.push_back(obj3.get_model());
    vehicle_vector.push_back(obj4.get_model());
    vehicle_vector.push_back(obj5.get_model());
    vehicle_vector.push_back(obj6.get_model());
    vehicle_vector.push_back(obj7.get_model());
    vehicle_vector.push_back(obj8.get_model());

}
int binarySearch(vector <string> &v, int l, int r, string x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        /// If the element is present at the middle
        /// itself
        if (v[mid] == x)
            return mid;

        /// If element is smaller than mid, then
        /// it can only be present in left subarray
        if (v[mid] > x)
            return binarySearch(v, l, mid - 1, x);

        /// Else the element can only be present
        /// in right subarray
        return binarySearch(v, mid + 1, r, x);
    }

    /// We reach here when element is not
    /// present in array
    return -1;
}

void first_option(vector<string> &v1, vector<vehicle> &v2) {

    cout << "Enter the make you want to search for \n";
    string mak;
    int count=0;
    cin >> mak;
    cout << "Searching recursively...\n";
    if(mak=="ford"|| mak=="FORD")
    {
        mak = "Ford";
    }
    else if(mak=="Bmw"|| mak=="bmw")
    {
        mak = "BMW";
    }
    else if(mak=="LAMBORGHINI"|| mak=="lamborghini")
    {
        mak = "Lamborghini";
    }
    else if(mak=="delorean"|| mak=="DELOREAN")
    {
        mak = "DeLorean";
    }
    else if(mak=="pontiac"|| mak=="PONTIAC")
    {
        mak = "Pontiac";
    }
    else if(mak=="AUDI"|| mak=="audi")
    {
        mak = "Audi";
    }
    int n = sizeof(v1) / sizeof(v1[0]);
    int result = binarySearch(v1, 0, n - 1, mak); ///holds index
    for(int i=0;i<8;i++)
    {

        if(mak==v2[i].get_make())
        {
            cout << "Car " << i + 1 << ", ";
            count++;
        }


    }

    if(count!=0)
    {
        cout << " have the same make\n";}

    else if( result ==-1)
    {

        cout << "No car have the same make\n";
    }

}

void second_option(vector<string> &v1, vector<vehicle> &v2) {

    cout << "Enter the model you want to search for \n";
    string mod;
    int count=0;
    cin.ignore();
    getline(cin,mod);
    cout << "Searching recursively...\n";
    if(mod=="escape"|| mod=="ESCAPE")
    {
        mod = "Escape";
    }
    else if(mod=="328XI")
    {
        mod = "328xi";
    }
    else if(mod=="428XI")
    {
        mod = "428xi";
    }
    else if(mod=="fusion se"|| mod=="fusion SE"|| mod =="FUSION SE"|| mod=="FUSION se")
    {
        mod = "Fusion SE";
    }
    else if(mod=="gallardo"|| mod=="GALLARDO")
    {
        mod = "Gallardo";
    }
    else if(mod=="gto"|| mod=="Gto")
    {
        mod = "GTO";
    }
    else if(mod=="dmc-12")
    {
        mod = "DMC-12";
    }
    else if(mod=="80 sedan"|| mod=="80 SEDAN")
    {
        mod = "80 Sedan";
    }
    int n = sizeof(v1) / sizeof(v1[0]);
    int result = binarySearch(v1, 0, n - 1, mod); ///holds index
    for(int i=0;i<8;i++)
    {

        if(mod==v2[i].get_model())
        {
            cout << "Car " << i + 1 << ", ";
            count++;
        }


    }

    if(count!=0)
    {
        cout << " have the same model\n";}

    else if( result ==-1)
    {

        cout << "No car have the same model\n";
    }



}

void third_option(vector<int> &v1, vector<vehicle> &v2) {

    cout << "Enter the year you want to search for \n";
    int year;
    int count=0;
    cin >> year;
    cout <<"Searching recursively...\n";
    int n = sizeof(v1) / sizeof(v1[0]);
    int result = binarySearch(v1, 0, n - 1, year); ///holds index
    for(int i=0;i<8;i++)
    {

        if(year==v2[i].get_year())
        {
            cout << "Car " << i + 1 << ", ";
            count++;
        }


    }

    if(count!=0)
    {
        cout << " have the same year\n";}

    else if( result ==-1)
    {

        cout << "No car have the same year\n";
    }

}

int binarySearch(vector<int> &v, int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        /// If the element is present at the middle
        /// itself
        if (v[mid] == x)
            return mid;

        /// If element is smaller than mid, then
        /// it can only be present in left subarray
        if (v[mid] > x)
            return binarySearch(v, l, mid - 1, x);

        /// Else the element can only be present
        /// in right subarray
        return binarySearch(v, mid + 1, r, x);
    }

    /// We reach here when element is not
    /// present in array
    return -1;

}

int binarySearch_it(vector<string> &v, int l, int r, string x) {


        while (l <= r) {
            int m = l + (r - l) / 2;

            /// Check if x is present at mid
            if (v[m] == x)
                return m;

            /// If x greater, ignore left half
            if (v[m] < x)
                l = m + 1;

                /// If x is smaller, ignore right half
            else
                r = m - 1;
        }

        /// if we reach here, then element was
        /// not present
        return -1;

}

int binarySearch_it(vector<int> &v, int l, int r, int x) {

    while (l <= r) {
        int m = l + (r - l) / 2;

        /// Check if x is present at mid
        if (v[m] == x)
            return m;

        /// If x greater, ignore left half
        if (v[m] < x)
            l = m + 1;

            /// If x is smaller, ignore right half
        else
            r = m - 1;
    }

    /// if we reach here, then element was
    /// not present
    return -1;
}

void fourth_option(vector<string> &v1, vector<vehicle> &v2) {

    cout << "Enter the make you want to search for \n";
    string mak;
    int count=0;
    cin >> mak;
    cout <<"Searching iteratively...\n";
    if(mak=="ford"|| mak=="FORD")
    {
        mak = "Ford";
    }
    else if(mak=="Bmw"|| mak=="bmw")
    {
        mak = "BMW";
    }
    else if(mak=="LAMBORGHINI"|| mak=="lamborghini")
    {
        mak = "Lamborghini";
    }
    else if(mak=="delorean"|| mak=="DELOREAN")
    {
        mak = "DeLorean";
    }
    else if(mak=="pontiac"|| mak=="PONTIAC")
    {
        mak = "Pontiac";
    }
    else if(mak=="AUDI"|| mak=="audi")
    {
        mak = "Audi";
    }
    int n = sizeof(v1) / sizeof(v1[0]);
    int result = binarySearch_it(v1, 0, n - 1, mak); ///holds index
    for(int i=0;i<8;i++)
    {

        if(mak==v2[i].get_make())
        {
            cout << "Car " << i + 1 << ", ";
            count++;
        }


    }

    if(count!=0)
    {
        cout << " have the same make\n";}

    else if( result ==-1)
    {

        cout << "No car have the same make\n";
    }

}

void fifth_option(vector<string> &v1, vector<vehicle> &v2) {

    cout << "Enter the model you want to search for \n";
    string mod;
    int count=0;
    cin.ignore();
    getline(cin,mod);
    cout << "Searching iteratively...\n";
    if(mod=="escape"|| mod=="ESCAPE")
    {
        mod = "Escape";
    }
    else if(mod=="328XI")
    {
        mod = "328xi";
    }
    else if(mod=="428XI")
    {
        mod = "428xi";
    }
    else if(mod=="fusion se"|| mod=="fusion SE"|| mod =="FUSION SE"|| mod=="FUSION se")
    {
        mod = "Fusion SE";
    }
    else if(mod=="gallardo"|| mod=="GALLARDO")
    {
        mod = "Gallardo";
    }
    else if(mod=="gto"|| mod=="Gto")
    {
        mod = "GTO";
    }
    else if(mod=="dmc-12")
    {
        mod = "DMC-12";
    }
    else if(mod=="80 sedan"|| mod=="80 SEDAN")
    {
        mod = "80 Sedan";
    }
    int n = sizeof(v1) / sizeof(v1[0]);
    int result = binarySearch_it(v1, 0, n - 1, mod); ///holds index
    for(int i=0;i<8;i++)
    {

        if(mod==v2[i].get_model())
        {
            cout << "Car " << i + 1 << ", ";
            count++;
        }


    }

    if(count!=0)
    {
        cout << " have the same model\n";}

    else if( result ==-1)
    {

        cout << "No car have the same model\n";
    }



}

void sixth_option(vector<int> &v1, vector<vehicle> &v2) {

    cout << "Enter the year you want to search for \n";
    int year;
    int count=0;
    cin >> year;
    cout <<"Searching iteratively...\n";
    int n = sizeof(v1) / sizeof(v1[0]);
    int result = binarySearch_it(v1, 0, n - 1, year); ///holds index
    for(int i=0;i<8;i++)
    {

        if(year==v2[i].get_year())
        {
            cout << "Car " << i + 1 << ", ";
            count++;
        }


    }

    if(count!=0)
    {
        cout << " have the same year\n";}

    else if( result ==-1)
    {

        cout << "No car have the same year\n";
    }


}
