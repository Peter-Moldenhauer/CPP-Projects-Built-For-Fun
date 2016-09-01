/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/31/16
*Description: This program demonstrates the concept of pointer arithmetic. Adding, subtracting and
comparing pointers.
*********************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    const int NSTRINGS = 5;
    string tests[NSTRINGS] = {"one", "two", "three", "four", "five"};
    string *pTests = tests; //the first string element is assigned to a pointer
    cout << *pTests << endl; //dereference pointer to print out "one"

    //add 1 to pTests pointer to point to the second index of the array:
    pTests = pTests + 1;  //can also do pTests++
    cout << *pTests << endl; //dereference pTests to get "two"

    //subtract 1 from pTests pointer to go back to pointing to the first index of array:
    pTests -= 1;
    cout << *pTests << endl;

    //compare pointers below:
    string *pEnd = &tests[NSTRINGS-1]; //the below loop will only loop through one through four, if you want to loop one through five, take out the - 1 here in this line
    while(pTests != pEnd){
        cout << *pTests << " ";
        pTests++;
    }
    cout << endl;

    //reset pTests back to start
    pTests = &tests[0];

    //point to the fourth element of the array, prints: 4
    int elements = pEnd - pTests;
    cout << elements << endl;

    //point to the middle index of the array, prints: three
    pTests += NSTRINGS/2;
    cout << *pTests << endl;

    return 0;
}
