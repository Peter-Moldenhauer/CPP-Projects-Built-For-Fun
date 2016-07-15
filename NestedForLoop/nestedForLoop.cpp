/****************************************************************
** Author: Peter Moldenhauer
** Date: 7/7/16
** Description: This program demonstrates the use of nested for
**loops. It asks the user how many rectangles to print and how
**many side bars to each rectangle.
*****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int rect, sides, x, y;  //Note: x and y are declared here, I can also do this inside of the loop statement

    cout << "How many rectangles would you like to be printed to the screen? ";
    cin >> rect;
    cout << "How many side bars to each rectangle do you want? ";
    cin >> sides;

    for (x=0; x<rect; x++)
    {
        cout << "+----+" << endl;

        for (y=1; y<= sides; y++)  //nested for loop
            cout << "|    |" << endl;

        cout << "+----+" << endl;
    }

    return 0;
}
