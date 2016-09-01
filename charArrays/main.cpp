/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 9/1/16
*Description: This program demonstrates some of the uses of char arrays.
*********************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    //1 way to create a char array:
    char text[] = "hello"; //C++ puts the separate characters into the char array
    cout << text << endl; //print out array

    //print out each individual element of array using for loop:
    for(int i=0; i<sizeof(text); i++){
        cout << i << ": " << text[i] << endl;
    } //The last character that is printed out in the cout line is a blank character - this is a null terminator which is used to tell C++ where the end of the array is

    //print out array using while loop:
    int k = 0;
    while(true){ //infinite loop since its while true - until break in loop
        if(text[k] == 0)
            break; //break out of infinite loop
        cout << text[k] << flush;
        k++;
    }

    return 0;
}
