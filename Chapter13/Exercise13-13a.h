// Exercise 13.13

// Shape abstract class definition.


#ifndef SHAPE_H
#define SHAPE_H


#include <string>

using namespace std;


class Shape
{

public:

    Shape(const string &);

    virtual ~Shape();

    string getID() const;

    virtual void print() const = 0;

private:

    void setID(const string &);

    string id;

};


#endif // SHAPE_H
