// Fig. 7.22: GradeBook.h
// Definition of class GradeBook that uses a two-dimensional array to store
// test grades.


#include <string>

using namespace std;


// GradeBook class definition

class GradeBook
{

public:

    static const int students = 10;     // number of students who took the test

    static const int tests = 3;         // number of tests

    GradeBook( string, const int[][tests] );    // constructor initializes course
                                                // name and array of grades
    void setCourseName(string);

    string getCourseName();

    void displayMessage();  // display a welcome message

    void processGrades();   // perform various operations on the grade data

    int getMinimum();       // find the minimum grade for the test

    int getMaximum();       // find the maximum grade for the test

    double getAverage(const int[], const int);  // get student’s average

    void outputBarChart();  // output bar chart of grade distribution

    void outputGrades();    // output the contents of the grades array

private:

    string courseName;              // course name for this grade book

    int grades[students][tests];    // two-dimensional array of grades

};
