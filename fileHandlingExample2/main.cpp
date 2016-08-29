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
    ofstream myFile("myNewFile.txt"); //create object and associating file with object in the same line of code

    //is_open() is a function that will return true if the file object is currently associated with a file
    //this checks if a file is open and is ready to be worked with
    //"is_open" really isnt a good name...it should be called "if object is associated with file" because this is really all it is saying
    if(myFile.is_open()){
        cout << "The file is open! " << endl;
    }else{
        cout << "File not open! " << endl;
    }

    myFile << "Hello, I am writing this text to a file!!! \n";
    myFile.close();
    //The above two lines should be placed in the "if file is open" block so that you start outputting to the file after you know that the object is in fact associated with the file
    //This would be good programming practice, but I just put the two code lines here to make things less cluttered in the if/else statements
    return 0;
}

