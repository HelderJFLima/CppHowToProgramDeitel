// Fig. 7.16: GradeBook.cpp
// Member-function definitions for class GradeBook that
// uses an array to store test grades.


#include <iostream>
#include <iomanip>
#include "GradeBook.h"

using namespace std;


// constructor initializes courseName and grades array

GradeBook::GradeBook(string name, const int gradesArray[])
{
    setCourseName(name);

    for(int grade = 0; grade < students; grade++)
        grades[grade] = gradesArray[grade];
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

void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!"
         << endl;
}


// perform various operations on the data

void GradeBook::processGrades()
{
    outputGrades();     // output grades array
                                        // display average of all grades and
    cout << "\nClass average is " << setprecision(2)    // minimum and maximum
         << fixed << getAverage()                       // grades
         << "\nLowest grade is " << getMinimum()
         << "\nHighest grade is " << getMaximum()
         << endl;

    outputBarChart();   // print grade distribution chart
}


// find minimum grade

int GradeBook::getMinimum()
{
    int lowGrade = 100;         // assume lowest grade is 100

    for(int grade = 0; grade < students; grade++)
    {
        if(grades[grade] < lowGrade)
            lowGrade = grades[grade];
    }

    return lowGrade;
}


// find maximum grade

int GradeBook::getMaximum()
{
    int highGrade = 0;          // assume highest grade is 0

    for(int grade = 0; grade < students; grade++)
    {
        if(grades[grade] > highGrade)
            highGrade = grades[grade];
    }

    return highGrade;
}


// determine average grade for test

double GradeBook::getAverage()
{
    int total = 0;

    for(int grade = 0; grade < students; grade++)
        total += grades[grade];

    return static_cast<double>(total) / students;
}


// output bar chart displaying grade distribution

void GradeBook::outputBarChart()
{
    cout << "\nGrade distribution:" << endl;

    const int frequencySize = 11;

    int frequency[frequencySize] = {};      // initialize elements to 0

    for(int grade = 0; grade < students; grade++)
        ++frequency[ grades[grade] / students ];

    for(int count = 0; count < frequencySize; count++)
    {
        if(count == 0)

            cout << " 0-9: ";

        else if(count == 10)

            cout << " 100: ";

        else
            cout << count * 10 << "-" << (count * 10) + 9 << ": ";

        for(int stars = 0; stars < frequency[count]; stars++)
            cout << '*';

        cout << endl;
    }
}


// output the contents of the grades array

void GradeBook::outputGrades()
{
    cout << "\nThe grades are:\n\n";

    for(int student = 0; student < students; student++)
    {
        cout << "Student " << setw(2) << student + 1 << ": "
             << setw(3) << grades[student]
             << endl;
    }
}
