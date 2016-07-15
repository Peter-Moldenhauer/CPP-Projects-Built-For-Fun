/***************************************************************
** Author: Peter Moldenhauer
** Date: 7/5/16
** Description: This program asks the user to input a positive
**integer. It then returns whether or not that number is prime.
****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Please enter a positive integer. \n";
    cin >> num;
    bool prime = true;
    if (num == 1)   //if num == 1 is true, then it is not prime. 1 is not a prime number
        prime = false;
    for (int i=2; i<num; i++)
    {
        if (num % i == 0)
            prime = false;
    }

    if (prime)  //if prime still == true, then the number is prime
        cout << num << " is prime." << endl;
    else
        cout << num << " is not prime." << endl;

    return 0;
}
