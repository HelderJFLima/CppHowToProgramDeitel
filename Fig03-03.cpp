// Fig. 3.3: fig03_03.cpp
// Define class GradeBook with a member function that takes a parameter,
// create a GradeBook object and call its displayMessage function.


#include <iostream>
#include <string>

using namespace std;


// GradeBook class definition

class GradeBook
{

public:

    void displayMessage(string courseName)
    {
        cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
    }

};


int main()
{
    string nameOfCourse;
    GradeBook myGradeBook;

    cout << "Please enter the course name:" << endl;

    getline(cin, nameOfCourse);

    cout << endl;

    myGradeBook.displayMessage(nameOfCourse);
}
