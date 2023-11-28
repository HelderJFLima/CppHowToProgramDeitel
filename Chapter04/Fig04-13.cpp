// Fig. 4.13: GradeBook.cpp
// Member-function definitions for class GradeBook that solves the
// class average program with sentinel-controlled repetition.


#include <iostream>
#include <iomanip>          // parameterized stream manipulators
#include "GradeBook.h"

using namespace std;


// constructor initializes courseName with string supplied as argument

GradeBook::GradeBook(string name)
{
    setCourseName(name);
}


// function to set the course name

void GradeBook::setCourseName(string name)
{
    if(name.length() <= 25)

        courseName = name;

    else
    {
        courseName = name.substr(0, 25);

        cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
             << "Limiting courseName to first 25 characters.\n" << endl;
    }
}


// function to get the course name

string GradeBook::getCourseName()
{
    return courseName;
}


// display a welcome message to the GradeBook user

void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!"
         << endl;
}


// determine class average based on 10 grades entered by user

void GradeBook::determineClassAverage()
{
    int total;          // sum of grades entered by user
    int gradeCounter;   // number of grades entered
    int grade;          // grade value
    double average;     // number with decimal point for average

    total = 0;
    gradeCounter = 0;

    cout << "Enter grade or -1 to quit: ";
    cin >> grade;

    while(grade != -1)
    {
        total = total + grade;

        gradeCounter = gradeCounter + 1;

        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
    }

    if(gradeCounter != 0)
    {
        average = static_cast<double>(total) / gradeCounter;

        cout << "\nTotal of all " << gradeCounter << " grades entered is "
             << total << endl;

        cout << "Class average is " << setprecision(2) << fixed << average
             << endl;
    }
    else
        cout << "No grades were entered" << endl;
}
