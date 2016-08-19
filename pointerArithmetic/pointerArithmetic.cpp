/*****************************************************************************
*Name: Peter Moldenhauer
*Date: 8/19/16
*Description: This program demonstrates the concept of pointers arithmetic.
Whenever you add integers to a pointer, it does not change the memory address
of the pointer, it just changes what element it is pointing to.
******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int intArray[5]; //declare an array of 5 ints, remember that each int takes up 4 bytes of memory
    int *pointer1 = &intArray[0]; //declare a pointer to the memory address of the first element of the array
    int *pointer2 = &intArray[1]; //declare a pointer to the memory address of the second element of the array
    int *pointer3 = &intArray[2]; //declare a pointer to the memory address of the third element of the array

    cout << "pointer1 is at the memory location of: " << pointer1 << endl;
    cout << "pointer2 is at the memory location of: " << pointer2 << endl;
    cout << "pointer3 is at the memory location of: " << pointer3 << endl;

    //when 2 is added to pointer1, 2 is NOT added to the memory address, instead it now points to 2 elements away from pointer1 (which is pointer3)
    pointer1 += 2;
    cout << "After adding 2 to pointer1, pointer1 now has the memory location of: " << pointer1 << endl;

    return 0;
}
