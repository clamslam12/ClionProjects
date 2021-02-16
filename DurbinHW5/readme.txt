Name: Minh Durbin
HW 5
Student ID: 101820610
Status: Succesfully compiled and ran on Clion and csegrid
Makefile is included

Functions:

LinkedList (constructor): takes no input. Sets headPtr to NULL. returns nothing.
~LinkedList (destructor): takes no input. Traverses the list from beginning to end and deletes all nodes. returns nothing.
bool LinkedList::insertAtFront(char value): Takes a character value as input. Then it inserts that value at the beginning of the list. Returns true if succesful.
bool LinkedList::insertBeforePosition(char value, int index): Takes a character value and an integer as input. Then it inserts that value before an nth node. The integer input represents the nth node. Returns true if successful.
bool LinkedList::insertAtBack(char value): Takes a character value as input. Then it inserts that value at the end of the list. Returns true if successful.
bool LinkedList::deleteAtFront(): Takes no input. Then it deletes the node at the beginning of the list. Returns true if successful.
bool LinkedList::deleteAtBack(): Takes no input. Then it deletes the node at the end of the list. Returns true if successful.
void LinkedList::clear(): Takes no input. Then it deletes all the nodes from the list. Returns nothing.
bool LinkedList::deletePosition(int index): Takes an integer as input. Then it deletes the nth node. The integer represents the nth node. Returns true if successful.
