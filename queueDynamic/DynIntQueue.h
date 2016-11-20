/*****************************************************************************************************************
** Program Filename: DynIntQueue.h
** Author: Peter Moldenhauer
** Date: 11/19/16
** Description: This is the header file for the DynIntQueue class. DynIntQueue is a dynamic queue of ints.
*******************************************************************************************************************/

#ifndef DYNINTQUEUE_H
#define DYNINTQUEUE_H
#include <cstdlib>

class DynIntQueue
{
private:
    class QueueNode
    {
        friend class DynIntQueue;
        int value;
        QueueNode *next;
        QueueNode(int value1, QueueNode *next1 = NULL){
            value = value1;
            next = next1;
        }
    };
    // These track the front and rear of the queue
    QueueNode *front;
    QueueNode *rear;
public:
    // Constructor and Destructor
    DynIntQueue();
    ~DynIntQueue();

    // Member functions
    void enqueue(int);
    void dequeue(int &);
    bool isEmpty() const;
    void clear();
};

#endif // DYNINTQUEUE_H
