/***************************************************************
** Author: Peter Moldenhauer
** Date: 7/6/16
** Description: This program randomly selects a digit between 0
**and 9 and then asks the user to guess the digit the program
**has chosen. The program loops until the user guesses correctly
**but the user can stop the looping at any point by entering a
**non-digit value.
****************************************************************/

#include <iostream>
#include <cstdlib>  //header file needed to use srand and rand
#include <ctime>  //header file needed to use time
using namespace std;

int main()
{
    int number;  //Declare an int variable to be the selected random digit between 0 and 9
    unsigned seed; //"unsigned" is a data type that holds only non-negative integers. This is the data type the srand function expects to receive when it is called.
    //unsigned seed is the random generator seed (needed for srand)

    //Use the time function to get a "seed" value for srand
    seed = time(0);  //must pass a 0 as an argument when you call the time function
    srand(seed);

    //generate the random digit between 0 and 9
    number = rand() % 10;
    //Note: If I wanted a random number in the range of 1 through 6, I would use: number = rand() % 6 + 1;
    //Note: OR if in the range of 10 through 18, I would use: number = rand() % 9 + 10;


    //Need to convert the randomly selected int into a char
    char numberChar = '0' + number;


    char yourGuess;  //Declare a char variable for the input of the user
    bool keepGuessing = true;  //Declare a bool variable to keep the while loop looping

    cout << "\nWelcome to \"GUESS MY NUMBER\" " << endl;
    cout << "I have randomly selected a digit between 0 and 9. " << endl;
    cout << "Guess the digit that I have selected!!!" << endl;

    while (keepGuessing)  //keep looping while keepGuessing is true, exit loop if keepGuessing is false
    {
        cout << "\nEnter a value from 0 to 9 or a non digit to give up... ";
        cin >> yourGuess;

        if (isdigit(yourGuess))  //check to see if the user input is actually a digit
        {
            if (yourGuess == numberChar) //check to see if the digit the user entered is the selected digit
            {
                cout << yourGuess << " is correct! Good Job!!!" << endl << endl;
                keepGuessing = false;  //digit user entered is the selected digit so keepGuessing = false to exit loop
            }
            else  //user guess is a digit but not the selected digit so user guess is wrong
                cout << yourGuess << " is not correct..." << endl << endl;
        }
        else  //user wants to quit because a non digit was entered
        {
            cout << endl << "Thanks for playing!" << endl;
            keepGuessing = false;  //user wants to quit so keepGuessing = false to exit loop
        }
    }

    return 0;
}
