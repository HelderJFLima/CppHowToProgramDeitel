// Exercise 5.20
// Find all Pythagorean triples for side1, side2 and hypotenuse all no larger
// than 500.

#include <iomanip>
#include <iostream>

using namespace std;


// Program that find all Pythagorean triples for values no larger than 500.

int main()
{
    long hypotenuse, side1, side2;          // Triangle sides

    cout << "\nPythagorean Triples\n" << endl;

    for(side1 = 1; side1 <= 500; side1++)
    {
        for(side2 = side1; side2 <= 500; side2++)
        {
            for(hypotenuse = 1;
                hypotenuse < side1 + side2 && hypotenuse <= 500; hypotenuse++)
            {
                if(hypotenuse * hypotenuse == side1 * side1 + side2 * side2)
                {

                    cout << setw(3)
                         << side1 << " "
                         << side2 << " "
                         << hypotenuse
                         << endl;

                }   // end if
            }       // end hypotenuse for
        }           // end side2 for
    }               // end side1 for

    cout << endl;
}
