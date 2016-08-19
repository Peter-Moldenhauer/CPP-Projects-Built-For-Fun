/***********************************************************************
*Name: Peter Moldenhauer
*Date: 8/19/16
*Description: This program demonstrates the concept of a sentinel
controlled program. This program prompts the user to enter in people's
ages and to keep entering in ages until the user enters in -1.
************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int age = 0;
    int ageTotal = 0;
    int numberOfPeopleEntered = 0;

    cout << "Enter first persons age or -1 to quit: " << endl;
    cin >> age;

    while (age != -1) {
        ageTotal += age;
        numberOfPeopleEntered++;

        cout << "Enter in the next persons age or -1 to quit: " << endl;
        cin >> age;
    }

    cout << "Number of people entered: " << numberOfPeopleEntered << endl;
    cout << "Average age: " << ageTotal/numberOfPeopleEntered;

    return 0;
}
