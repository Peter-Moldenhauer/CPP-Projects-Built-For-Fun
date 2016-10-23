/*****************************************************************************************************
** Name: Peter Moldenhauer
** Date: 10/23/16
** Description: This program demonstrates the binary search algorithm of an array. A requirement for
** binary search is that the values in the array must be in order. Instead of testing the array's
** first element, this algorithm starts with the element in the middle. If that element happens to
** contain the desired value, then the search is over. Otherwise the value in the middle element is
** either greater than or less than the value being searched for. If it is greater than the desired
** value then the value (if it is on the list) will be found somewhere in the first half of the array.
** If it is less than the desired value then the value (if on the list) will be somewhere in the last
** half of the array. In either case, half of the array's elements have been eliminated from searching
** This algorithm uses three index variables: first, last and middle.
******************************************************************************************************/

#include <iostream>
using namespace std;

int binarySearch(const int [], int, int);  // function prototype

const int SIZE = 20;

int main() // performs binary search on an integer array whose elements are in ascending order
{
    //create an array of ID numbers sorted in ascending order
    int IDnums[SIZE] = {101, 142, 147, 189, 199, 207, 222,
                        234, 289, 296, 310, 319, 388, 394,
                        417, 429, 447, 521, 536, 600 };

    int empID, //Holds the ID to search for
        results; // holds the search results

    // get an employee to search for
    cout << "Enter the employee ID you wish to search for: ";
    cin >> empID;

    // search for the ID
    results = binarySearch(IDnums, SIZE, empID);

    // if binary search returns -1 the ID was not found
    if (results == -1)
        cout << "That number does not exist in the array.\n";
    else{
        // otherwise results contains the subscript of the specified employee ID in the array
        cout << "ID " << empID << " was found in element " << results << " of the array.\n";
    }

    return 0;
}

/*************************************************************************
* binary search function:
*This function performs a binary search on an integer array with size
*elements whose values are stored in ascending order. The array is
*searched for the number stored in the value parameter. If the number is
*found, its array subscript is returned. Otherwise, -1 is returned
**************************************************************************/
int binarySearch(const int array[], int size, int value){

    int first = 0,  // first array element
        last = size - 1,  // last array element
        middle, // midpoint of search
        position = -1;  // position of search value
    bool found = false;  // flag

    while (!found && first <= last){
        middle = (first + last) / 2;  // calculate midpoint
        if (array[middle] == value){  // if value is found at middle
            found = true;
            position = middle;
        }
        else if (array[middle] > value) // if value is in lower half
            last = middle - 1;
        else
            first = middle + 1; // if value is in upper half
    }
    return position;
}
