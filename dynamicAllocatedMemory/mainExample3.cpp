/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 9/8/16
*Description: This program demonstrates dynamic memory allocation with the use of the "new" operator.
This program specifically addresses how to create new memory in a function but fill the contents outside
of the function. There are two ways to do this - see createMemory and createMemory2 functions...
*********************************************************************************************************/

#include <iostream>
#include <cstdlib>  //used to assign pointers to NULL
using namespace std;

//create the new memory in a function but fill the contents outside of the function:
void createMemory(int **m); //prototype - function below main, NOTE: the double pointer

int * createMemory2(); //prototype - return an address that will point to an int

int main()
{
    int *i = NULL; //declare a pointer to an int, get in habit of setting it to NULL if not initialized right away
    i = new int;  //dynamically allocate memory for an int on the HEAP
    *i = 5; //dereference pointer to assign 5 to its contents

    cout << "Address of i: " << &i << endl; //print out the address of i - this is a STACK address
    cout << "Address of heap: " << i << endl; //address of heap - this is what is inside of i
    cout << "Contents of heap: " << *i << endl; //contents of heap - dereference pointer

    //use the createMemory function:
    int *j = NULL;
    createMemory(&j);
    *j = 10;

    cout << "Address of j: " << &j << endl; //print out the address of j - this is a STACK address
    cout << "Address of heap: " << j << endl; //address of heap - this is what is inside of j
    cout << "Contents of heap: " << *j << endl; //contents of heap - dereference pointer

    //use the createMemory2 function:
    int *k = NULL;
    k = createMemory2(); //return the contents of createMemory2 function (which is a new int) into k
    *k = 15;

    cout << "Address of k: " << &k << endl; //print out the address of j - this is a STACK address
    cout << "Address of heap: " << k << endl; //address of heap - this is what is inside of j
    cout << "Contents of heap: " << *k << endl; //contents of heap - dereference pointer

    delete i;
    delete j;
    delete k;

    return 0;
}

void createMemory(int **m) {
    *m = new int; //we are assigning *m not m because we want to dereference and return the address of
}

int * createMemory2() {
    return new int;  //this does not return an integer - this returns an address of where the integer is going to live on the HEAP
}
