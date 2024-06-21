// Exercise 11.8

// Complex class test program.


#include <iostream>
#include "Complex.h"

using namespace std;


int main()
{
    Complex x;

    Complex y(4.3, 8.2);

    Complex z(3.3, 1.1);

    Complex w;

    cout << "x: " << x;

    cout << "\ny: " << y;

    cout << "\nz: " << z << endl;

    cout << "\nEnter a new x:\n";

    cin >> x;

    cout << "\nx: " << x;

    x = y + z;

    cout << "\n\n\nx = y + z:\n" << endl;

    cout << x << " = " << y << " + " << z;

    x = y - z;

    cout << "\n\n\nx = y - z:\n" << endl;

    cout << x << " = " << y << " - " << z << endl;

    x = y * z;

    cout << "\n\nx = y * z:\n" << endl;

    cout << x << " = " << y << " * " << z;

    w = y;

    cout << "\n\n\n" << x << " == " << y << ": " << (x == y) << endl;

    cout << "\n" << y << " == " << w << ": " << (y == w) << endl;

    cout << "\n\n" << x << " != " << y << ": " << (x != y) << endl;

    cout << "\n" << y << " != " << w << ": " << (y != w) << endl;
}
