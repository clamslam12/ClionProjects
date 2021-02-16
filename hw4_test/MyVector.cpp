//
// Created by clams on 3/4/2019
#include "MyVector.h"
#include <iostream>
#include <list>
using namespace std;


HW4::MyVector::MyVector() {

    vsize = 0;
    top = -1;



}

HW4::T HW4::MyVector::operator[](int index) {

    if(index>max_size)
    {
        cout << "out of bounds\n";
        return A[0]; ///return first element
    } else
    {return A[index];}


}

void HW4::MyVector::pop_back() {

    if(top>=0)
    {
        top--;

    }
    --vsize;

}


bool HW4::MyVector::empty() {
    if(top==-1)
    {return true;}
    else{
        return false;
    }

}

void HW4::MyVector::push_back(HW4::T value) {

    if(top< max_size)
    {
        top++;
        A[top]  = value;
        vsize++;
    }

}

HW4::T HW4::MyVector::size() {

    return vsize;
}

HW4::T HW4::MyVector::search( HW4::T arr_size, HW4::T search_value) {

    for(int i=0;i<arr_size;i++)
    {
        if(A[i]==search_value)
        {
            return i;
        }

    }
    return -1;

}
