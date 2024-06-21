// Exercise 13.13

// Sphere class member-function definitions.


#include <iostream>
#include <string>
#include "Sphere.h"

using namespace std;


Sphere::Sphere(const string &sphereID, double radius)
       : ThreeDimensionalShape(sphereID)
{
    setRadius(radius);
}


void Sphere::setRadius(double radius)
{
    if(radius > 0.0)

        sphereRadius = radius;

    else
    {
        sphereRadius = 1.0;

        throw invalid_argument("\nThe radius must be greater than zero.\n");
    }
}


double Sphere::getRadius() const
{
    return sphereRadius;
}


double Sphere::getArea() const
{
    double r;        // Radius

    r = getRadius();

    return 4 * PI * r * r;
}


double Sphere::getVolume() const
{
    double r;        // Radius

    r = getRadius();

    return (4 * PI * r * r * r) / 3;
}


void Sphere::print() const
{
    cout << "Sphere\nid: " << getID()
         << "\nradius: " << getRadius();
}
