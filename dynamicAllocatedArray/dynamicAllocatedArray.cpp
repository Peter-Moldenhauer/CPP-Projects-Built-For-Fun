/*****************************************************************************************
** Name: Peter Moldenhauer
** Date: 7/28/2016
** Description: This program demonstrates the concept of dynamic memory allocation. In
**this program I will dynamically create an array and then delete it to clear out the heap
**memory before the program finishes. The main advantage of dynamically allocated arrays
**instead of static arrays is that with dynamic arrays you can delete them when you are
**done using them. This clears up memory. Static arrays remain in memory for the entire
**length of the program.
*******************************************************************************************/

#include <iostream>
using namespace std;

const int CAPACITY = 1000;

int main()
{
    int *dynamicArray; //declare a pointer to an int variable, at this time the pointer is not pointing to anything
    dynamicArray = new int[CAPACITY]; //dynamically create an array with the size of CAPACITY
    //The "new" keyword is how you dynamically create this array (otherwise it would just be a static array)

    //assign values to a specific index of the array below, remember do not use the * at this time
    dynamicArray[0] = 3;
    dynamicArray[1] = 19;
    dynamicArray[2] = 97;
    dynamicArray[3] = 42;
    dynamicArray[4] = 81;

    //print out the array to the screen
    cout << "\nArray: ";

    //loop through the array to return the index values of the array
    for(int i=0; i<5; i++)
    {
        cout << dynamicArray[i] << " ";
        //remember do NOT use the dereference operator (*) with returning the values of an array index, as demonstrated above
    }

    //delete the dynamic array before the program ends
    delete [] dynamicArray; //use the [] after delete because its an array, if it was just a pointer variable then do not include the []
    //now at this point all of the values of the array were deleted so there are "garbage" values left the the array now
    cout << "\nHere is the 1st index of the array after the array has been deleted: " << dynamicArray[0] << endl;
    //to completely "delete" the array, assign Null to the array
    dynamicArray = NULL;  //now that Null is assigned to the array, even the "garbage" values of the array are gone. Don't NEED to do this but just a good habit to get into.

    return 0;
}
