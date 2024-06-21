// Exercise 13.13

// Square class member-function definitions.


#include <iostream>
#include <string>
#include "Square.h"

using namespace std;


Square::Square(const string &squareID, double side)
       : TwoDimensionalShape(squareID)
{
    setSide(side);
}


void Square::setSide(double side)
{
    if(side > 0.0)

        squareSide = side;

    else
    {
        squareSide = 1.0;

        throw invalid_argument("\nThe side must be greater than zero.\n");
    }
}


double Square::getSide() const
{
    return squareSide;
}


double Square::getArea() const
{
    double s;      // Side

    s = getSide();

    return s * s;
}


void Square::print() const
{
    cout << "Square\nid: " << getID()
         << "\nside: " << getSide();
}
