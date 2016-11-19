/*****************************************************************************************************************
** Program Filename: main.cpp
** Author: Peter Moldenhauer
** Date: 11/18/16
** Description: This program demonstrates a dynamic stack. A dynamic stack is built on a linked list instead of an
** array. Therefore, this stack can expand or shrink with each push or pop operation. A dynamic stack will never
** be full as long as the system has enough free memory.
*******************************************************************************************************************/

#include "DynIntStack.h"
#include <iostream>

using namespace std;

int main()
{
    DynIntStack stack;
    int catchVar;

    cout << "Pushing 5\n";
    stack.push(5);
    cout << "Pushing 10\n";
    stack.push(10);
    cout << "Pushing 15\n";
    stack.push(15);

    cout << "Popping...\n";
    stack.pop(catchVar);
    cout << catchVar << endl;
    stack.pop(catchVar);
    cout << catchVar << endl;
    stack.pop(catchVar);
    cout << catchVar << endl;

    cout << "\nAttempting to pop again...";
    stack.pop(catchVar);

    return 0;
}
