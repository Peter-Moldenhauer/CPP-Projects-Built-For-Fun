/*****************************************************************************************************************
** Program Filename: main.cpp
** Author: Peter Moldenhauer
** Date: 11/18/16
** Description: This program demonstrates the use of a static stack data structure. A stack is a data structure
** that stores and retrieves items in a first-in, last-out (FILO) manner. There are two types of stack data
** structures: static and dynamic. Static stacks have fixed size and are implemented as arrays. Dynamic stacks
** grow in size as needed and are implemented as linked lists. A stack has two primary operations: push and pop.
** With a static stack, there needs to be a boolean isFull operation to return true if the stack is full and false
** otherwise. This is necessary to prevent stack overflow in the event a push is attempted when all the stack's
** elements have values stored in them. There also has to be a boolean isEmpty operation to prevent an error from
** occurring when a pop operation is attempted on an empty stack.
** Note: Even though the constructor dynamically allocates the stack array, it is still considered a static stack
** since the size of the stack does not change once it is allocated.
*******************************************************************************************************************/

#include "IntStack.h"
#include <iostream>
using namespace std;

int main()
{
    IntStack stack(5);
    int values[] = {5, 10, 15, 20, 25};
    int value;

    cout << "Pushing...\n";
    for (int k = 0; k < 5; k++){
        cout << values[k] << " ";
        stack.push(values[k]);
    }
    cout << "\nPopping...\n";
    while (!stack.isEmpty()){
        stack.pop(value);
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
