// Exercise 3.14
// Class called Employee with three pieces of information as data members.


#include <iostream>
#include "Employee.h"

using namespace std;


// Constructor

Employee::Employee(string firstName, string lastName, int salary)
{
    setFirstName(firstName);

    setLastName(lastName);

    setSalary(salary);
}


// Set the first name.

void Employee::setFirstName(string name)
{
    first_Name = name;
}


// Get the first name.

string Employee::getFirstName()
{
    return first_Name;
}


// Set the last name.

void Employee::setLastName(string name)
{
    last_Name = name;
}


// Get the last name.

string Employee::getLastName()
{
    return last_Name;
}


// Set the salary value.

void Employee::setSalary(int value)
{
    if(value >= 0)
        monthlySalary = value;

    if(value < 0)
    {
        monthlySalary = 0;

        cout << "Invalid salary value!\n\nSetting salary to zero.\n"
             << endl;
    }
}


// Get the salary value.

int Employee::getSalary()
{
    return monthlySalary;
}
