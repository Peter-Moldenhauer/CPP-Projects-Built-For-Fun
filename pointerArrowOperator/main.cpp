/*****************************************************************************
*Name: Peter Moldenhauer
*Date: 8/19/16
*Description: This program demonstrates the use of the arrow member selection
operator used with pointers.
******************************************************************************/
#include "Arrow.h"
#include <iostream>
using namespace std;

int main()
{
    Arrow arrowObject; //create an object from the Arrow class

    //One way to access items in the Arrow class is with the dot operator such as:
    arrowObject.printToScreen();

    //Another way to access items in the Arrow class is to make a pointer to the arrowObject
    //To create a pointer, you first need to type the type of data it will point to, in this example it will be "Arrow" type of data (because we want to access items in the Arrow class)
    //Note: a class is just a type of data that you create yourself, this is why Arrow is a type of data
    //So, create the Arrow pointer and assign it to the memory address of arrowObject
    Arrow *arrowPointer = &arrowObject;
    //Now, we can use the pointer to access items in the Arrow class
    //Note: Whenever you use a pointer to access items inside of a class, you need to use the ARROW MEMBER SELECTION OPERATOR ->
    arrowPointer->printToScreen();

    //In summary, there are two different ways to access items inside of a class
    //using objects and the dot operator and then also using pointers and the arrow member selection operator

    return 0;
}
