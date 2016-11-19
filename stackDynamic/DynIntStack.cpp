/*****************************************************************************************************************
** Program Filename: DynIntStack.cpp
** Author: Peter Moldenhauer
** Date: 11/18/16
** Description: This is the implementation file for the DynIntStack class.
*******************************************************************************************************************/

#include "DynIntStack.h"
#include <iostream>
using namespace std;

/***************************************************************
* Function: push()
* Description: This function pushes the argument onto the stack
***************************************************************/
void DynIntStack::push(int num){
    top = new StackNode(num, top);
}


/***********************************************************************
* Function: pop()
* Description: This function removes the value at the top of the stack
* and copies it into the variable passed as an argument
************************************************************************/
void DynIntStack::pop(int &num){
    StackNode *temp;

    if (isEmpty()){
        cout << "The stack is empty.\n";
        exit(1);
    }
    else{ // Pop vlaue off top of stack
        num = top->value;
        temp = top;
        top = top->next;
        delete temp;
    }
}


/***********************************************************************
* Function: isEmpty()
* Description: This function returns true if the stack is empty
************************************************************************/
bool DynIntStack::isEmpty() const {
    if (!top)
        return true;
    else
        return false;
}
