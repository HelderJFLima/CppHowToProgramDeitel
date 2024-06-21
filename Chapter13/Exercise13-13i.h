// Exercise 13.13

// Square class definition.


#ifndef SQUARE_H
#define SQUARE_H


#include <string>
#include "TwoDimensionalShape.h"

using namespace std;


class Square : public TwoDimensionalShape
{

public:

    Square(const string &, double = 1.0);

    void setSide(double);

    double getSide() const;

    virtual double getArea() const;

    virtual void print() const;

private:

    double squareSide;

};


#endif // SQUARE_H
