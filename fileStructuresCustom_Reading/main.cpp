/**********************************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/28/16
*Description: This program demonstrates the concept of reading custom file structures. This program reads text from an
outside txt file (built in the fileStructuresCustom_writing program) that is formated in a specific way. It reads this
text in its own custom way.
************************************************************************************************************************/

#include <iostream>
#include <fstream> //This is the header file needed for file input and output. Need this to work with files!
using namespace std;

int main()
{
    //Note: ofstream is only used for outputting text to a file, you cannot read text from a file using ofstream
    //Whenever you want to read data in from a file you need to use ifstream.
    ifstream theFile("players.txt");  //use the ifstream object to read data in from the players.txt file

    //Create variables to hold the data that is in the file (below)
    int id;
    string name;
    double money;

    //create a while loop to loop through all of the information in the file
    //the loop is going to loop through each piece of information (id, name money) and store it in a variable
    //once we have the information in variables we can do what we want with it (load it in a game, print it to the screen etc)
    //C++ is going to run through the entire file until it reaches the end of file marker, once it does it will return a null pointer
    while(theFile >> id >> name >> money){ //when the null pointer is reached in the file, false is returned which exits the while loop
        cout << id << ", " << name << ", " << money << endl;
    }
    //when the end of file marker is reached and a null pointer is returned, the file is automatically closed
    //So we do not have to type the code to manually close the file, this is already done automatically

    return 0;
}

