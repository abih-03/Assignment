/*
Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance) 
*/

#include <iostream>
using namespace std;

class Person 
{
protected:
    string name;
    int age;

public:
    void inputPersonData() 
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonData() const 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : virtual public Person 
{
protected:
    float percentage;

public:
    void inputStudentData() 
    {
        inputPersonData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void displayStudentData() const 
    {
        displayPersonData();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};


class Teacher : virtual public Person 
{
protected:
    float salary;

public:
    void inputTeacherData() 
    {
        inputPersonData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayTeacherData() const 
    {
        displayPersonData();
        cout << "Salary: " << salary << endl;
    }
};

class TeachingAssistant : public Student, public Teacher 
{
public:
    void inputTAData()
    {
        inputStudentData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayTAData() const 
    {
        displayStudentData();
        cout << "Salary: " << salary << endl;
    }
};

int main() 
{
    TeachingAssistant ta;
    cout << "Input data for Teaching Assistant:" << endl;
    ta.inputTAData();

    cout << "\nTeaching Assistant Details:" << endl;
    ta.displayTAData();
}
