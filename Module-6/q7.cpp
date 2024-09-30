/*
Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer .Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance) 
*/

#include <iostream>
using namespace std;

class Cricketer 
{
protected:
    string name;
    int age;

public:
    void inputCricketerData() 
    {
        cout << "Enter cricketer's name: ";
        cin >> name;
        cout << "Enter cricketer's age: ";
        cin >> age;
    }

    void displayCricketerData() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Batsman : public Cricketer 
{
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    void inputBatsmanData()
    {
        inputCricketerData();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
        calculateAverageRuns();
    }

    void calculateAverageRuns() 
    {
        int matches = 10;
        averageRuns = static_cast<float>(totalRuns) / matches;
    }

    void displayBatsmanData() const 
    {
        displayCricketerData();
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() 
{
    Batsman b;
    b.inputBatsmanData();
    cout << "\nBatsman Details:\n";
    b.displayBatsmanData();
}
