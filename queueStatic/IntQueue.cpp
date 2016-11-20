/*****************************************************************************************************************
** Program Filename: IntQueue.cpp
** Author: Peter Moldenhauer
** Date: 11/19/16
** Description: This is the implementation file for the IntQueue class. IntQueue is a static queue.
*******************************************************************************************************************/

#include "IntQueue.h"
#include <iostream>
using namespace std;

/********************************************
* Function: IntQueue()
* Description: class constructor
*********************************************/
IntQueue::IntQueue(int s){
    queueArray = new int[s];
    queueSize = s;
    front = -1;
    rear = -1;
    numItems = 0;
}

/*****************************************************
* Function: ~IntQueue()
* Description: class destructor
******************************************************/
IntQueue::~IntQueue(){
    delete [] queueArray;
}

/****************************************************************
* Function: enqueue()
* Description: inserts the value in num at the rear of the queue
*****************************************************************/
void IntQueue::enqueue(int num){
    if (isFull()){
        cout << "The queue is full.\n";
        exit(1);
    }
    else {
        // calculate the new rear position
        rear = (rear + 1) % queueSize;
        // insert new item
        queueArray[rear] = num;
        // update item count
        numItems++;
    }
}

/********************************************************************
* Function: dequeue()
* Description: removes the value at the front of the queue and copies
* it to num
*********************************************************************/
void IntQueue::dequeue(int &num){
    if (isEmpty()){
        cout << "The queue is empty.\n";
        exit(1);
    }
    else {
        // move front
        front = (front + 1) % queueSize;
        // Retrieve the front item
        num = queueArray[front];
        // update item count
        numItems--;
    }
}

/**********************************************************************
* Function: isEmpty()
* Description: returns true if the queue is empty, and false otherwise
***********************************************************************/
bool IntQueue::isEmpty() const {
    if (numItems > 0)
        return false;
    else
        return true;
}

/**************************************************************************
* Function: isFull()
* Description: returns true if the queue is full and false otherwise
***************************************************************************/
bool IntQueue::isFull() const {
    if (numItems < queueSize)
        return false;
    else
        return true;
}

/*************************************************************************
* Function: clear()
* Description: resets the front and rear indices and sets numItems to 0
*************************************************************************/
void IntQueue::clear(){
    front = -1;
    rear = -1;
    numItems = 0;
}

