/*****************************************************************************************************
** Name: Peter Moldenhauer
** Date: 10/23/16
** Description: This program demonstrates the selection sort algorithm. Like bubble sort, this
** algorithm places just one item in its correct position on each pass. However, unlike bubble sort
**(which is inefficient for large arrays because repeated data swaps are often required to place a
** single item in its correct position) selection sort usually performs fewer exchanges because it
**moves items immediately to their correct position in the array.
******************************************************************************************************/

#include <iostream>
using namespace std;

// function prototypes
void selectionSort(int [], int);
void showArray(const int [], int);

int main(){
    const int SIZE = 6;

    // array of unsorted values
    int values[SIZE] = {5, 7, 2, 8, 9, 1};

    // display the values
    cout << "The unsorted values are\n";
    showArray(values, SIZE);

    //sort the array
    selectionSort(values, SIZE);

    // display the values again
    cout << "The sorted values are\n";
    showArray(values, SIZE);

    return 0;
}

// this function performs an ascending order selection sort on array
void selectionSort(int array[], int size){
    int startScan, minIndex, minValue;

    for (startScan = 0; startScan < (size - 1); startScan++){
        minIndex = startScan;
        minValue = array[startScan];
        for (int index = startScan + 1; index < size; index++){
            if (array[index] < minValue){
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}

// this function displays contents of the array
void showArray(const int array[], int size){
    for (int count = 0; count < size; count++)
        cout << array[count] << " ";
    cout << endl;
}
