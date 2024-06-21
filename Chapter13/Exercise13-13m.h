// Exercise 13.13

// Sphere class definition.


#ifndef SPHERE_H
#define SPHERE_H


#include <string>
#include "ThreeDimensionalShape.h"

using namespace std;


class Sphere : public ThreeDimensionalShape
{

public:

    static const double PI = 3.141592653589793;

    Sphere(const string &, double = 1.0);

    void setRadius(double);

    double getRadius() const;

    virtual double getArea() const;

    virtual double getVolume() const;

    virtual void print() const;

private:

    double sphereRadius;

};


#endif // SPHERE_H
