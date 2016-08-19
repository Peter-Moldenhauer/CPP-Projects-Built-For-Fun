/*****************************************************
 * Name: Peter Moldenhauer
 * Date: 8/18/16
 * Description: This is the main function to print out 
 * the shapes to the screen from the functions in the 
 * shapes.h and shapes.cpp files.
 * ****************************************************/

#include <iostream>
#include "shapes.h"
using namespace std;

int main()
{
	cout << "-- This program will print shapes to the screen --" << endl;
	cout << "\nBox: " << endl;

	Draw drawShapes;
	drawShapes.draw_box();
	cout << "\nTriangle: " << endl;
	drawShapes.draw_triangle();	

	return 0;
}  
