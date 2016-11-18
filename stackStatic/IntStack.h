/*****************************************************************************************************************
** Program Filename: IntStack.h
** Author: Peter Moldenhauer
** Date: 11/18/16
** Description: This is the header file for the IntStack class.
*******************************************************************************************************************/

#ifndef INTSTACK_H
#define INTSTACK_H


class IntStack
{
    private:
        int *stackArray; // A pointer to int. When the constructor is executed, it uses stackArray to dynamically allocate an array for storage
        int capacity; // An integer that holds the size of the stack. This is the max number of elements the stack can hold, not the number of elements currently in the stack
        int top; // An integer that is used to mark the top of the stack. It specifies the position of the next item that will be added to the stack

    public:
        IntStack(int capacity); // Constructor, accepts an integer argument which specifies the size of the stack. An integer array of this size is dynamically allocated and assigned to stackArray. Also, the variable top is initialize to 0 to indicate that the stack is currently empty
        ~IntStack() { delete[] stackArray; } // Destructor, deallocate memory
        void push(int value); // This function accepts an integer argument which is pushed onto the top of the stack
        void pop(int &value); // This function uses an integer reference parameter. The value at the top of the stack is removed and copied into the reference parameter
        bool isEmpty() const; // Returns true if the stack is empty, and false otherwise. The stack is empty when top is set to 0

        //stack exceptions - two classes inside of IntStack to detect overflow and underflow
        class Overflow {};
        class Underflow {};
};

#endif // INTSTACK_H
