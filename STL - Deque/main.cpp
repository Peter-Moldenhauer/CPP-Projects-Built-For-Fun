/*****************************************************************************************************
** Name: Peter Moldenhauer
** Date: 11/22/16
** Description: This program demonstrates the use of the deque container in the Standard Template
** Library (STL). A deque is a sequence container. Unlike a vector where you can only insert items at 
** the end, a deque can grow in two directions. A deque can grow at the beginning and at the end.
******************************************************************************************************/

#include <iostream>
#include <deque>
using namespace std;  // Everything using the STL library uses namespace std


int main()
{
    // CONTAINER
    deque<int> deq = {4, 6, 7};
    deq.push_front(2);  // deq: {2, 4, 6, 7}
    deq.push_back(3);   // deq: {2, 4, 6, 7, 3}

    // deque has a similar interface with vector
    cout << deq[1];  // prints 4

    return 0;
}
