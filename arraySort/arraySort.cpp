/***************************************************************************
** Name: Peter Moldenhauer
** Date: 7/18/2016
** Description: This program demonstrates the use of arrays and the sort
**function. The program starts by initializing an array of integers and then
**uses the sort function to order the integers in ascending order. A loop
**then prints out each element of the array in this new sorted order.
****************************************************************************/

#include <iostream>
#include <algorithm>  //needed for the sort function
using namespace std;

int main()
{
    int array[] = {23, 5, -10, 0, 0, 321, 1, 2, 99, 30}; //initialize an array of ints not in order
    int size = 10; //use this variable for the corresponding size of the array

    cout << "\nThis program orders the elements of an array." << endl;
    cout << "This is the starting order of the elements in the array..\n" << endl;

    for (int i = 0; i < size; i++)  //use a loop to print out all of the elements of the array
        cout << array[i] << " ";

    cout << "\n\nThis is the ending order of the elements in the array in ascending order...\n" << endl;

    sort(array, array + size);  //This sort function takes two arguments, a pointer to the first element and a pointer to the final element (final element got through pointer arithmetic)

    for (int i = 0; i < size; i++)  //use a loop to print out all of the sorted elements of the array
        cout << array[i] << " ";

    cout << endl;

    return 0;
}
