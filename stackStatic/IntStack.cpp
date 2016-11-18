/*****************************************************************************************************************
** Program Filename: IntStack.cpp
** Author: Peter Moldenhauer
** Date: 11/18/16
** Description: This is the implementation file for the IntStack class.
*******************************************************************************************************************/

#include "IntStack.h"

/********************************************
* Function: IntStack()
* Description: This is the class constructor
*********************************************/
IntStack::IntStack(int capacity){
    this->capacity = capacity;
    stackArray = new int[capacity];
    top = 0;
}


/********************************************
* Function: push()
* Description: Adds a value to the stack
*********************************************/
void IntStack::push(int value){
    if (top == capacity) throw IntStack::Overflow();
    stackArray[top] = value;
    top++;
}


/********************************************
* Function: isEmpty()
* Description: Determines if stack is empty
*********************************************/
bool IntStack::isEmpty() const {
    if (top == 0)
        return true;
    else
        return false;
}


/********************************************************
* Function: pop()
* Description: Removes value from stack and returns it
*********************************************************/
void IntStack::pop(int &value){
    if (isEmpty()) throw IntStack::Underflow();
    top--;
    value = stackArray[top];
}
