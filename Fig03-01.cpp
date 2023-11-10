// Fig. 3.1: fig03_01.cpp
// Define class GradeBook with a member function displayMessage,
// create a GradeBook object, and call its displayMessage function.


#include <iostream>

using namespace std;


// GradeBook class definition

class GradeBook
{

public:

    void displayMessage()
    {
        cout << "Welcome to the Grade Book!" << endl;
    }

};


int main()
{
    GradeBook myGradeBook;

    myGradeBook.displayMessage();
}
