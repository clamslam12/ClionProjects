//
//  Functions.h
//  Array Based ADT
//
//  Created by Nesreen on 2/4/19.
//  Copyright (c) 2019 Nesreen. All rights reserved.
//

#ifndef __Array_Based_ADT__Functions__
#define __Array_Based_ADT__Functions__

#include <stdio.h>
#include <string>
#include "ArrayBag.h"
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void displayBag( ArrayBag &bag);
void bagTester( ArrayBag &bag);
void remove_dup(ArrayBag& obj);
void toVector_bag1(ArrayBag& obj);
void display_bag1(ArrayBag& obj);
void display_bag1_no_dup(ArrayBag& obj);
void toVector_bag2(ArrayBag& obj);
void display_bag2_no_dup(ArrayBag& obj);
ArrayBag operator+(const ArrayBag& b);
ArrayBag operator-(const ArrayBag& b);
void uni(ArrayBag& obj1, ArrayBag& obj2, ArrayBag& obj3);
void diff(ArrayBag& obj1, ArrayBag& obj2);

#endif /* defined(__Array_Based_ADT__Functions__) */
