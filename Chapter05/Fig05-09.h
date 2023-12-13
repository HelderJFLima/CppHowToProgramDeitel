// Fig. 5.9: GradeBook.h
// Definition of class GradeBook that counts A, B, C, D and F grades.


#include <string>

using namespace std;


// GradeBook class definition

class GradeBook
{

public:

    GradeBook(string);

    void setCourseName(string);

    string getCourseName();

    void displayMessage();

    void inputGrades();             // input arbitrary number of grades from user

    void displayGradeReport();      // display a report based on the grades

private:

    string courseName;

    int aCount;
    int bCount;
    int cCount;
    int dCount;
    int fCount;

};
