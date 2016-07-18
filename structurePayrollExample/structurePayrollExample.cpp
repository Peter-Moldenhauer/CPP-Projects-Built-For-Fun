/***************************************************************************
** Name: Peter Moldenhauer
** Date: 7/17/2016
** Description: This program demonstrates the use of a structure.
**Remember: Unlike a class where data members are normally private and must
**be accessed through functions, structure data members are public and are
**accessed directly and can be used like regular variables! No getters and
**setters with structures.
****************************************************************************/

#include <iostream>
#include <iomanip>  //used for the setprecision() function
#include <string>  //used for string input/output
using namespace std;

struct PayRoll  //define structure PayRoll outside of main (similar to a class)
{
    int employeeNumber;
    string name;
    double hours, payRate;
};  //Do not forget the semi-colon here (similar to a class)

int main()
{
    PayRoll employee; //create an instance of the Payroll structure named employee (similar to creating an object)
    double grossPay;  //variable to be used for the gross amount the employee earned this week

    //Get the data for the employee instance below...
    cout << "\nEnter the employee number: ";
    cin >> employee.employeeNumber;

    cout << "Enter the employee's name: ";
    cin.ignore();  //skip the '\n' character left in the input buffer
    getline(cin, employee.name);  //This gets the employee name even if there is spaces included

    cout << "Enter hours worked this week: ";
    cin >> employee.hours;

    cout << "Enter employee's hourly pay rate: ";
    cin >> employee.payRate;

    //Calculate the employee's gross pay below...
    grossPay = employee.hours * employee.payRate;  //able to access the structure variables because they are global

    //Print out all of the results to the screen
    cout << "\nHere is the employee's payroll data:\n";
    cout << "Name:             " << employee.name << endl;
    cout << "Employee number:  " << employee.employeeNumber << endl;
    cout << "Hours worked:     " << employee.hours << endl;
    cout << "Hourly pay rate:  " << employee.payRate << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Gross Pay:        $" << grossPay << endl;

    return 0;
}
