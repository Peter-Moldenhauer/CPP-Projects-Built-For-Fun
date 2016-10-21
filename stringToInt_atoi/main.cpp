/*****************************************************************************************************
** Name: Peter Moldenhauer
** Date: 10/21/16
** Description: This program demonstrates the strcmp and atoi functions. This program uses the string-
** to-number conversion function, atoi. It allows the user to enter a series of values, or the letters
** Q or q to quit. The average of the numbers is then calculated and displayed.
**
** The strcmp compares two C-strings. If they are identical, it returns 0. Otherwise a nonzero value
** is returned. The while statement in the program uses strcmp to determine if the string in input is
** either Q or q. If the user hasn't entered Q or q the program uses atoi to convert the string in
** input to an integer and adds its value to total.
******************************************************************************************************/

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int numChars(char charLookingFor, char stringArray[], int arrayIndex);

int main()
{
    // Array used to read number in string form
    const int LENGTH = 20;
    char input[LENGTH];

    int total = 0; //running total
    int count1 = 0;  // Number of numbers read
    double average; // average

    // Read numbers and computer total of numbers
    cout << "This program will average a series of numbers.\n";
    cout << "Enter the first number or Q to quit: ";
    cin.getline(input, LENGTH);

    while ((strcmp(input, "Q")!=0) && (strcmp(input, "q")!=0)){
        //keep a running total
        total += atoi(input);

        // keep track of how many numbers are entered
        count1++;

        // are there more?
        cout << "Enter the next number or Q to quit: ";
        cin.getline(input, LENGTH);
    }

    // compute and print average
    if (count1 != 0){
        average = double(total) / count1;
        cout << "average: " << average << endl;
    }

    return 0;
}
