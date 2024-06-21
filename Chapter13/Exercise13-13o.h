// Exercise 13.13

// Cube class definition.


#ifndef CUBE_H
#define CUBE_H


#include <string>
#include "ThreeDimensionalShape.h"

using namespace std;


class Cube : public ThreeDimensionalShape
{

public:

    Cube(const string &, double = 1.0);

    void setSide(double);

    double getSide() const;

    virtual double getArea() const;

    virtual double getVolume() const;

    virtual void print() const;

private:

    double cubeSide;

};


#endif // CUBE_H
