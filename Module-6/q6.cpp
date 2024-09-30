/*
Write a program of two concatenate the two strings using Operator 
Overloading 
*/

#include <iostream>
#include <cstring>
using namespace std;

class String 
{
private:
    char str[100];

public:
    
    String(const char* s = "")
    {
        strcpy(str, s);
    }

    
    String operator+(const String& s)
    {
        String result;
        strcpy(result.str, str);
        strcat(result.str, s.str);
        return result;
    }

    
    void display() const
    {
        cout << str;
    }
};

int main() 
{
    String str1("Hello, ");
    String str2("World!");

    String str3 = str1 + str2;

    cout << "Concatenated String: ";
    str3.display();
    cout << endl;
}