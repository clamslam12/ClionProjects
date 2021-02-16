//
// Created by clams on 4/24/2019.

#ifndef FINAL_V2_FUNCTIONS_H
#define FINAL_V2_FUNCTIONS_H
#include "actor_actress.h"
#include "nominations.h"
#include <string>

using namespace std;

void insert_to_mod_field(string a, int b, string c, int d, string e, BSTact& obj,string n);
void mod_name(BSTact& obj, string n,string n1);
void mod_name_n(BSTnom& obj, string n,string n1);
void insert_to_mod_field_n(string a, int b, string c, int d, string e, BSTnom& obj,string n);
void convertToUpper(string &s);

#endif //FINAL_V2_FUNCTIONS_H
