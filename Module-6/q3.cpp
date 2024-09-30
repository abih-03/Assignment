/*
Write a program of find the simple interest using constructor with dynamic 
initialization. Make constructor like Interest (int principal, int year, int rate) 
Interest (int principal, int year, float rate = 2.5)
*/

#include <iostream>
using namespace std;

class Interest
{
    int principal;
    int year;
    float rate;
    float simpleInterest;

public:
    Interest(int p, int y, int r)
    {
        principal = p;
        year = y;
        rate = r;
        calculateInterest();
    }

    Interest(int p, int y, float r = 2.5)
    {
        principal = p;
        year = y;
        rate = r;
        calculateInterest();
    }

    void calculateInterest()
    {
        simpleInterest = (principal * year * rate) / 100;
    }

    void display()
    {
        cout << "Principal: " << principal << endl;
        cout << "Year: " << year << endl;
        cout << "Rate: " << rate << "%" << endl;
        cout << "Simple Interest: " << simpleInterest << endl;
    }
};

int main()
{
    int p, y, r;
    float rf;

    cout << "Enter principal, year, and rate (int): ";
    cin >> p >> y >> r;
    Interest intRateInterest(p, y, r);
    intRateInterest.display();

    cout << "\nEnter principal, year, and rate (float, default 2.5): ";
    cin >> p >> y >> rf;
    Interest floatRateInterest(p, y, rf);
    floatRateInterest.display();
}
