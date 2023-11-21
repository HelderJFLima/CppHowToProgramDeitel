// Exercise 3.14
// Class called Employee with three pieces of information as data members.


#include <string>

using namespace std;


class Employee
{

public:

    Employee(string firstName, string lastName, int salary);

    void setFirstName(string name);

    string getFirstName();

    void setLastName(string name);

    string getLastName();

    void setSalary(int value);

    int getSalary();

private:

    string first_Name;

    string last_Name;

    int monthlySalary;

};
