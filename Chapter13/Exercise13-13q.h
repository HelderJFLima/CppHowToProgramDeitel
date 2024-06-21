// Exercise 13.13

// Tetrahedron class definition.


#ifndef TETRAHEDRON_H
#define TETRAHEDRON_H


#include <string>
#include "ThreeDimensionalShape.h"

using namespace std;


class Tetrahedron : public ThreeDimensionalShape
{

public:

    // Height of a tetrahedron with sides equal to one
    static const double PHEIGHT = 0.816496580927726;

    // Height of an equilateral triangle with sides equal to one
    static const double THEIGHT = 0.866025403784439;

    Tetrahedron(const string &, double = 1.0);

    void setSide(double);

    double getSide() const;

    virtual double getArea() const;

    virtual double getVolume() const;

    virtual void print() const;

private:

    double tetrahedronSide;

};


#endif // TETRAHEDRON_H
