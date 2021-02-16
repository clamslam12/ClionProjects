//
// Created by clams on 3/11/2019.
//

#ifndef HW5_LINKEDLIST_H
#define HW5_LINKEDLIST_H

#include <cstdlib>
#include <iostream>
using namespace std;

struct Node
{
    char data = '0';
    Node* nextPtr = NULL;
};

class LinkedList
{
private:
    Node *headPtr;
    Node* tailPtr;
public:
    LinkedList();
   // ~LinkedList();

    bool insertAtFront(char value);
    bool insertBeforePosition(char value, int index);
    //first Node after headptr is 1
    //false if pos zero or out of range
    bool insertAtBack(char value);

    bool deleteAtFront();
    bool deletePosition(int index);
    //first Node after headptr is 1
    //false if pos zero or out of range
    bool deleteAtBack();
    //false if empty

    void clear(); //frees memory for entire list
    void print();

};

#endif //HW5_LINKEDLIST_H
