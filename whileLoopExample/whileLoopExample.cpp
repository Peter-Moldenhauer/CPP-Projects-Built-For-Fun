/****************************************************************
** Author: Peter Moldenhauer
** Date: 7/6/16
** Description: This program demonstrates the use of a while loop.
**It asks the user how many boxes to print and then prints that
**number of boxes to the screen.
*****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int numOfBoxes, printedBoxes = 1;

    cout << "How many boxes would you like to print to the screen? ";
    cin >> numOfBoxes;

    while (printedBoxes <= numOfBoxes)
    {
        cout << "+-----+" << endl;
        cout << "-     -" << endl;
        cout << "-     -" << endl;
        cout << "+-----+" << endl;

        printedBoxes++; //increment printedBoxes
    }

    return 0;
}
