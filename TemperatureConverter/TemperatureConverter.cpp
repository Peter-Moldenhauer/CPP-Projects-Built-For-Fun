/********************************************************
**Author: Peter Moldenhauer
**Date: 7/2/16
**Description: This program converts temperature degrees
**from Fahrenheit to degrees in Celsius and Kelvin
*********************************************************/

#include <iostream>

using namespace std;

int main()
{
    double degreeF, degreeC, degreeK;
    bool keepLooping = true;
    char continueLoop;

    cout << "\n------------------------" << endl;
    cout << "| Temperature Converter |" << endl;
    cout << "------------------------\n" << endl;
    cout << "This program converts temperature from degrees in Fahrenheit to degrees in Celsius and Kelvin." << endl;

    while(keepLooping == true)
    {
        cout << "\nPlease enter a temperature in degrees Fahrenheit: ";
        cin >> degreeF;

        degreeC = (degreeF - 32) * 5/9;  //Conversion formula from F to C
        degreeK = (degreeF + 459.67) * 5/9;  //Conversion formula from F to K

        cout << "\nThis is equal to " << degreeC << " degrees Celsius and " << degreeK << " degrees Kelvin." << endl;
        cout << "\nWould you like to enter in a new temperature in degrees Fahrenheit to convert? Y/N ";
        cin >> continueLoop;

        if(continueLoop == 'Y' || continueLoop == 'y')
            keepLooping = true;
        else
            keepLooping = false;
    }

    return 0;
}
