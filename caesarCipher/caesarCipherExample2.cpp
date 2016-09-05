/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 9/5/16
*Description: This program uses a caesar cipher to encrypt a word(s) entered in by the user. A caesar
cipher is a cipher that takes the alphabet and shifts it so many letters to the left or right. For this
program I will prompt the user to input how many spaces to shift the letters over.
*********************************************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int key; //number of spaces to move the alphabet letters over
    string plaintext;

    //get the encryption key
    cout << "Please enter the key: ";
    cin >> key;

    cin.ignore(); //because we use getline, we need to 'consume' the extra character produced by cin

    //get text to encrypt
    cout << "Enter plaintext: ";
    getline(cin, plaintext);

    //loop through characters in the plaintext
    for (int i = 0, n = plaintext.length(); i < n; i++){
        if (isalpha(plaintext[i])) {
            //if character is a letter, assume it is an upper case
            //ASCI 65 = 'A'
            int offset = 65;

            //if character is a lowercase letter, offset it by 97
            //ASCI 97 = 'a'
            if (islower(plaintext[i]))
                offset = 97;

            //formula to encrypt the letter by the key
            //the MOD 26 is used as there are 26 characters in alphabet
            //this ensures that after 'z' we loop back to 'a'
            int cipheredLetter = (((int)plaintext[i] - offset + key) % 26) + offset;

            //print out the encrypted character
            cout << (char)cipheredLetter; //print out character - type cast back to a char type
        }
        else //if character is not a-z or A-Z, just output it
            cout << plaintext[i];
    }

    cout << endl;

    return 0;
}
