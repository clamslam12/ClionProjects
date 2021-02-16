//
//  Functions.cpp
//  Array Based ADT
//
//  Created by Nesreen on 2/4/19.
//  Copyright (c) 2019 Nesreen. All rights reserved.
//

#include <vector>
#include "Functions (1).h"
#include "ArrayBag.h"
#include <iostream>

using namespace std;

void displayBag( ArrayBag &bag)
{
    cout<< "The bag contains "<< bag.getCurrentSize()<< " Items"<< endl;
    int numberOfEntries = bag.getCurrentSize();
    for (int i = 0; i<numberOfEntries;i++ )
    {
        cout<< bag.items[i]<< " ";
    }
    cout<<endl<<endl;
}
void bagTester( ArrayBag &bag)
{
     cout<< "isEmpty returns"<< bag.isEmpty()<< "; should be 1 "<< endl;
    displayBag(bag);
    int items[]={ 1,2,3,4,5,6};
    cout<< "Add six items to the bag"<< endl;
    cout <<endl;
    for ( int i =0 ; i< 6;i++)
        bag.add(items[i]);
    displayBag(bag);
    cout<< "isEmpty returns"<< bag.isEmpty()<< "; should be 0 "<< endl;
    cout<< "getCurrentSize returns"<< bag.getCurrentSize()<<" ; should be 6"<<endl;
    cout<< "try to add another entru add(10) returns"<< bag.add(10)<< "  should be 0" << endl;

    
}

void remove_dup(ArrayBag &obj) {

    auto end = obj.items_vec.end();
    for(auto it = obj.items_vec.begin(); it!= end; ++it)
    {
        end = remove(it + 1, end, *it);
    }
    obj.items_vec.erase(end,obj.items_vec.end());

}

void toVector_bag1(ArrayBag &obj) {
    for(int i=0;i<16;i++)
    {
        obj.items_vec.push_back(obj.items[i]);
    }

}

void display_bag1(ArrayBag &obj) {
    for(int i=0;i<16;i++)
    {
        cout << obj.items_vec[i] << " ";
    }

}

void display_bag1_no_dup(ArrayBag &obj) {
    for(int i=0;i<10;i++)
    {
        cout << obj.items_vec[i] << " ";
    }

}

void toVector_bag2(ArrayBag &obj) {
    for(int i=0;i<18;i++)
    {
        obj.items_vec.push_back(obj.items[i]);
    }

}

void display_bag2_no_dup(ArrayBag &obj) {
    for(int i=0;i<14;i++)
    {
        cout << obj.items_vec[i] << " ";
    }

}

void uni(ArrayBag &obj1, ArrayBag &obj2, ArrayBag &obj3) {
    int l = 0,flag;
    for(int i=0; i<10;++i)
    {
        obj3.items_vec.push_back(obj1.items_vec[i]);
        l++;
    }

    for(int i=0;i<14;++i)
    {
        flag=1;
        for(int j=0;j<10;++j)
        {
            if(obj2.items_vec[i]==obj1.items_vec[j])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            obj3.items_vec[l]= obj2.items_vec[i];
            l++;
        }
    }
    cout << endl << "union is " << endl;
    for(int i=0;i<l;++i){
        cout<<obj3.items_vec[i]<<" ";
    }

}

void diff(ArrayBag &obj1, ArrayBag &obj2) {
    for(int i=0;i<14;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(obj2.items_vec[i]==obj1.items_vec[j])
            {
                obj1.items_vec.erase(obj1.items_vec.begin() + j );
            }
        }
    }

    cout << endl << endl;
    cout << "Difference is " << endl;
    for(int i=0;i< obj1.items_vec.size();i++)
    {
        cout << obj1.items_vec[i] << " ";
    }

}






