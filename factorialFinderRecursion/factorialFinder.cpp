/*****************************************************************************************
** Name: Peter Moldenhauer
** Date: 7/19/2016
** Description: This program demonstrates the concept of recursion by calculating the
**factorial of a number. A recursive function uses a function inside of the same function
**body itself. In this program, the factorialFinder function calls itself inside of its
**function body. To prevent this from becoming an infinite loop, a base case (or ending
**point) needs to be included to "answer a question" which can then be used to answer
**all of the preceding "questions" in the recursive function.
**
**Note: Due to how large factorials of numbers can get, if the user enters in too large of
**a number to begin with (the number to calculate the factorial of), the computer may
**return a "garbage" result for the final calculated factorial.
*******************************************************************************************/

#include <iostream>
using namespace std;

int factorialFinder(int x); //function prototype to find factorial

int main()
{
    int number;

    cout << "\nThis program calculates number factorials. " << endl;
    cout << "Enter a positive integer between 1 and 15: ";
    cin >> number;

    cout << "\nThe factorial of " << number << " is: " << factorialFinder(number) << endl; //call the function

    return 0;
}

int factorialFinder(int x)  //function definition
{
    if (x==1)  //this is the base case. Once 1 is reached in the factorial steps, then all of the earlier calculations can be solved in revers order
        return 1;
    else
        return x*factorialFinder(x-1);  //this makes the function recursive, calling the function inside of itself
}
