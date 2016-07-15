/***************************************************************
** Author: Peter Moldenhauer
** Date: 7/5/16
** Description: This program demonstrates some of the available
**C++ character testing functions.
****************************************************************/

#include <iostream>
#include <cctype>  //Needed to use character testing functions
using namespace std;

int main()
{
    char input;

    cout << "Please enter any character (uppercase/lowercase letter, space, numeric digit, punctuation): ";
    cin.get(input);  //Use this to get input even if it is not a letter character

    cout << "\nThe character you entered is: " << input << endl;
    cout << "It's ASCII code is: " << static_cast<int>(input) << endl; //Use type casting to change the char into an int

    if (isalnum(input))  //function true if letter in alphabet or numerical digit
        cout << "This is a letter in the alphabet or a numerical digit.\n";

    if (isalpha(input))  //function true if letter in alphabet
        cout << "This is an alphabetic character.\n";

    if (isdigit(input))  //function true if digit from 0 to 9
        cout << "This is a numeric digit.\n";

    if (islower(input))  //function true if lowercase letter
        cout << "The letter that you entered is lowercase.\n";

    if (isupper(input))  //function true if uppercase letter
        cout << "The letter that you entered is uppercase.\n";

    if (isprint(input))  //function true if printable character including space
        cout << "This is a printable character including a space.\n";

    if (ispunct(input))
        cout << "This is a punctuation character.\n";

    if (isspace(input))  //function true if whitespace character (tab, space, newline)
        cout << "This is a whitespace character.\n";



    return 0;
}
