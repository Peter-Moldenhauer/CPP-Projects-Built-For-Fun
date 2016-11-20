/*****************************************************************************************************************
** Program Filename: IntQueue.h
** Author: Peter Moldenhauer
** Date: 11/19/16
** Description: This is the header file for the IntQueue class. IntQueue is a static queue.
*******************************************************************************************************************/

#ifndef INTQUEUE_H
#define INTQUEUE_H
#include <cstdlib>  // for exit()

class IntQueue
{
private:
    int *queueArray;  // the pointer to a dynamically allocated array of size queueSize
    int queueSize;  // size of the array
    int front;  // the place in the queue that used to hold the item that was last removed from the queue
    int rear;  // the place in the queue holding the item that was last added to the queue
    int numItems;  // counter variable

public:
    IntQueue(int);
    ~IntQueue();
    void enqueue(int);
    void dequeue(int &);
    bool isEmpty() const;
    bool isFull() const;
    void clear();  // this clears the queue by resetting the front and rear indicies and setting the numItems to 0
};

#endif // INTQUEUE_H
