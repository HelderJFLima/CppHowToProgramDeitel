// Fig. 3.7: fig03_07.cpp
// Instantiating multiple objects of the GradeBook class and using
// the GradeBook constructor to specify the course name
// when each GradeBook object is created.

#include <iostream>
#include <string>

using namespace std;


// GradeBook class definition

class GradeBook
{

public:

    GradeBook(string name)
    {
        setCourseName(name);
    }

    void setCourseName(string name)
    {
        courseName = name;
    }

    string getCourseName()
    {
        return courseName;
    }

    void displayMessage(string courseName)
    {
        cout << "Welcome to the grade book for\n" << getCourseName() << "!"
             << endl;
    }

private:

    string courseName;

};


int main()
{
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");

    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
         << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
         << endl;
}
