/*****************************************************************************************************************
** Program Filename: main.cpp
** Author: Peter Moldenhauer
** Date: 11/19/16
** Description: This program demonstrates the use of a static queue data structure. A queue is a data structure
** that stores and retrieves items in a first-in, first-out (FIFO) manner (think of a grocery line, first customer
** in line is the first one served). Queue's can be implemented as static (using an array) or dynamic (using linked
** lists). When an element is added to a queue, it is added to the rear. When an element is removed, its removed
** from the front. The two primary queue operations are enqueuing and dequeuing. An empty queue can be signified by
** setting both front and rear indices to -1.
*******************************************************************************************************************/

#include "IntQueue.h"
#include <iostream>
using namespace std;

int main()
{
    IntQueue iQueue(5);

    cout << "Enqueuing 5 items...\n";

    // Enqueue 5 items
    for (int k = 1; k <= 5; k++)
        iQueue.enqueue(k*k);

    // Dequeue and retrieve all items in the queue
    cout << "The values in the queue were: ";
    while (!iQueue.isEmpty()){
        int value;
        iQueue.dequeue(value);
        cout << value << "  ";
    }
    cout << endl;

    return 0;
}
