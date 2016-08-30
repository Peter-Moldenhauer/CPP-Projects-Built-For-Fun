/**********************************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/29/16
*Description: This program demonstrates the use of working with files for a computer game. In this program I will build
a basic computer game that will have various enemies, beneficial items and neutral items that effect the health of the
user's character in the game. The enemies and other items will be listed in a separate text file that the game will read
from to get data to play the game. This program will allow the user to enter in a number (1-4) to print out the various
groups of items (enemies, beneficial items, neutral items) and also to quit the game.
************************************************************************************************************************/

#include <iostream>
#include <fstream> //This is the header file needed for file input and output. Need this to work with files!
using namespace std;

int getWhatTheyWant(); //function prototype
void displayItems(int x); //function prototype

//main function
int main()
{
    //Start by giving the user a menu to choose from:
    int whatTheyWant; //variable to store the user input for the selection
    whatTheyWant = getWhatTheyWant(); //the returned value of the function is assigned to the whatTheyWant variable

    //build the program in a while loop so that it keeps running until user wants to quit (until whatTheyWant = 4)
    while(whatTheyWant != 4){
        //whenever you are testing a single variable for multiple values its best to use a switch statement
        switch(whatTheyWant){ //switch takes one parameter (whatTheyWant) and then tests it against a bunch of different cases
            case 1:
                displayItems(1);
                break;
            case 2:
                displayItems(2);
                break;
            case 3:
                displayItems(3);
                break;
        }

        whatTheyWant = getWhatTheyWant(); //give user another opportunity to either quit or choose what item options to see
    }


    return 0;
}

//getWhatTheyWant function - returns user selection of what to view (or to quit)
int getWhatTheyWant(){

    int choice; //this variable temporarily stores 1 2 3 or 4 from the user

    //output the choices for the user:
    cout << "\nEnter 1 - view just plain items." <<endl;
    cout << "Enter 2 - view helpful items." << endl;
    cout << "Enter 3 - view harmful items." << endl;
    cout << "Enter 4 - quit program.\n" << endl;

    //now let user input a number (their choice):
    cin >> choice;
    //return the choice variable in the function:
    return choice;
}

//displayItems function - only prints out info on screen (the info that is in the separate file)
void displayItems(int x){

    //to read information from a file, you need an ifstream object
    ifstream objectFile("objects.txt");

    //need to create 2 variables, one for the name of the object/item and another for the health/power that is lost or gained
    string name;
    double power;

    if(x==1){ //if user enters 1 then user wishes to view just plain items
        //loop through each object/item to check and see if the power = 0 (if the object is just a plain item)
        while(objectFile >> name >> power){ //this will keep looping through the file as long as the file is open
            if(power==0){
                cout << name << ' ' << power << endl;
            }
        }
    }

    if(x==2){ //if user enters 1 then user wishes to view just plain items
        //loop through each object/item to check and see if the power = 0 (if the object is just a plain item)
        while(objectFile >> name >> power){ //this will keep looping through the file as long as the file is open
            if(power>0){
                cout << name << ' ' << power << endl;
            }
        }
    }

    if(x==3){ //if user enters 1 then user wishes to view just plain items
        //loop through each object/item to check and see if the power = 0 (if the object is just a plain item)
        while(objectFile >> name >> power){ //this will keep looping through the file as long as the file is open
            if(power<0){
                cout << name << ' ' << power << endl;
            }
        }
    }
}



