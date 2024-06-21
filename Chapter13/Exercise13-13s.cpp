// Exercise 13.13

// Test of Shape class and its subclasses.


#include <iomanip>
#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
#include "Shape.h"
#include "TwoDimensionalShape.h"
#include "ThreeDimensionalShape.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include "Sphere.h"
#include "Cube.h"
#include "Tetrahedron.h"

using namespace std;


int main()
{
    cout << fixed << setprecision(2);

    vector<Shape *> shapes(6);

    shapes[0] = new Circle("circle01", 7.3);

    shapes[1] = new Square("square01", 5.0);

    shapes[2] = new Triangle("triangle01", 3.0, 4.0, 5.0);

    shapes[3] = new Sphere("sphere01", 11.34);

    shapes[4] = new Cube("cube01", 22.68);

    shapes[5] = new Tetrahedron("tetrahedron01");

    for(size_t i = 0; i < shapes.size(); i++)
    {
        cout << "\n\n\n";

        shapes[i]->print();

        TwoDimensionalShape *twoDimPtr =
            dynamic_cast<TwoDimensionalShape *>( shapes[i] );

        ThreeDimensionalShape *threeDimPtr =
            dynamic_cast<ThreeDimensionalShape *>( shapes[i] );

        if(twoDimPtr != 0)
        {
            cout << "\narea: " << twoDimPtr->getArea();
        }
        else
        {
            cout << "\narea: " << threeDimPtr->getArea()
                 << "\nvolume: " << threeDimPtr->getVolume();
        }
    }

    cout << "\n\n";

    for(size_t i = 0; i < shapes.size(); i++)
        delete shapes[i];
}
