/**********************************************************
*Name: Peter Moldenhauer
*Date: 8/16/16
*Description: This program demonstrates the concept of
*pass by reference using pointers.
************************************************************/

#include <iostream>
using namespace std;

void passByValue(int x);  //Function to demonstrate "pass by value" - this just makes a copy
void passByReference(int *x);  //Function to demonstrate "pass by reference" - this actually changes the initial value

int main(){

	int var1 = 13;
	int var2 = 13;

	cout << "var1 is: " << var1 << endl;
	cout << "var2 is: " << var2 << endl;
	cout << "---------------------" << endl;

	passByValue(var1);
	passByReference(&var2);

	cout << "var1 is now " << var1 << endl;
	cout << "var2 is now " << var2 << endl;

	return 0;
}

void passByValue(int x){
	x = 99;  //Since this is pass by value, the value of var1 never changes, x is just a copy of var1 with a different value
}

void passByReference(int *x){
	*x = 66; //Since the memory address is passed into a pointer, the value of var2 does change because when the pointer is dereferenced,
            //it is also assigned a new value (66). This changes the initial value of var2 because they hold the same memory addresses
}
