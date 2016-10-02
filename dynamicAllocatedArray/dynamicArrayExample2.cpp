/*************************************************************************************************
** Name: Peter Moldenhauer
** Date: 10/2/16
** Description: This program demonstrates the concept of dynamic allocation of memory with arrays.
** In this program I will dynamically create an array with the size of the array based on user
** input. Then I will I have user input data into each element of the array, I will print out the
** array and then I will free up the allocated memory using the delete keyword.
**************************************************************************************************/


#include <iostream>
using namespace std;

int main()
{
    int *pointer = NULL; //declare a pointer to an int
    int numOfNumbs;  //variable for size of array

    cout << "How many numbers do you want to enter? " << endl;
    cin >> numOfNumbs;

    pointer = new int[numOfNumbs];

    int inputNumb; //variable for input of array element

    for (int i=0; i<numOfNumbs; i++){ //initialize the dynamic array with user input at each element
        cout << "Enter item number " << i+1 << ": ";
        cin >> inputNumb;
        *(pointer + i) = inputNumb;
    }

    cout << endl;
    cout << "The numbers you entered are: " << endl;

    for (int i=0; i<numOfNumbs; i++){  //print out the values in the array
        cout << "Item number " << i+1 << " is: " << *(pointer+i) << endl;
    }

    delete []pointer; //deallocate the memory

    return 0;
}
