//
// Created by clams on 2/25/2019.
//

#ifndef LINKEDLIST_NODE_H
#define LINKEDLIST_NODE_H

#include <iostream>
#include <string>
using namespace std;
typedef int nodetype;
struct Node
{
    nodetype data;
    Node* next_ptr;
};

class LinkedList
{
private:
    Node* head_ptr;
public:
    LinkedList();
    bool insert_at_beginning(nodetype x);
    bool insert_at_position(nodetype x, nodetype position);
    bool delete_node(nodetype position);



};

#endif //LINKEDLIST_NODE_H
