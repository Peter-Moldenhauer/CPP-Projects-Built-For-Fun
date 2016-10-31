/*****************************************************************************************************
** Name: Peter Moldenhauer
** Date: 10/31/16
** Description: This program demonstrates the creation of a simple linked list A linked list is a
** series of connected nodes, where each node is a data structure. The nodes of a linked list are
** usually dynamically allocated, used and then deleted, allowing the linked list to grow or shrink
** in size as the program runs.
******************************************************************************************************/

#include <iostream>
using namespace std;

struct ListNode
{
    double value; // this is the data element
    ListNode *next; // this is the link element
};

int main(){

    ListNode *head; // crate the head (an empty node)

    // create the first node with 12.5 as the data element
    head = new ListNode; // allocate new node
    head->value = 12.5;  // store the value
    head->next = NULL;  // establish the end of the list

    // create the second node with 13.5 as the data element
    ListNode *secondPtr = new ListNode;
    secondPtr->value = 13.5;
    secondPtr->next = NULL;  // second node is the end of the list now
    head->next = secondPtr;  // first node points to the second node

    // print the list
    cout << "First item is " << head->value << endl;
    cout << "Second item is " << head->next->value << endl;

    return 0;
}
