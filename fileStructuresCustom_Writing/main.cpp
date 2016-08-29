/**********************************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/28/16
*Description: This program demonstrates the concept of writing text to a custom file structure. In this program, I
demonstrate how character information can be recorded in a certain format for a game. This program will ask the user to
enter in a character ID number, character name and a character money amount. These will all be different data types and
once the user enters in the data, it will be written to the text file in a specific format.
Note: Custom file structures are useful because it makes it easier to read from the files when you know how all of the
information will be laid out in the file and what type of data will be in the file. In this example we knew there would
be spaces inbetween all of the data and that the first item would be an int, second is a string and third is a double.
Then a new character would be on the next line (if at all) and the process repeats until the user enters ctrl+z and the
end of file marker is read.
************************************************************************************************************************/

#include <iostream>
#include <fstream> //This is the header file needed for file input and output. Need this to work with files!
using namespace std;

int main()
{
    ofstream theFile("players.txt");//if players.txt does not already exist, C++ will create this file

    cout << "Enter player's ID number, Name, and Money amount. " << endl; //Give user a prompt to show how to input data
    cout << "Press Ctrl+z to quit\n" << endl; //Every file has an "end of file marker". This tells C++ where the end of the file is. ctrl+z inputs an end of file marker.

    int idNumber;  //make three variables to temporarily store the data
    string name;
    double money;

    while(cin >> idNumber >> name >> money){ //this loop will be true (keep looping) until the end of the file is reached. The user can keep entering in as much info as he/she wants
        theFile << idNumber << ' ' << name << ' ' << money << endl; //This saves the inputed text from user in a specific format in the text file
        //The specific format that the data is being stored in is idNumber[space]name[space]money
        //This format is easier to read than if everything were all bunched together with no spaces
    }

    return 0;
}

