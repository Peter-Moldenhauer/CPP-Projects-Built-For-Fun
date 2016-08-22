/********************************************************************
*Name: Peter Moldenhauer
*Date: 8/21/16
*Description: This program demonstrates the use of multiple
files to build a program. The function myFunction could be coded
all in one main.cpp file or (as seen in this example) myFunction
can be prototyped in a header file, defined in a separate .cpp file
and used/called in the main.cpp file.
*********************************************************************/

#include "function.h"
#include <iostream>
using namespace std;

int main(){
	myFunction();

	return 0;
}
