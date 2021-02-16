#include <iostream>
#include <string>
#include <cstdlib>
#include <string>
#include <fstream>
#include "student.h"
#include "functions.h"
#include <vector>
using namespace std;


int main() {

    student s1;
    s1.set_age(24);
   vector <int> v1;

   v1.push_back(34);
   v1.push_back(12);
   v1.push_back(67);

  student *ptr;

  ptr= &s1;

  cout << ptr->get_age();

  int *intPtr = new int(123);

  cout << *intPtr;

  delete intPtr;

  int *p = new int[10];

  p[0] = 12;
  p[1]=34;

  cout << p[1];



















    return 0;
}