/*************************************************************************************************
** Name: Peter Moldenhauer
** Date: 10/1/16
** Description: This program demonstrates the use of break keyword. The break keyword basically
** has two uses in C++. 1) When used in a loop, the break can be used to terminate the loop at
** a given spot and continue on to the next line of code outside of the loop. 2) When used in a
** switch statement, break will terminate the switch at a specific case and resume code after the
** switch statement.
**************************************************************************************************/


#include <iostream>
using namespace std;

int main()
{
    //This is an example of the break keyword used in a loop to exit the loop once 5 is reached
    //Note: in a nested loop with a break, it only breaks out of the inner loop not the outer loop
    for (int i=1; i <=10; i++){
        cout << i << endl;
        if (i==5)
            break;
    }

    //This is an example of the break keyword used in a switch statement
    char input = 'A';

    switch(input){ //input gets compared with all of the different cases
        case 'A' : {
            cout << "excellent";
            break;
        }
        case 'B' : {
            cout << "Very good";
            break;
        }
        case 'c' : //code this way to allow for c or C to represent the same case
        case 'C' : {
            cout << "good";
            break;
        }
        case 'D' : {
            cout << "not bad";
            break;
        }
        default : {
            cout << "dont know your grade";
        }
    }

    return 0;
}
