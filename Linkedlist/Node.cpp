//
// Created by clams on 2/25/2019.
//
#include "Node.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

LinkedList:: LinkedList() {

    head_ptr = new Node;
    head_ptr->next_ptr = NULL;
    head_ptr->data = 0;


}

bool LinkedList:: insert_at_beginning(nodetype x) {


    Node* temp = new Node;
    temp->data = x;
    temp->next_ptr = NULL;
    head_ptr = temp;

    return true;
}

bool LinkedList::insert_at_position(nodetype x, nodetype position) {

    Node* newnode = new Node;
    Node* temp = head_ptr;

    newnode->data = x;

    while(temp->next_ptr != NULL)
    {
        if(temp->data == position)
        {
            break;
        }

        temp = temp->next_ptr;
    }

    newnode->next_ptr = temp->next_ptr;
    temp->next_ptr = newnode;
    return true;
}

bool LinkedList::delete_node(nodetype position) {

    Node* tempnode = head_ptr;
    Node* previous_node = head_ptr;

    while(tempnode->next_ptr!=NULL)
    {
        if(tempnode->data == position)
        {
            break;
        }

        previous_node = tempnode;
        tempnode = tempnode->next_ptr;
    }


    previous_node->next_ptr = tempnode->next_ptr;
    tempnode->next_ptr = NULL;
    delete tempnode;
    return true;
}




