// Fig. 5.10: GradeBook.cpp
// Member-function definitions for class GradeBook that
// uses a switch statement to count A, B, C, D and F grades.


#include <iostream>
#include "GradeBook.h"

using namespace std;


// constructor initializes courseName with string supplied as argument

GradeBook::GradeBook(string name)
{
    setCourseName(name);

    aCount = 0;
    bCount = 0;
    cCount = 0;
    dCount = 0;
    fCount = 0;
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


// input arbitrary number of grades from user; update grade counter

void GradeBook::inputGrades()
{
    int grade;

    cout << "Enter the letter grades." << endl
         << "Enter the EOF character to end input." << endl;

    while( ( grade = cin.get() ) != EOF )
    {
        switch(grade)
        {
            case 'A':
            case 'a':

                aCount++;

                break;

            case 'B':
            case 'b':

                bCount++;

                break;

            case 'C':
            case 'c':

                cCount++;

                break;

            case 'D':
            case 'd':

                dCount++;

                break;

            case 'F':
            case 'f':

                fCount++;

                break;

            case '\n':
            case '\t':
            case ' ':

                break;

            default:

                cout << "Incorrect letter grade entered."
                     << " Enter a new grade." << endl;

                break;
        }
    }
}


// display a report based on the grades entered by user

void GradeBook::displayGradeReport()
{
    cout << "\n\nNumber of students who received each letter grade:"
         << "\nA " << aCount
         << "\nB " << bCount
         << "\nC " << cCount
         << "\nD " << dCount
         << "\nF " << fCount
         << endl;
}
