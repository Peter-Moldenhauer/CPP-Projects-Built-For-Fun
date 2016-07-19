/********************************************************************************
** Name: Peter Moldenhauer
** Date: 7/18/2016
** Description: This program demonstrates multiple uses and functions of arrays.
*********************************************************************************/

#include <iostream>
#include <algorithm>  //needed for the sort function
using namespace std;

void printArray(int theArray[], int sizeOfArray);  //prototype of a function to print out array elements

int main()
{
    int array[] = {23, 5, -10, 0, 0, 321, 1, 2, 99, 30}; //initialize an array of ints not in order
    int size = 10; //use this variable for the corresponding size of the array

    cout << "\nFun with arrays!!!" << endl;
    cout << "\nThese are the elements of the array:" << endl;

    for (int i=0; i<size; i++)  //print out all of the array elements using a loop
        cout << array[i] << " ";



    //calculate the sum of the array...
    int sum = 0;
    for (int i =0; i<size; i++)
        sum += array[i];

    cout << "\n\nThis is the sum of the array elements: " << sum << endl;  //print out sum of array elements



    cout << "\nThese are the elements of the array (again):" << endl;
    printArray(array, size);  //print out the array elements by calling the function outside of main
    //Note: Above when the printArray function is called, just use the array name without [] to use the array as an argument to be passed


    //Below I will find the highest value in the array...
    int highest;
    highest = array[0];
    for(int i = 0; i < size; i++)
    {
        if (array[i] > highest)
            highest = array[i];
    }
    cout << "\n\nThe highest value in the array is: " << highest << endl;


    //Below I will find the lowest value in the array..
    int lowest;
    lowest = array[0];
    for(int i = 0; i < size; i++)
    {
        if(array[i] < lowest)
            lowest = array[i];
    }
    cout << "\nThe lowest value in the array is: " << lowest << endl;


    //Below I will demonstrate the concept of multidimensional arrays
    int multiArray[2][3] = {{1,2,3},{7,8,9}};  //define a 2D array with 2 rows and 3 columns
    cout << "\nThese are the elements in a 2-dimensional array: \n" << endl;
    for(int row=0; row<2; row++)  //print out the contents of the 2D array using nested loop for rows and columns
    {
        for(int column=0; column<3; column++) //nested for loop for columns in each row iteration
        {
            cout << multiArray[row][column] << " "; //print out array element
        }
        cout << endl; //add this because after we printed out the first row, we want the second row on a new line
    }

    cout << endl;
    return 0;
}

//This function demonstrates another way of printing out the array elements to the screen
//Instead of creating a for loop each time, just make the function and call the function each time
void printArray(int theArray[], int sizeOfArray)
{
    for(int i=0; i<sizeOfArray; i++)
        cout << theArray[i] << " ";
}

