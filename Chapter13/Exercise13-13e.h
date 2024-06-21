// Exercise 13.13

// ThreeDimensionalShape abstract class definition.


#ifndef THREEDIMENSIONAL_H
#define THREEDIMENSIONAL_H


#include <string>
#include "Shape.h"

using namespace std;


class ThreeDimensionalShape : public Shape
{

public:

    ThreeDimensionalShape(const string &);

    virtual double getArea() const = 0;

    virtual double getVolume() const = 0;

};


#endif // THREEDIMENSIONAL_H
