/***************************************************
** Name: Peter Moldenhauer
** Date: 7/11/2016
** Description: This program demonstrates the
**use of functions by drawing a box to the screen.
****************************************************/

#include <iostream>
using namespace std;

//Function prototypes below
void draw_box();
void draw_top_bottom();
void draw_sides();

//main function
int main()
{
    draw_box();  //call the draw box function in main

    return 0;
}

//draw box definition
void draw_box()
{
    draw_top_bottom();  //call the draw top bottom function
    draw_sides();   //call the draw sides function
    draw_top_bottom();   //call the draw top bottom function
}

//draw top bottom definition
void draw_top_bottom()
{
    cout << "+-----+" << endl;
}

//draw sides definition
void draw_sides()
{
    cout << "|     |" << endl;
}
