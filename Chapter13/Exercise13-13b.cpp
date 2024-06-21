// Exercise 13.13

// Shape abstract class member-function definitions.


#include <stdexcept>
#include <string>
#include "Shape.h"

using namespace std;


Shape::Shape(const string &id)
{
    setID(id);
}


Shape::~Shape()
{
}


string Shape::getID() const
{
    return id;
}


void Shape::setID(const string &idStr)
{
    if(idStr.length() > 0)

        id = idStr;

    else
    {
        id = "<invalid>";

        throw invalid_argument("\nInvalid shape ID\n");
    }
}
