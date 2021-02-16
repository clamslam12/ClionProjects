//
// Created by clams on 3/20/2019.
//

#ifndef HW5_NEW_LINKEDLIST_H
#define HW5_NEW_LINKEDLIST_H

#include <iostream>
using namespace std;

struct Node
{
    char data = 0;
    Node* nextPtr = NULL;
};

class LinkedList {
private:
    Node *headPtr;

public:
    LinkedList();
    ~LinkedList();

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
    friend ostream& operator<<(ostream& o, LinkedList& obj);
};
#endif //HW5_NEW_LINKEDLIST_H
