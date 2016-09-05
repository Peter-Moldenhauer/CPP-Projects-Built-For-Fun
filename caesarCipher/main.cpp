/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 9/4/16
*Description: This program uses a caesar cipher to encript a word(s) entered in by the user. A caesar
cipher is a cipher that takes the alphabet and shifts it so many letters to the left or right. For this
program I will shift the letters over 13 spaces.
*********************************************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int count = 0, length; //length variable is the length of the string the user inputs

    cout << "Enter your phrase you wish to encript: \n";
    getline(cin, input); //this gets everything user types in - including spaces

    length = (int)input.length(); //initialize the length variable to the length of user input - ALSO type cast to an int data type

    for (count = 0; count < length; count++) { //this loop will loop through every letter of the phrase
        //check to make sure each character is a letter of the alphabet
        if (isalpha(input[count])) { //if its a letter in the alphabet then change it, if not a letter then keep as is and do nothing with the character
            input[count] = tolower(input[count]); //turn any uppercase letters to lowercase
            for (int i = 0; i < 13; i++) { //this loop runs 13 times for each individual character - this moves the character that is in input[count] 13 times
                if (input[count] == 'z') //if we are at the end of the alphabet then "loop" back around to the start of the alphabet, z goes to a and starts back around
                    input[count] = 'a';
                else
                    input[count]++; //increment count - if count is 'a' then count becomes 'b'
            }
        }
    }

    cout << "The encripted result is: \n" << input << endl;

    return 0;
}
