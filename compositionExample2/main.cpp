/************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/22/16
*Description: This program demonstrates the concept of composition. Composition is when you take
an object of a class and use it in another class. In this program, the main function creates three
Doohickeys, sets their weights and uses them to create a Widget. Then it repeats that process to
create a second Widget. Then it prints "true" if the two Widgets are compatible but "false" if
they are not. In this example, widget1 is receiving the "isCompatible" message and widget2 is
being passed as an argument. So, widget1 will execute that method to see if its compatible with
widget2.
**************************************************************************************************/

#include "Widget.h"
#include <iostream>
using namespace std;

int main()
{
   Doohickey dh1;
   dh1.setWeight(1);
   Doohickey dh2;
   dh2.setWeight(5);
   Doohickey dh3;
   dh3.setWeight(2);
   Widget widget1(dh1, dh2, dh3);

   Doohickey dh4;
   dh4.setWeight(12);
   Doohickey dh5;
   dh5.setWeight(1);
   Doohickey dh6;
   dh6.setWeight(8);
   Widget widget2(dh4, dh5, dh6);

   if (widget1.isCompatibleWith(widget2))
        cout << "true" << endl;
   else
        cout << "false" << endl;

    return 0;
}
