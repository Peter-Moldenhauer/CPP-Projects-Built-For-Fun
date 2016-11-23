/*****************************************************************************************************
** Name: Peter Moldenhauer
** Date: 11/22/16
** Description: This program demonstrates the use of the list container in the Standard Template
** Library (STL). A list is a sequence container. A list is a doubly linked list with each item inside 
** of the list has one pointer pointing to the item in the front and another pointer pointing to the 
** item behind. A key attribute of a list is that you have fast insert and removal of items from any 
** place inside the list, not just in the front or in the back (as in vector or deque) 
** Note: there is no random access with lists, no [] operator
******************************************************************************************************/

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;  // Everything using the STL library uses namespace std


int main()
{
    // CONTAINER
    list<int> myList = {5, 2, 9};
    myList.push_back(6); //myList: {5, 2, 9, 6} - puts an item at the end
    myList.push_front(4); // myList: {4, 5, 2, 9, 6} - puts an item at the beginning

    // ALGORITHM - use algorithm function to find the item of 2, now itr (the iterator) is pointing to 2
    list<int>::iterator itr = find(myList.begin(), myList.end(), 2); // itr -> 2

     // Insert an element of 8 in front of itr (in front of 2)
     myList.insert(itr, 8);  // myList: {4, 5, 8, 2, 9, 6} - faster than vector or deque

     // Increment itr, so itr now points to 9 (9 is the next element after 2)
     itr++;  // itr -> 9

     // Erase the itr, so now 9 is erased (because itr was pointing to 9)
     myList.erase(itr);  // myList: {4, 8, 5, 2, 6}

     // Use splice to cut the range of data in myList2 and put it into myList1 - none of the other containers can do this (splice)
     //myList1.splice(itr, myList2, itr_a, itr_b);

    return 0;
}
