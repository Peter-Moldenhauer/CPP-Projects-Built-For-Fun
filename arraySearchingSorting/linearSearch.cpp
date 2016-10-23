/*****************************************************************************************************
** Name: Peter Moldenhauer
** Date: 10/23/16
** Description: This program demonstrates the linear search (sequential search) algorithm. It uses a
** loop to sequentially step through an array, starting with the first element. It compares each
** element with the value being searched for and stops when either the value is found or the end of
** the array is encountered. If the value being searched for is not in the array, the algorithm will
** search to the end of the array.
**
** Advantage of the linear search is simplicity, easy to understand and implement. Disadvantage is
** inefficiency. Algorithm would possibly need to look at every single element if desired value was
** last element in array or not in array at all.
******************************************************************************************************/

#include <iostream>
using namespace std;

int searchList(const int [], int, int);  // function prototype

const int SIZE = 5;

int main()
{
    int tests[SIZE] = {87, 75, 98, 100, 82};  // the algorithm will search through this array to find the 100
    int results;  // holds search results

    // Search the array for the value of 100
    results = searchList(tests, SIZE, 100);

    // if search returns -1, 100 was not found
    if (results == -1)
        cout << "You did not earn 100 points on any test.\n";
    else {
        // Otherwise results contains the subscript of
        // the first 100 found in the array
        cout << "You earned 100 points on test ";
        cout << (results + 1) << ".\n";
    }
    return 0;
}

/*************************************************************
* searchList function:
* This function performs a linear search on an integer array.
* The list array, which has size elements, is searched for
* the number stored in value. If the number is found, its array
* subscript is returned. Otherwise, -1 is returned.
***************************************************************/
int searchList(const int list[], int size, int value){

    int index = 0; // used as a subscript to search array
    int position = -1; // used to record position of search value
    bool found = false;  // flag to indicate if the value was found

    while (index < size && !found){
        if (list[index] == value){  // if the value is found
            found = true;  // set the flag
            position = index; // record the value's subscript
        }
        index++;  // go to the next element
    }
    return position;  // return the position or -1
}
