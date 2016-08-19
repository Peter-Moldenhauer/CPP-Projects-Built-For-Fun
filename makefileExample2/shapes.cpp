/************************************************************
 * Name:Peter Moldenhauer
 * Date: 8/18/16
 * Description: This file contains the function definitions
 * for the function prototypes listed in the header file.
 * **********************************************************/

#include "shapes.h"

void Draw::draw_box() 
{
	draw_top_bottom();
	draw_sides();
	draw_top_bottom();
}

void Draw::draw_top_bottom()
{
	cout << "+-----+" << endl;
}

void Draw::draw_sides()
{
	cout << "|     |" << endl;
}

void Draw::draw_triangle()
{
	cout << "     #     " << endl;
	cout << "    ###    " << endl;
	cout << "   #####   " << endl;
	cout << "  #######  " << endl;
	cout << " ######### " << endl; 
	cout << "###########" << endl;
}
  

