/************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/19/16
*Description: This program demonstrates the use of the "this" keyword. Whenever you use the
keyword this, it is stored as a special type of pointer. The pointer stores the address of the
current object. Remember, the keyword "this" is a pointer which stores the address of the current
object that you are working with.
**************************************************************************************************/

#include "MyClass.h"
#include <iostream>
using namespace std;

int main()
{
    MyClass classObject(99);  //create an object and pass it an integer
    classObject.printToScreen();  //use the object to access the function in the class

    return 0;
}
