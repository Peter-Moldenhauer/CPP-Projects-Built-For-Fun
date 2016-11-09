/*****************************************************************************************************
** Name: Peter Moldenhauer
** Date: 11/8/16
** Description: This program uses bubble sort to sort an array of class objects. Bubble sort and
** selection sort can be used to order elements in an array of class objects. When sorting objects,
** you need to decide which data item to sort on. For example, we can sort Inventory objects in order
** by itemCode, by description or by price. To determine if two elements are out of order and should
** be swapped, we compare ONLY the values in the data member we are sorting on. However, if the two
** array elements are found to be out of order, we swap the ENTIRE two elements.
**
** Specifically, this program places Inventory objects in ascending order by their itemCode.
******************************************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Inventory class declaration
class Inventory {
    private:
        string itemCode;
        string description;
        double price;

    public:
        Inventory(){  // default constructor
            itemCode = "XXX"; description = " "; price = 0.0;
        }

        Inventory(string c, string d, double p){  // constructor with 3 arguments
            itemCode = c;
            description = d;
            price = p;
        }

        // Add methods setCode, setDescription and setPrice here

        // Get functions to retrieve member variable values
        string getCode() const {
            string code = itemCode;
            return code;
        }

        string getDescription() const {
            string d = description;
            return d;
        }

        double getPrice() const {
            return price;
        }
};

// Function prototypes
void displayInventory(const Inventory[], int);
void bubbleSort(Inventory[], int);


int main(){

    const int SIZE = 6;

    // Create and initialize the array of Inventory objects
    Inventory silverware[SIZE] =
        {
            Inventory("S15", "soup spoon", 2.35),
            Inventory("S12", "teaspoon", 2.19),
            Inventory("F15", "dinner fork", 3.19),
            Inventory("F09", "salad fork", 2.25),
            Inventory("K33", "knife", 2.35),
            Inventory("K41", "steak knife", 4.15)
        };

    // Display the inventory
    cout << "Here is the original data\n";
    displayInventory(silverware, SIZE);

    // Sort the objects by their itemCode
    bubbleSort(silverware, SIZE);

    // Display the inventory again
    cout << "\nHere is the sorted data\n";
    displayInventory(silverware, SIZE);

    return 0;
}

/********************************************************
** Function name: displayInventory
** Description: This function displays the entire array.
********************************************************/
void displayInventory(const Inventory object[], int size){
    for (int index = 0; index < size; index++){
        cout << setw(5) << left << object[index].getCode()
        << setw(13) << left << object[index].getDescription()
        << "$" << right << object[index].getPrice() << endl;
    }
}

/*************************************************************************
** Function name: bubbleSort
** Description: This function performs a bubble sort on Inventory objects,
** arranging them in ascending itemCode order.
**************************************************************************/
void bubbleSort(Inventory array[], int size){
    Inventory temp;  // Holds an Inventory object
    bool swap;

    do {
        swap = false;
        for (int count = 0; count < (size - 1); count++){
            if (array[count].getCode() > array[count + 1].getCode()){
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}
