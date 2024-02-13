// Fig. 7.23: GradeBook.cpp
// Member-function definitions for class GradeBook that
// uses a two-dimensional array to store grades.


#include <iostream>
#include <iomanip>
#include "GradeBook.h"

using namespace std;


// constructor initializes courseName and grades array

GradeBook::GradeBook( string name, const int gradesArray[][tests] )
{
    setCourseName(name);

    for(int student = 0; student < students; student++)
    {
        for(int test = 0; test < tests; test++)
            grades[student][test] = gradesArray[student][test];
    }
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

    cout << "\nLowest grade is " << getMinimum()
         << "\nHighest grade is " << getMaximum()
         << endl;

    outputBarChart();   // print grade distribution chart
}


// find minimum grade

int GradeBook::getMinimum()
{
    int lowGrade = 100;         // assume lowest grade is 100

    for(int student = 0; student < students; student++)
    {
        for(int test = 0; test < tests; test++)
        {
            if(grades[student][test] < lowGrade)
                lowGrade = grades[student][test];
        }
    }

    return lowGrade;
}


// find maximum grade

int GradeBook::getMaximum()
{
    int highGrade = 0;          // assume highest grade is 0

    for(int student = 0; student < students; student++)
    {
        for(int test = 0; test < tests; test++)
        {
            if(grades[student][test] > highGrade)
                highGrade = grades[student][test];
        }
    }

    return highGrade;
}


// determine average grade for test

double GradeBook::getAverage(const int setOfGrades[], const int grades)
{
    int total = 0;

    for(int grade = 0; grade < grades; grade++)
        total += setOfGrades[grade];

    return static_cast<double>(total) / grades;
}


// output bar chart displaying grade distribution

void GradeBook::outputBarChart()
{
    cout << "\nGrade distribution:" << endl;

    const int frequencySize = 11;

    int frequency[frequencySize] = {};      // initialize elements to 0

    for(int student = 0; student < students; student++)
    {
        for(int test = 0; test < tests; test++)
            ++frequency[ grades[student][test] / students ];
    }

    for(int count = 0; count < frequencySize; count++)
    {
        if(count == 0)

            cout << "  0-9: ";

        else if(count == 10)

            cout << "  100: ";

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
    cout << "            ";             // align column heads

    for(int test = 0; test < tests; test++)
        cout << "Test " << test + 1 << "  ";

    cout << "Average" << endl;          // student average column heading

    for(int student = 0; student < students; student++)
    {
        cout << "Student " << setw(2) << student + 1;

        for(int test = 0; test < tests; test++)
            cout << setw(8) << grades[student][test];

        double average = getAverage(grades[student], tests);

        cout << setw(9) << setprecision(2) << fixed << average << endl;
    }
}
