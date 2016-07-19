/*************************************************************************************
** Name: Peter Moldenhauer
** Date: 7/19/2016
** Description: This program demonstrates how a string can be processed as an array
**of individual characters. It reads in a string, then counts the number of vowels
**in the string. It uses the toupper function to uppercase each letter in the string
**and the <string> function length() to determine how many characters are in the
**string.
**************************************************************************************/

#include <iostream>
#include <string>
#include <cctype>  //used for the toupper function
using namespace std;

int main()
{
    char ch;
    int vowelCount = 0;
    string sentence;

    cout << "\nEnter any sentence you like and I will \n"
        << "tell you how many vowels are in it.\n";
    getline(cin, sentence);

    for (int i=0; i < sentence.length(); i++)
    {
        //uppercase a copy of the next character and assign it to ch
        ch = toupper(sentence[i]);

        //if the character is a vowel, increment vowelCount
        switch(ch)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case'U': vowelCount++;
        }
    }
    cout << "There are " << vowelCount << " vowels in that sentence.\n" << endl;

    return 0;
}

