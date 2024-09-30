/*
Write a program to swap the two numbers using friend function 
*/

#include <iostream>
using namespace std;

class Number 
{
private:
    int a, b;
public:
    Number(int x, int y) : a(x), b(y) {}

    friend void swapNumbers(Number &num);

    void display() const
    {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

void swapNumbers(Number &num)
{
    int temp = num.a;
    num.a = num.b;
    num.b = temp;
}

int main()
{
    Number num(10, 20);

    cout << "Before swapping:" << endl;
    num.display();

    swapNumbers(num);

    cout << "After swapping:" << endl;
    num.display();
}
