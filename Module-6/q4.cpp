/*
Write a program to find the multiplication values and the cubic values using 
inline function. 
*/

#include <iostream>
using namespace std;

class Calculator
{
public:
    
    inline float multiply(float x, float y)
    {
        return x * y;
    }

    inline float cube(float x)
    {
        return x * x * x;
    }
};

int main()
{
    Calculator calc;
    float val1, val2;

    cout << "Enter two values: ";
    cin >> val1 >> val2;

    cout << "Multiplication value is: " << calc.multiply(val1, val2) << endl;
    cout << "Cube value of " << val1 << " is: " << calc.cube(val1) << endl;
    cout << "Cube value of " << val2 << " is: " << calc.cube(val2) << endl;

}