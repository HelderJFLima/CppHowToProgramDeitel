// Fig. 7.15: GradeBook.h
// Definition of class GradeBook that uses an array to store test grades.


#include <string>

using namespace std;


// GradeBook class definition

class GradeBook
{

public:

    static const int students = 10;     // number of students who took the test

    GradeBook(string, const int[]);     // constructor initializes course name
                                        // and array of grades
    void setCourseName(string);

    string getCourseName();

    void displayMessage();  // display a welcome message

    void processGrades();   // perform various operations on the grade data

    int getMinimum();       // find the minimum grade for the test

    int getMaximum();       // find the maximum grade for the test

    double getAverage();    // determine the average grade for the test

    void outputBarChart();  // output bar chart of grade distribution

    void outputGrades();    // output the contents of the grades array

private:

    string courseName;      // course name for this grade book

    int grades[students];   // array of student grades

};
