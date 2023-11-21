// Fig. 3.5: fig03_05.cpp
// Define class GradeBook that contains a courseName data member
// and member functions to set and get its value;
// Create and manipulate a GradeBook object with these functions.

#include <iostream>
#include <string>

using namespace std;


// GradeBook class definition

class GradeBook
{

public:

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
    string nameOfCourse;
    GradeBook myGradeBook;

    cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

    cout << "\nPlease enter the course name:" << endl;

    getline(cin, nameOfCourse);

    myGradeBook.setCourseName(nameOfCourse);

    cout << endl;

    myGradeBook.displayMessage(nameOfCourse);
}
