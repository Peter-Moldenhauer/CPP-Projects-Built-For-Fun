/**********************************************************************************************************
** Name: Peter Moldenhauer
** Date: 11/23/16
** Description: This program demonstrates the use of exception handling. Because the divide function throws
** an exception whose type is a string, there must be an exception handler that catches a string. The catch
** block shown catches the error message in the exceptionString parameter, then displays it with cout.
**
** If 0 is entered for the second number (denominator), the exception cause the program to jump out of the
** divide function and into the catch block. After the catch block has finished, the program resumes with
** the first statement after the try/catch construct.
***********************************************************************************************************/

#include <iostream>
#include <string>
using namespace std;

// function prototype
double divide(double, double);

int main()
{
    int num1, num2;
    double quotient;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    try
    {
        quotient = divide(num1, num2);
        cout << "The quotient is " << quotient << endl;
    }
    catch (string exceptionString)
    {
        cout << exceptionString;
    }
    cout << "End of program.\n";

    return 0;
}

double divide(double numerator, double denominator)
{
    if (denominator == 0)
        throw string("Error: cannot divide by zero.\n");
    else
        return numerator / denominator;
}
