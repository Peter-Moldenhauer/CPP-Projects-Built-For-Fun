/*************************************************************************************************
** Name: Peter Moldenhauer
** Date: 9/30/16
** Description: This program demonstrates the use of the continue keyword. The continue keyword
** is used with loops to skip over particular iterations that would otherwise be included in the
** total iterations of the loop.
**************************************************************************************************/


#include <iostream>
using namespace std;

int main()
{
    //This example of the continue keyword is used to prevent this simple loop from printing 5 in a loop that prints 1 through 10
    for (int i=1; i <=10; i++){
        if(i==5)
            continue;
        cout << i << endl;
    }

    //Similar example but using a while loop...
    int counter = 1;
    while (counter <= 10){
        if (counter==5){
            counter++; //increment counter before the continue or else counter would stay at 5 in endless loop
            continue;
        }
        cout << counter << endl;
        counter++;
    }


    return 0;
}
