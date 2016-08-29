/**********************************************************************************************************************
*Name: Peter Moldenhauer
*Date: 8/26/16
*Description: This program demonstrates the concept of file handling. This program opens a text file, if the named text
file does not already exist, the program then creates the file. The program then writes a line of text to the file and
then closes the file before the program ends.
************************************************************************************************************************/

#include <iostream>
#include <fstream> //This is the header file needed for file input and output. Need this to work with files!
using namespace std;

int main()
{
    //Very first thing you need to do is build a file object
    ofstream myFile; //Type ofstream to create the file object and then give the file object a name (myFile)
    //Now we need to associate this file object with a file itself (below)
    myFile.open("myNewFile.txt"); //if this .txt file does not exist then it will be created
    //Now, any input and output that we do to the file object will be done to the actual file itself (myNewFile.txt)
    //C++ won't allow you to input/output directly to the actual text file, this is why we need the file object
    //In essence, the file object is the same exact thing is the actual text file

    //Now, output to the file object/text file:
    myFile << "Hello World! I am writing text to a new file!\n";
    //instead of cout << (to output to the screen), we are using myFile << (to output to the actual file)

    //At the end of your program when you are working with files, you always want to close the object
    //This frees the computers memory
    myFile.close();

    return 0;
}

