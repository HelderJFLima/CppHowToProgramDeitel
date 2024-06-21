// Exercise 13.13

// Circle class definition.


#ifndef CIRCLE_H
#define CIRCLE_H


#include <string>
#include "TwoDimensionalShape.h"

using namespace std;


class Circle : public TwoDimensionalShape
{

public:

    static const double PI = 3.141592653589793;

    Circle(const string &, double = 1.0);

    void setRadius(double);

    double getRadius() const;

    virtual double getArea() const;

    virtual void print() const;

private:

    double circleRadius;

};


#endif // CIRCLE_H
