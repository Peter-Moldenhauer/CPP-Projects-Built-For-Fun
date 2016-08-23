/***********************************************************************************
This is the header file for the Widget class. This defines the interface for a
Widget which has three Doohickeys. Inside of the class there is a method for
checking whether one Widget is compatible with another Widget. No set or get
methods are used in this class because we don't need to change or retrieve thing1,
thing2 or thing3. Inside of the class we have free access to the private members
of that class.
************************************************************************************/

#ifndef WIDGET_H
#define WIDGET_H

#include "Doohickey.h"

class Widget
{
    public:
        Widget(Doohickey one, Doohickey two, Doohickey three);
        bool isCompatibleWith(Widget otherWidget);

    private:
        Doohickey thing1;
        Doohickey thing2;
        Doohickey thing3;
};

#endif // WIDGET_H
