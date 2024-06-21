// Exercise 13.13

// Triangle class definition.


#ifndef TRIANGLE_H
#define TRIANGLE_H


#include <string>
#include "TwoDimensionalShape.h"

using namespace std;


class Triangle : public TwoDimensionalShape
{

public:

    Triangle(const string &, double = 1.0, double = 1.0, double = 1.0);

    void setSides(double, double, double);

    double getSideA() const;

    double getSideB() const;

    double getSideC() const;

    virtual double getArea() const;

    virtual void print() const;

private:

    double triangleSideA;

    double triangleSideB;

    double triangleSideC;

};


#endif // TRIANGLE_H
