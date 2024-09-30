/*
Write a program to read and write data in to file 
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream outFile("example.txt");
    if (outFile.is_open())
    {
        outFile << "Hello, this is a test file.\n";
        outFile << "Writing data to the file.\n";
        outFile.close();
        cout << "Data written to file successfully." << endl;
    }
    else
    {
        cout << "Unable to open file for writing." << endl;
    }

    ifstream inFile("example.txt");
    if (inFile.is_open())
    {
        string line;
        cout << "Reading data from file:" << endl;
        while (getline(inFile, line))
        {
            cout << line << endl;
        }
        inFile.close();
    }
    else 
    {
        cout << "Unable to open file for reading." << endl;
    }
}