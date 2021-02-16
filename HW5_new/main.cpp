#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
using namespace std;

int main() {

    LinkedList l1;

    cout << "\ninserting a at front\n";
    l1.insertAtFront('a');
    cout << l1;

    cout << "\ninserting b at front\n";
    l1.insertAtFront('b');
    cout << l1;

    cout << "\ninserting c before a\n";
    l1.insertBeforePosition('c',2);
    cout << l1;

    cout << "\ninserting d at back of list\n";
    l1.insertAtBack('d');
    cout << l1;

    cout << "\ndeleting front node\n";
    l1.deleteAtFront();
    cout << l1;

    cout << "\ndeleting node at position 2\n";
    l1.deletePosition(2);
    cout << l1;

    cout << "\ndeleting node at back of list\n";
    l1.deleteAtBack();
    cout << l1;

    cout << "\nclearing list...\n";
    l1.clear();
    cout << l1;





    return 0;
}