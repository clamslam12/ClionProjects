//
// Created by clams on 3/11/2019.
//
#include "LinkedList.h"
#include <cstdlib>
using namespace std;


LinkedList::LinkedList() {

    headPtr = NULL;
    tailPtr = NULL;

}

bool LinkedList::insertAtFront(char value) {

    Node* temp = new Node;
    temp->data = value;
    temp->nextPtr = headPtr;
    headPtr = temp;

    return true;
}

bool LinkedList::insertAtBack(char value) {

    Node* temp = new Node;
    temp->data = value;
    temp->nextPtr = NULL;

    if(headPtr == NULL)
    {
        headPtr = temp;
        tailPtr = temp;
    }
    else
    {
        tailPtr->nextPtr = temp;
        tailPtr = tailPtr->nextPtr;
    }


    return true;


}

bool LinkedList::insertBeforePosition(char value, int index) {

    Node* temp1 = new Node;
    temp1->data= value;
    temp1->nextPtr = NULL;
    if(index==1)
    {
        temp1->nextPtr =headPtr;
        headPtr =temp1;
        return true;
    }
    Node* temp2 = headPtr;

    for(int i =0; i< index-2;i++)
    {
        temp2 = temp2->nextPtr;
    }

    temp1->nextPtr = temp2->nextPtr;
    temp2->nextPtr = temp1;


}

void LinkedList::print() {

    Node* temp = headPtr;
    while(temp!= NULL)
    {
        cout << temp->data << " ";
        temp = temp->nextPtr;
    }

}
