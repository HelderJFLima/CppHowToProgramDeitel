// Fig. 4.12: GradeBook.h
// Definition of class GradeBook that determines a class average.
// Member functions are defined in GradeBook.cpp


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

    void determineClassAverage();       // averages grades entered by the user

private:

    string courseName;

};
