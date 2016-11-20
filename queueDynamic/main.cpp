/*****************************************************************************************************************
** Program Filename: main.cpp
** Author: Peter Moldenhauer
** Date: 11/19/16
** Description: This program demonstrates the use of a dynamic queue data structure. A dynamic queue is built as
** a linked list and expands or shrinks with each enqueue or dequeue operation. It starts off as an empty linked
** list. With the first enqueue operation, a node is added which is pointed to by the front and rear pointers. As
** each new item is added to the queue, a new node is added to the rear of the list, and the rear pointer is
** updated to point to the new node. As each item is dequeued, front is made to point to the next node in the list,
** and then the node that was previously at the front of the list is deleted.
*******************************************************************************************************************/

#include "DynIntQueue.h"
#include <iostream>
using namespace std;

int main()
{
    DynIntQueue iQueue;

    cout << "Enqueuing 5 items...\n";

    // Enqueue 5 items
    for (int k = 1; k <= 5; k++)
        iQueue.enqueue(k*k);

    // Dequeue and retrieve all items in the queue
    cout << "The values in the queue were:\n";
    while (!iQueue.isEmpty()){
        int value;
        iQueue.dequeue(value);
        cout << value << "  ";
    }

    return 0;
}
