/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 9/1/16
*Description: This program demonstrates how to reverse a string in a char array using pointers.
Note: This program reverses a string using pointers but there are a few other ways of reversing strings.
Another way of doing this would be to use a for loop and to use the array[i] index notation to loop
though and swap the individual characters of the array.
*********************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    char text[] = "hello"; //declare a char array with the the string hello assigned to it
    cout << text << endl; //print out the array not reversed

    //Find the array size, beginning element and last element of the array:
    int nChars = sizeof(text)-1; //determine the size of the array using the sizeof() function. Remember: a char array has the null terminator at the end of it so you need to subtract 1 to get the specific number of characters in the array
    char *pStart = text; //find the first element of the array - declare a pointer to a char and assign the first element of the array to it
    char *pEnd = text + nChars - 1; //find the last element of the array - use pointer arithmetic to add the size of the array to the first element pointer (this will put you one past the last element of the array because you are already at the first element with the first pointer, this is why you need to subtract 1)

    //create a loop to iterate though the array to swap the characters
    while(pStart < pEnd){
        char save = *pStart; //dereference pStart pointer and save the value into a temporary holding char variable
        *pStart = *pEnd; //dereference pointers and assign the value of pEnd to pStart
        *pEnd = save; //dereference pEnd pointer and assign the value of the temporary holding char variable to it

        pStart++; //use pointer arithmetic to increment the pStart pointer to the next pointer in line
        pEnd--; //use pointer subtraction to decrement the pEnd pointer to the element right before the last element
    }

    //print out the array in reverse order:
    cout << text << endl;

    return 0;
}
