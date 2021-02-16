#include <iostream>
#include "MyVector.h"
#include "functions.h"
using namespace std;
using namespace HW4;

int main() {

    MyVector v1; //create an object

    while(true)
    {
        menu();///execute menu
        int option;
        cin >> option;
        if(option==1)
        {

            v1.push_back(push());
        }
        else if(option==2)
        {
            pop();
            v1.pop_back();
        }
        else if(option==3)
        {
            cout << "vector size is " << v1.size() << endl;
        }
        else if(option==4)
        {
            int ans= v1.empty();
            empty(ans);
        }
        else if(option ==5)
        {
            cout << "enter an index\n";
            int ind;
            cin >> ind;
            cout << "the value of index " << ind << " is " << v1[ind] << endl;

        }
        else if(option == 6)
        {
            cout << "enter a value you would like to find its index\n";
            int val;
            cin >> val;
            int res = v1.search(max_size,val);
            index(res);

        }
        else if(option==7)
        {
            break;
        }


    }





    return 0;
}