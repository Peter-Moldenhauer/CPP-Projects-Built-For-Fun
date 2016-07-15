/***************************************************************
** Author: Peter Moldenhauer
** Date: 7/6/16
** Description: This program demonstrates a few uses of the
**switch statement. The switch statement provides functionality
**like that of the if/else statement.
****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    char choice;  //declare a char variable

    //Switch statement example 1: breaks in each of the cases
    cout << " Please enter a, b, or c: ";
    cin >> choice;

    switch (choice)
    {
        case 'a':  //Note the colons and NO curly brackets around the multiple statement lines in this case
            cout << "You entered a.\n";
            break;  //break out of switch if it is the case that choice == 'A'
        case 'b':
            cout << "You entered b.\n";  //if b was entered, the statement starts at b
            break;
        case 'c':
            cout << "You entered c.\n";  //if c was entered, the statement starts at c
            break;
        default:  //This is what happens if none of the cases are true
            cout << "You did not enter a, b or c!\n";
    }

    //Switch statement example 2: not every case has a break
    int value = 0;
    cout << "\nPlease enter a, b, or c: ";
    cin >> choice;

    switch (choice)
    {
        case 'a':
            value = 1;
            break;
        case 'b':  //A case statement does not have to include any statements. In this case if b is true, then program continues to case c without breaking
        case 'c':
            value = 2;
            break;
        case 'd':
            value = 3;
            break;
        default:
            value = 4;
    }
    cout << "Value after switch: " << value << endl;
    //if for example b was entered, it would move to case c and the final value would be 2 (because it breaks in case c with a value of 2)

    //Switch statement example 3: uses the "fall through" feature of the switch statement
    //Uses a switch statement with carefully omitted breaks to print the features of a selected TV model.
    int modelNum;

    //Display available models and get the user's choice:
    cout << "\nOur TV's come in three models: The 100, 200, and the 300.\n";
    cout << "Which model do you want? ";
    cin >> modelNum;

    //Display the features of the selected model:
    cout << "\nThat model has the following features:\n";

    switch (modelNum)  //only have break after case 100
    {
        case 300: cout << "      Built-in DVR \n"; //case and statement can be on one line
        case 200: cout << "      1080p high definition picture \n";
        case 100: cout << "      42\" LCD flat screen \n";
            break;
        default: cout << "You can only choose the 100, 200, or the 300. \n";
    }

    return 0;
}
