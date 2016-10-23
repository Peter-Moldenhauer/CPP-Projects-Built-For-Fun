/*****************************************************************************************************
** Name: Peter Moldenhauer
** Date: 10/23/16
** Description: This program demonstrates the bubble sort algorithm to arrange data in ascending or
** descending order. Bubble sort works by comparing each element in the array with its neighbor and
**swapping them if they are not in the desired order.
******************************************************************************************************/

#include <iostream>
using namespace std;

// function prototypes
void sortArray(int [], int);
void showArray(const int [], int);

int main(){
    const int SIZE = 6;

    // array of unsorted values
    int values [SIZE] = {7, 2, 3, 8, 9, 1};

    // display the values
    cout << "The unsorted values are:\n";
    showArray(values, SIZE);

    // sort the values
    sortArray(values, SIZE);

    // display them again
    cout << "The sorted values are:\n";
    showArray(values, SIZE);

    return 0;
}

/*************************************************
* sort array function:
*This function performs an ascending order bubble
*sort on array. The parameter size holds the number
*of elements in the array.
**************************************************/
void sortArray(int array[], int size){
    int temp;
    bool swap;

    do{
        swap = false;
        for (int count = 0; count < (size - 1); count++){
            if (array[count] > array[count + 1]){
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
            }
        }
    } while (swap); // loop again if a swap occurred on this pass
}

/*********************************************************
*show array function:
*This function displays the contents of array. The
*parameter size holds the number of elements in the array
**********************************************************/
void showArray(const int array[], int size){
    for (int count = 0; count < size; count++)
        cout << array[count] << " ";
    cout << endl;
}
