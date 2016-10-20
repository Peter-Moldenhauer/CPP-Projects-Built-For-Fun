/*****************************************************************************************************
** Name: Peter Moldenhauer
** Date: 10/19/16
** Description: This program demonstrates the concept of recursion by counting the number of times
** a character occurs in a string. In this example I will use the string "abbbbcdef" in which 'b'
** occurs four times. The base case is an empty string that has 0 occurrences of any letter.
** The logic of the program is as follows: Pull out a, don't increment counter then count "bbbbcdef"
** Next, pull out b, increment counter then count "bbbcdef". Repeat until empty string...
******************************************************************************************************/

#include <iostream>
using namespace std;

int numChars(char charLookingFor, char stringArray[], int arrayIndex);

int main()
{
    char theArray[] = "abbbbcdef";
    cout << "The letter b appears " << numChars('b', theArray, 0) << " times.\n";

    return 0;
}

int numChars(char charLookingFor, char stringArray[], int arrayIndex){
    if (stringArray[arrayIndex] == '\0')  // this is the base case
        return 0; // return 0 if nothing exists in the array, its just a blank array

    if (stringArray[arrayIndex] == charLookingFor)
        return 1 + numChars(charLookingFor, stringArray, arrayIndex+1); // return a 1 and add to it the remaining result of the search of the string
    else
        return numChars(charLookingFor, stringArray, arrayIndex+1); // just count the remainder of the string if the character looking for was not found here
}
