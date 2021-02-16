//
// Created by clams on 3/4/2019.
//

#include <iostream>
#include "functions.h"

using namespace std;

void menu() {

    cout << "Choose an option by entering a number\n";
    cout << "1.Push back\n";
    cout << "2.Pop back\n";
    cout << "3.Size\n";
    cout << "4.Empty?\n";
    cout << "5.Return an index's value\n";
    cout << "6.Search a value and return its index\n";
    cout << "7.Exit\n";



}

int push() {
    int val;
    cout << "enter a number to push back\n";
    cin >> val;
    return val;

}

void pop() {

    cout << "top value popped\n";

}

 void empty(int n) {

    if(n)
    {
        cout << "Vector is empty\n";
    } else{
        cout << "vector is not empty\n";
    }

}

void index(int val) {
    if(val== -1)
    {
        cout << "value not found\n";
    }
    cout << "the value is at index " << val << endl;

}




