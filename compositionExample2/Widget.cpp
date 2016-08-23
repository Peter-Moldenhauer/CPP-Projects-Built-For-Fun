/***************************************************************************************
This is the .cpp file for the Widget class. The constructor uses it parameters to
initialize the fields of the Widget. The isCompatibleWith function determines whether
this Widget is compatible with the Widget that was passed as a parameter. Two Widgets
are compatible if and only if the sums of the weights of their Doohickeys are equal.
****************************************************************************************/

#include "Widget.h"

Widget::Widget(Doohickey one, Doohickey two, Doohickey three)
{
    thing1 = one;
    thing2 = two;
    thing3 = three;
}

bool Widget::isCompatibleWith(Widget otherWidget)
{
    int thisWidgetWeight = thing1.getWeight() + thing2.getWeight() + thing3.getWeight();
    int otherWidgetWeight = otherWidget.thing1.getWeight() + otherWidget.thing2.getWeight() + otherWidget.thing3.getWeight();

    return thisWidgetWeight == otherWidgetWeight;
}
