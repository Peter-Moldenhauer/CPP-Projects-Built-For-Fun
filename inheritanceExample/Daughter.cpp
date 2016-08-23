#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

Daughter::Daughter()
{
}

//Even though we did not type the sayName function here (as we did in the Mother class), this class
//still "contains" the sayName function because the function was inherited from the Mother class
