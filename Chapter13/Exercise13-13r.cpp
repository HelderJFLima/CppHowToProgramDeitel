// Exercise 13.13

// Tetrahedron class member-function definitions.


#include <iostream>
#include <string>
#include "Tetrahedron.h"

using namespace std;


Tetrahedron::Tetrahedron(const string &tetrahedronID, double side)
            : ThreeDimensionalShape(tetrahedronID)
{
    setSide(side);
}


void Tetrahedron::setSide(double side)
{
    if(side > 0.0)

        tetrahedronSide = side;

    else
    {
        tetrahedronSide = 1.0;

        throw invalid_argument("\nThe side must be greater than zero.\n");
    }
}


double Tetrahedron::getSide() const
{
    return tetrahedronSide;
}


double Tetrahedron::getArea() const
{
    double s;      // Side

    s = getSide();

    return 2 * s * s * THEIGHT;
}


double Tetrahedron::getVolume() const
{
    return ( getSide() * THEIGHT * PHEIGHT ) / 6;
}


void Tetrahedron::print() const
{
    cout << "Tetrahedron\nid: " << getID()
         << "\nside: " << getSide();
}
