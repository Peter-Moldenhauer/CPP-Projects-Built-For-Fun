/********************************************************
**Author: Peter Moldenhauer
**Date: 7/5/16
**Description: This program demonstrates three ways to use
**cin.get() to pause a program. It also demonstrates the
**use of the getline function to read an entire line
**including all trailing and leading whitespace. Lastly,
**this program demonstrates the use of cin.ignore.
*********************************************************/

#include <iostream>
#include <string>  //use this for the assign function and for the getline function
using namespace std;

int main()
{
    string dashes; //Declare a string variable to print out dashes to the screen in-between the parts of this program

    //Demonstrate the three ways to use cin.get() to pause a program:
    char ch; //Declare a char variable
    cout << "This program has paused. Press Enter to continue.";
    cin.get(ch);  //1st way to use cin.get()
    cout << "It has paused a second time. Please press Enter again.";
    ch = cin.get();  //2nd way to use cin.get()
    cout << "It has paused a third time. Please press Enter again.";
    cin.get();  //3rd way to use cin.get()
    cout << "Thank you!" << endl;
    cout << endl,

    dashes.assign(20, '-'); //The assign function allows you to initialize a string with a specified number of a given CHARACTER. So here, I set lotsOfDashes to 20 dashes
    cout << dashes << endl;

    //Demonstrates the use of the getline function to read an entire line
    cout << endl;
    string exampleString;  //Declare a string variable
    cout << "Please enter a string (with spaces included): ";
    getline(cin, exampleString);  //Use the getline function to read entire line
    cout << "You entered: " << exampleString << endl;
    cout << endl;

    cout << dashes << endl;
    cout << endl;

    //Demonstrates the use of cin.ignore
    int number;
    char optionCharacter;
    cout << "Please enter in a whole number: ";
    cin >> number;
    cin.ignore(); //Clear enter remaining from cin statement
    cout << "Please enter option a, b, c, or [enter] to quit: ";
    cin.get(optionCharacter);
    if (optionCharacter == '\n')  //check to see if enter was pushed (\n)
        cout << "You quit" << endl;

    return 0;
}
