//
// Created by clams on 3/20/2019.
//

#include "LinkedList.h"

LinkedList::LinkedList() {

    headPtr = NULL; ///initialize headptr to null

}

bool LinkedList::insertAtFront(char value) {

    Node* temp = new Node; ///create a temp pointer that points to a new node
    temp->data = value; ///place value in data of node
    temp->nextPtr = headPtr; ///make the next pointer of temp pointer point to what head pointer is pointing to
    headPtr = temp; ///make head pointer point to what temp pointer is pointing to

    return true;
}

LinkedList::~LinkedList() {

    Node* currentPtr = headPtr; ///current pointer points to what head pointer is pointing to
    Node* temp;

    while (currentPtr != NULL) {
        temp = currentPtr->nextPtr; ///make temp pointer point to what the next pointer of current pointer points to
        delete currentPtr; ///delete the node that current pointer points to
        currentPtr = temp; ///make current pointer point to temp pointer
    }

    cout << "\ndestructor called\n";
}

bool LinkedList::insertBeforePosition(char value, int index) {

    Node* temp1 = new Node; ///temp1 pointer points to a new node
    temp1->data = value; ///place value in data of node
    temp1->nextPtr = NULL; ///next pointer of temp1 pointer points to null
    if(index==1)
    {
        temp1->nextPtr = headPtr; ///next pointer of temp1 pointer points to what head pointer is pointing to
        headPtr = temp1; ///head pointer points to what temp1 pointer is pointing to
        return true;
    }
    Node* temp2 = headPtr; ///temp2 pointer points to what head pointer is pointing to

    for(int i =0; i< index-2;i++)
    {
        temp2 = temp2->nextPtr; ///keep advancing temp2 pointer to the next node
    }

    temp1->nextPtr = temp2->nextPtr;///temp1's next pointer points to temp2's next pointer
    temp2->nextPtr = temp1; ///temp2's next pointer points to what temp1 is pointing to

}

bool LinkedList::insertAtBack(char value) {

    Node* temp;
    temp = new Node; ///temp points to new node
    temp->data = value; ///fill data
    temp->nextPtr = NULL; /// temp's next pointer points to null

    Node* temp2;
    temp2 = headPtr; ///temp2 points to what head pointer is pointing to

    if(temp2 == NULL)
        temp2 = temp;///temp2 points to the same thing as temp
    else
    {
        while(temp2->nextPtr!=NULL)
            temp2 = temp2->nextPtr; ///advance temp2

        temp2->nextPtr = temp;

    }

    return true;

}

bool LinkedList::deleteAtFront() {

    Node* temp = headPtr;///temp points to the same thing as as head pointer
    headPtr = headPtr->nextPtr; ///advance head pointer
    delete temp; ///delete the node that temp is pointing to
    return true;
}

bool LinkedList::deleteAtBack() {

    Node* temp = headPtr, *prevPtr = NULL;///temp points to same thing as head
    if (temp == NULL) {
        return true;
    }
    while (temp->nextPtr != NULL) {
        prevPtr = temp; ///previous pointer point to same thing as temp
        temp = temp->nextPtr;///advance temp
    }
    delete temp;///delete the node that temp is pointing to
    if (prevPtr != NULL) {
        prevPtr->nextPtr = NULL;
    } else {
        headPtr = NULL;
    }

    return true;
}

void LinkedList::clear() {

   Node* temp = headPtr;

   while(temp!= NULL)
   {
       headPtr = temp->nextPtr; ///head points to the node of temp's next pointer
       delete temp; ///delete the node that temp points to
       temp = headPtr;
   }


}

ostream &operator<<(ostream &o, LinkedList &obj) {
    if(obj.headPtr==NULL)
    {
        cout << "list is empty\n";
    }else{
        Node* temp = obj.headPtr; ///temp points to same thing as head
        while(temp!=NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->nextPtr; ///advance temp
        }
    }
    return o;

}

bool LinkedList::deletePosition(int index) {

    Node* temp = headPtr; ///temp points to same thing as head
    if(index==1)
    {
        headPtr = temp->nextPtr; ///head points to same thing as temp's next pointer
        delete temp; ///delete node that temp is pointing to
        return true;
    }
    for(int i=0;i<index-2;i++)
    {
        temp = temp->nextPtr; ///advance temp
    }

    Node* temp2 = temp->nextPtr; ///temp2 points to the same thing as temp's next pointer
    temp->nextPtr = temp2->nextPtr; ///temp's next pointer points to same thing as temp2's next pointer
    delete temp2; ///delete the node that temp2 is pointing to
}

