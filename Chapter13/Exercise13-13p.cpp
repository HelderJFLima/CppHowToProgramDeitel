// Exercise 13.13

// Cube class member-function definitions.


#include <iostream>
#include <string>
#include "Cube.h"

using namespace std;


Cube::Cube(const string &cubeID, double side)
     : ThreeDimensionalShape(cubeID)
{
    setSide(side);
}


void Cube::setSide(double side)
{
    if(side > 0.0)

        cubeSide = side;

    else
    {
        cubeSide = 1.0;

        throw invalid_argument("\nThe side must be greater than zero.\n");
    }
}


double Cube::getSide() const
{
    return cubeSide;
}


double Cube::getArea() const
{
    double s;      // Side

    s = getSide();

    return 6 * s * s;
}


double Cube::getVolume() const
{
    double s;      // Side

    s = getSide();

    return s * s * s;
}


void Cube::print() const
{
    cout << "Cube\nid: " << getID()
         << "\nside: " << getSide();
}
