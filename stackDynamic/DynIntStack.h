/*****************************************************************************************************************
** Program Filename: DynIntStack.h
** Author: Peter Moldenhauer
** Date: 11/18/16
** Description: This is the header file for the DynIntStack class. This class is a dynamic version of the IntStack
** in the stackStatic file.
*******************************************************************************************************************/

#ifndef DYNINTSTACK_H
#define DYNINTSTACK_H
#include <cstdlib>  // for NULL

class DynIntStack
{
private:
    class StackNode{ // The stackNode class is the data type of each node in the linked list.
        friend class DynIntStack;
        int value;
        StackNode *next;
        // Constructor
        StackNode(int value1, StackNode *next1 = NULL){
            value = value1;
            next = next1;
        }
    };
    StackNode *top; // Because it is easy to add and remove items at the beginning of the list, make the beginning of the linked list the top of
                    // the stack and use a pointer top to point to the first node in the list. This pointer is initialized to NULL by the stack
                    // constructor  to signify that the stack is created empty
public:
    DynIntStack() {top = NULL;}
    void push(int);  // creates a new node whose value is the number to be pushed on the stack and whose successor pointer is the node that is currently the top of the stack, and then makes the newly created node the new top of the stack
    void pop(int &); // deletes nodes at the head of the list.
    bool isEmpty() const; // determines whether there are any nodes in the stack
};

#endif // DYNINTSTACK_H
