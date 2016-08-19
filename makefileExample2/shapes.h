/****************************************************
 * Name: Peter Moldenhauer
 * Date: 8/18/16
 * Descrption: This is a header file that contains 
 * function prototypes to draw shapes
 * *************************************************/

#include <iostream>
using namespace std;

#ifndef SHAPES_H
#define SHAPES_H

class Draw
{
	public:	
		void draw_box();
		void draw_top_bottom();
		void draw_sides();
		void draw_triangle();
};
#endif
