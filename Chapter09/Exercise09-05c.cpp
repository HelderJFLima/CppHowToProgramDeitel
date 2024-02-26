// Exercise 9.5

// Program to test class Complex


#include <iostream>
#include "Complex.h"

using namespace std;


int main()
{
    Complex c1(2.0, 3.0);
    Complex c2(5.0, -4.0);
    Complex c3;

    cout << "Numbers:\n\n";

    cout << "c1: ";
    c1.print();
    cout << endl;

    cout << "c2: ";
    c2.print();
    cout << endl;

    cout << "c3: ";
    c3.print();
    cout << endl;

    cout << "\nAdd c1 + c2\n";

    c1.plus(c2);

    cout << "\nc1: ";
    c1.print();
    cout << endl;

    cout << "\nSubtract c1 - c2\n";

    c1.minus(c2);

    cout << "\nc1: ";
    c1.print();
    cout << endl;

    cout << "\nAdd c3 + c1\n";

    c3.plus(c1);

    cout << "\nc3: ";
    c3.print();
    cout << endl;

    cout << "\nSubtract c3 - c2\n";

    c3.minus(c2);

    cout << "\nc3: ";
    c3.print();
    cout << endl;
}
