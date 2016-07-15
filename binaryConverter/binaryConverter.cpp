/***********************************************************
** Name: Peter Moldenhauer
** Date: 7/12/2016
** Description: This program converts a decimal (base 10)
**number into binary (base 2). Uses a loop and an array.
************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int arr[100];  //Declare an array of 100 ints (used to hold the binary number)
    int num; //Declare a variable for user input number
    int i = 0, j; //Declare variables to be used in array assignment and loop

    cout << "\n*** Decimal to Binary Converter ***\n" << endl;
    cout << "Enter in a positive integer to be converted to binary: ";
    cin >> num;  //User integer input

    if (num == 0)  //0 in decimal is also 0 in binary
        cout << "This number in binary is: 0" << endl;
    else  //If user did not enter 0 then initialize an array to hold the corresponding binary number
    {
        while (num > 0)  //Keep looping and initializing array until num = 0
        {
            arr[i] = num % 2; //Assign element i of array to the base 2 remainder
            i++; //increment i so that the next element of array can be initialized
            num = num / 2;  //Divide user input number by 2 (division of ints so remainder is not included)
        }

        cout << "This number in binary is: ";

        for (j = i-1; j >= 0; j--) //Print out each element of the array in reverse order to get the binary number
        {
            cout << arr[j];  //Print out element of array
        }
    }
    cout << endl << endl;
    return 0;
}
