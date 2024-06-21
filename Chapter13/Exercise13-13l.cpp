// Exercise 13.13

// Triangle class member-function definitions.


#include <cmath>
#include <iostream>
#include <string>
#include "Triangle.h"

using namespace std;


Triangle::Triangle(const string &triangleID,
                   double sideA, double sideB, double sideC)
         : TwoDimensionalShape(triangleID)
{
    setSides(sideA, sideB, sideC);
}


void Triangle::setSides(double sideA, double sideB, double sideC)
{
    if(sideA > 0.0 && sideB > 0.0 && sideC > 0.0)
    {
        triangleSideA = sideA;

        triangleSideB = sideB;

        triangleSideC = sideC;
    }
    else
    {
        triangleSideA = 1.0;

        triangleSideB = 1.0;

        triangleSideC = 1.0;

        throw invalid_argument("\nThe sides of the triangle need "
                                      "to be greater than zero.\n");
    }
}


double Triangle::getSideA() const
{
    return triangleSideA;
}


double Triangle::getSideB() const
{
    return triangleSideB;
}


double Triangle::getSideC() const
{
    return triangleSideC;
}


double Triangle::getArea() const
{
    double a;        // Sides of the triangle
    double b;
    double c;
    double semiP;    // Semiperimeter of the triangle

    a = getSideA();

    b = getSideB();

    c = getSideC();

    semiP = (a + b + c) / 2.0;            // Heron's formula

    return sqrt( semiP * (semiP - a) * (semiP - b) * (semiP - c) );
}


void Triangle::print() const
{
    cout << "Triangle\nid: " << getID()
         << "\nside a: " << getSideA()
         << "\nside b: " << getSideB()
         << "\nside c: " << getSideC();
}
