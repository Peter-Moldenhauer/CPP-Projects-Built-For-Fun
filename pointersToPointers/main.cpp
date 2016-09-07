/********************************************************************************************************
*Name: Peter Moldenhauer
*Date: 9/6/16
*Description: This program demonstrates the concept of pointer to pointers.
*********************************************************************************************************/

#include <iostream>
using namespace std;


int main()
{
    int x = 5;
    cout << "cout << x: " << x << endl;
    cout << "cout << &x: " << &x << endl;

    int *p;
    cout << "cout << p: " << p << endl;

    p = &x;
    cout << "cout << *p: " << *p << endl;

    int **q;
    q = &p;
    cout << "cout << q: " << q << endl;
    cout << "cout << *q: " << *q << endl;
    cout << "cout << **q: " << **q << endl;

    int ***r;
    r = &q;
    cout << "cout << r: " << r << endl;
    cout << "cout << *r: " << *r << endl;
    cout << "cout << **r: " << **r << endl;
    cout << "cout << ***r: " << ***r << endl;

    return 0;
}
