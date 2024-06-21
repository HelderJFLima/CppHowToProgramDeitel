// Exercise 13.13

// TwoDimensionalShape abstract class definition.


#ifndef TWODIMENSIONAL_H
#define TWODIMENSIONAL_H


#include <string>
#include "Shape.h"

using namespace std;


class TwoDimensionalShape : public Shape
{

public:

    TwoDimensionalShape(const string &);

    virtual double getArea() const = 0;

};


#endif // TWODIMENSIONAL_H
