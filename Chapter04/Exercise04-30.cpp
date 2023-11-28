// Exercise 4.25
// Write a program that reads the radius of a circle (as a double value) and
// computes and prints the diameter, the circumference and the area. Use the
// value 3.14159 for pi.


#include <iostream>
#include <iomanip>

using namespace std;


// Program that reads the radius of a circle and computes and prints the
// diameter, the circumference and the area.

int main()
{
    double radius;
    double PI = 3.14159;

    cout << "\nEnter a value for circumference radius: ";
    cin >> radius;
    cout << endl;

    if(radius < 0)
        radius = 0;

    cout << "\ndiameter:\t" << setprecision(2) << fixed << 2 * radius
         << "\ncircumference:\t" << 2 * PI * radius
         << "\narea:\t\t" << PI * radius * radius
         << endl;
}
