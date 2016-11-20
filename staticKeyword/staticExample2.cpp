/*****************************************************************************************************
** Name: Peter Moldenhauer
** Date: 11/19/16
** Description: This program demonstrates the use of a static member variable. If a member variable
** is declared static, all objects of that class have access to that variable. If a member function
is declared static, it may be called before any instances of the class are defined.
******************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;


class Budget {
    private:
        static double corpBudget;
        double divBudget;
    public:
        Budget() {divBudget = 0;}
        void addBudget(double b)
        {
            divBudget += b; corpBudget += divBudget;
        }
        double getDivBudget() const {return divBudget;}
        double getCorpBudget() const {return corpBudget;}
};

// Definition of the static member of the Budget class
double Budget::corpBudget = 0;

int main(){

    const int N_DIVISIONS = 4;
    Budget divisions[N_DIVISIONS];

    // Get the budget request for each division
    for (int count = 0; count < N_DIVISIONS; count++){
        double bud;

        cout << "Enter the budget request for division ";
        cout << (count + 1) << ": ";
        cin >> bud;
        divisions[count].addBudget(bud);
    }

    // Display the budget request for each division
    cout << setprecision(2);
    cout << showpoint << fixed;
    cout << "\nHere are the division budget requests: \n";
    for (int count = 0; count < N_DIVISIONS; count++){
        cout << "Division " << (count +1) << "\t$ ";
        cout << divisions[count].getDivBudget() << endl;
    }

    // Display the total budget request
    cout << "Total Budget Requests:\t$ ";
    cout << divisions[0].getCorpBudget() << endl;

    return 0;
}
