// Fig. 3.12: GradeBook.cpp
// GradeBook member-function definitions. This file contains
// implementations of the member functions prototyped in GradeBook.h.

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
    courseName = name;
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
