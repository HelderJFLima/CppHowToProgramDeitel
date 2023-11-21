// Fig. 3.16: GradeBook.cpp
// Implementations of the GradeBook member-function definitions.
// The setCourseName function performs validation.

#include <iostream>
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

    if(name.length() > 25)
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

void GradeBook::displayMessage(string courseName)
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!"
         << endl;
}
