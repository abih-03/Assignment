/*
Define a class to represent lecture details. Include the following members and 
the program should handle at least details of 5 lecturer. 
Data members:
a) Name of the lecturer 
b) Name of the subject 
c) Name of course 
d) Number of lecturers 
Data functions:
a) To assign initial values 
b) To add a lecture details 
c) To display name and lecture details
*/

#include <iostream>
#include <string>
using namespace std;

class Lecture
{
private:
    string lecturerName;  
    string subjectName;   
    string courseName;    
    int numberOfLectures; 

public:
    void assignValues(string lName, string sName, string cName, int numLectures)
    {
        lecturerName = lName;
        subjectName = sName;
        courseName = cName;
        numberOfLectures = numLectures;
    }

    void addLectureDetails()
    {
        cout<<"Enter Lecturer Name:- ";
        getline(cin, lecturerName);
        cout<<"Enter Subject Name:- ";
        getline(cin, subjectName);
        cout<<"Enter Course Name:- ";
        getline(cin, courseName);
        cout<<"Enter Number of Lectures:- ";
        cin>>numberOfLectures;
        cin.ignore();
    }

    void displayLectureDetails() const
    {
        cout<<"\n Lecturer Name:- "<<lecturerName<<endl;
        cout<<"Subject Name:- "<<subjectName<<endl;
        cout<<"Course Name:- "<<courseName<<endl;
        cout<<"Number of Lectures:- "<<numberOfLectures<<endl;
    }
};

int main()
{
    const int numLecturers = 5;
    Lecture lecturers[numLecturers];  

    for (int i = 0; i < numLecturers; i++)
    {
        cout << "\nEnter details for Lecturer " << i + 1 << ":\n";
        lecturers[i].addLectureDetails();
    }

    cout << "\nDisplaying Lecturer Details:\n";
    for (int i = 0; i < numLecturers; i++)
    {
        lecturers[i].displayLectureDetails();
    }
}
