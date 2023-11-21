// Exercise 3.14
// Test of a class called Employee with three pieces of information as data
// members.


#include <iostream>
#include "Employee.h"

using namespace std;


// Test program that demonstrates class Employee's capabilities.

int main()
{
    Employee employee1("John", "Doe", 1000);
    Employee employee2("Jane", "Doe", -10);

    cout << "\nemployee1:\n"
            "\nfirst name:\t" << employee1.getFirstName()
         << "\nlast name:\t" << employee1.getLastName()
         << "\nsalary:\t" << employee1.getSalary() << endl;

    cout << "\nemployee2:\n"
            "\nfirst name:\t" << employee2.getFirstName()
         << "\nlast name:\t" << employee2.getLastName()
         << "\nsalary:\t" << employee2.getSalary() << endl;

    cout << endl;

    employee1.setFirstName("J.");
    employee1.setLastName("Doeh");
    employee1.setSalary(0);

    employee2.setFirstName("Janex");
    employee2.setLastName("Doeh");
    employee2.setSalary(-1);

    cout << "\nemployee1:\n"
            "\nfirst name:\t" << employee1.getFirstName()
         << "\nlast name:\t" << employee1.getLastName()
         << "\nsalary:\t" << employee1.getSalary() << endl;

    cout << "\nemployee2:\n"
            "\nfirst name:\t" << employee2.getFirstName()
         << "\nlast name:\t" << employee2.getLastName()
         << "\nsalary:\t" << employee2.getSalary() << endl;

    employee1.setSalary(200);
    employee2.setSalary(100);

    cout << "\nemployee1 salary: " << employee1.getSalary() << endl;
    cout << "employee2 salary: " << employee2.getSalary() << endl;

    cout << "\nemployee1 yearly salary: "
         << employee1.getSalary() * 12 << endl;

    cout << "employee2 yearly salary: "
         << employee2.getSalary() * 12 << endl;

    employee1.setSalary( 1.1 * employee1.getSalary() );
    employee2.setSalary( 1.1 * employee2.getSalary() );

    cout << "\nemployee1 yearly salary: "
         << employee1.getSalary() * 12 << endl;

    cout << "employee2 yearly salary: "
         << employee2.getSalary() * 12 << endl;
}
