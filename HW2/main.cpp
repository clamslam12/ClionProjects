//
//  main.cpp
//  Array Based ADT
//
//  Created by Nesreen on 1/30/19.
//  Copyright (c) 2019 Nesreen. All rights reserved.
//
#include <iostream>
#include "ArrayBag.h"
#include "Functions (1).h"
#include <fstream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {

    ArrayBag bag1, bag2, resultbag;

    ifstream infile;
    infile.open("setInput.txt");
/// import each integer to bag1 array
    for(int i=0;i<16;i++)
    {
        int a;
        infile >> a;
        bag1.add(a);
    }
///display bag1/bag2 array elements
  //  displayBag(bag1);

    ///move bag1 contents into vector
    toVector_bag1(bag1);


cout << endl;
///bag1 sort ascending order
    sort(bag1.items_vec.begin(), bag1.items_vec.end());

    cout << endl;
   ///display bag1 contents vec
    display_bag1(bag1);
///remove duplicates
remove_dup(bag1);

    cout << endl << "bag1 with duplicates removed:" << endl;

///display contents after removing duplicates
    display_bag1_no_dup(bag1);

    cout << endl;

    ///bag2 import
    infile.ignore(1000, '\n'); ///read new line
    for(int i=0;i<18;i++)
    {
        int a;
        infile >> a;
        bag2.add(a);
    }


    ///bag2 array import to vector
    toVector_bag2(bag2);
    ///bag2 sort  vector ascending order
    sort(bag2.items_vec.begin(), bag2.items_vec.end());
    ///bag2 remove duplicates
    remove_dup(bag2);
    cout << endl << "bag2 with duplicates removed:" << endl;
    display_bag2_no_dup(bag2);
cout << endl;
    ///union and display
    uni(bag1,bag2,resultbag);

    cout << endl;

    ///a-b (removing elements that are in b from a) and If the item is in B but not A, it is not placed in the result
    diff(bag1,bag2);











































































    return 0;
}
