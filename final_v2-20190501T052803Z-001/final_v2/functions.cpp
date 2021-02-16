//
// Created by clams on 4/24/2019.
//

#include "functions.h"

void insert_to_mod_field(string a, int b, string c, int d, string e, BSTact &obj,string n) {

    obj.insert2_(a, b, c, d, e);
    obj.delete_driver(n);

}

void mod_name(BSTact &obj, string n,string n1) {

    int y1, w1;
    string f1, a1;
    y1 = obj.search(obj.return_root(), n)->year;
    f1 = obj.search(obj.return_root(), n)->film;
    w1 = obj.search(obj.return_root(), n)->winner;
    a1 = obj.search(obj.return_root(), n)->award;
    insert_to_mod_field(n1, y1, f1, w1, a1, obj, n);


}

void mod_name_n(BSTnom &obj, string n, string n1) {


    int y1, w1;
    string f1, a1;
    y1 = obj.search(obj.return_root(), n)->year;
    f1 = obj.search(obj.return_root(), n)->film;
    w1 = obj.search(obj.return_root(), n)->winner;
    a1 = obj.search(obj.return_root(), n)->award;
    insert_to_mod_field_n(n1, y1, f1, w1, a1, obj, n);
}

void insert_to_mod_field_n(string a, int b, string c, int d, string e, BSTnom &obj, string n) {

    obj.insert2_(a, b, c, d, e);
    obj.delete_driver(n);

}

void convertToUpper(string &s){
    for(int i = 0; i<s.length(); i++){
        s[i] = toupper(s[i]);
    }
}
