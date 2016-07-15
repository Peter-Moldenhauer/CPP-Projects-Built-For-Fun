/********************************************************
**Author: Peter Moldenhauer
**Date: 7/4/16
**Description: This program demonstrates the concepts of
**overflow and underflow through the use of the macro
**constant headers climits and cfloat.
*********************************************************/

#include <iostream>
#include <climits>  //This header contains macro constants for integer types
#include <cfloat>  //This header contains macro constants for floating point types
#include <iomanip>  //This header is used in this program for the setprecision function

using namespace std;

int main()
{
    int maxInt = INT_MAX; //Initializes maxInt as the largest possible integer
    int biggerThanMax = maxInt * 2;  //This makes too big of an integer, OVERFLOW!

    cout << "maxInt: " << maxInt << endl;
    cout << "biggerThanMax: " << biggerThanMax << endl;  //This number will ALWAYS be incorrect

    double closestToZeroDouble = DBL_MIN; //Initialize variable to the smallest possible double
    double tooCloseToZeroDouble = closestToZeroDouble / 10.0; //Shift decimal point closer to 0 (1 to left)

    cout << endl;
    cout << setprecision(30);  //used to adjust the number of digits displayed

    cout << "closestToZeroDouble: " << closestToZeroDouble << endl;
    cout << "tooCloseToZeroDouble: " << tooCloseToZeroDouble << endl;  //This number will always be incorrect

    return 0;
}
