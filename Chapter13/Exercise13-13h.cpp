// Exercise 13.13

// Circle class member-function definitions.


#include <iostream>
#include <string>
#include "Circle.h"

using namespace std;


Circle::Circle(const string &circleID, double radius)
       : TwoDimensionalShape(circleID)
{
    setRadius(radius);
}


void Circle::setRadius(double radius)
{
    if(radius > 0.0)

        circleRadius = radius;

    else
    {
        circleRadius = 1.0;

        throw invalid_argument("\nThe radius must be greater than zero.\n");
    }
}


double Circle::getRadius() const
{
    return circleRadius;
}


double Circle::getArea() const
{
    double r;        // Radius

    r = getRadius();

    return PI * r * r;
}


void Circle::print() const
{
    cout << "Circle\nid: " << getID()
         << "\nradius: " << getRadius();
}
