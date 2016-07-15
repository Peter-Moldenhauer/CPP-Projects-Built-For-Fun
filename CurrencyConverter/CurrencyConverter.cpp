/********************************************************
**Author: Peter Moldenhauer
**Date: 6/30/16
**Description: This program converts a dollar (U.S.)
**amount to the corresponding euro (Europe) and
**yen (Japan) amounts.
*********************************************************/

#include <iostream>

using namespace std;

int main()
{
    const double YEN_PER_DOLLAR = 102.50;  //This rate is as of 7/1/2016
    const double EURO_PER_DOLLAR = 0.90;   //This rate is as of 7/1/2016
    double dollarAmount, yenAmount, euroAmount;
    bool keepLooping = true;
    char loopAgain;

    cout << "This program will convert a U.S. dollar amount to the corresponding euro and yen amounts." << endl;
    cout << endl;

    while(keepLooping == true)
    {
        cout << "Please enter in a U.S. dollar amount: ";
        cin >> dollarAmount;

        euroAmount = dollarAmount * EURO_PER_DOLLAR;
        yenAmount = dollarAmount * YEN_PER_DOLLAR;

        cout << endl;
        cout << "As of July 1st 2016, " << dollarAmount << " dollars is equal to:" << endl;
        cout << euroAmount << " euros" << endl;
        cout << yenAmount << " yen" << endl;

        cout << endl;
        cout << "Would you like to enter in another U.S. dollar amount to convert? Y/N ";
        cin >> loopAgain;
        cout << endl;

        if(loopAgain == 'Y' || loopAgain == 'y')
            keepLooping = true;
        else
            keepLooping = false;
    }

    return 0;
}
