/***************************************************************************
** Name: Peter Moldenhauer
** Date: 7/17/2016
** Description: This program is a random number generator. It demonstrates
**the use of the rand() function. This program restricts the random numbers
**that are generated to go from 1 and 6 to represent dice results.
****************************************************************************/

#include <iostream>
#include <cstdlib>  //needed for the rand() function
#include <ctime>  //needed to access computer clock to seed a random number
using namespace std;

int main()
{
    cout << "\n+-------------------------+" << endl;
    cout << "| Random Number Generator |" << endl;
    cout << "+-------------------------+\n" << endl;

    srand(time(0));  //seed the random number with clock time to get a different set of random numbers each time

    for(int i = 0; i < 15; i++)  //loop to output 15 random numbers
    {
        cout << 1 + (rand()%6) << endl; //use % 6 to limit the remainders of the random number to be 0 - 5, use +1 so that this range becomes 1-6 to represent dice numbers
    }

    return 0;
}
