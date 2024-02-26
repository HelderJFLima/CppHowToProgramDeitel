// Exercise 9.6

// Program to test class Rational


#include <iostream>
#include "Rational.h"

using namespace std;


int main()
{
    Rational r1;
    Rational r2(1, 3);
    Rational r3(8, 20);
    Rational r4(14, -4);
    Rational r5(-5, -8);
    Rational r6(-10, 20);
    Rational r7(1);

    cout << "\nNumbers in rational form:\n" << endl;

    r1.printFrac();
    cout << endl;
    r2.printFrac();
    cout << endl;
    r3.printFrac();
    cout << endl;
    r4.printFrac();
    cout << endl;
    r5.printFrac();
    cout << endl;
    r6.printFrac();
    cout << endl;
    r7.printFrac();
    cout << endl;

    cout << "\nNumbers in decimal form:\n" << endl;

    r1.printDec();
    cout << endl;
    r2.printDec();
    cout << endl;
    r3.printDec();
    cout << endl;
    r4.printDec();
    cout << endl;
    r5.printDec();
    cout << endl;
    r6.printDec();
    cout << endl;
    r7.printDec();
    cout << endl;

    cout << "\nOperations:\n" << endl;

    r2.printFrac();
    cout << " + ";
    r3.printFrac();
    cout << " = ";
    r2.plus(r3);
    r2.printFrac();
    cout << endl << endl;

    r2.printFrac();
    cout << " + ";
    r1.printFrac();
    cout << " = ";
    r2.plus(r1);
    r2.printFrac();
    cout << endl << endl;

    r6.printFrac();
    cout << " - ";
    r7.printFrac();
    cout << " = ";
    r6.minus(r7);
    r6.printFrac();
    cout << endl << endl;

    r1.printFrac();
    cout << " * ";
    r2.printFrac();
    cout << " = ";
    r1.times(r2);
    r1.printFrac();
    cout << endl << endl;

    r3.printFrac();
    cout << " * ";
    r4.printFrac();
    cout << " = ";
    r3.times(r4);
    r3.printFrac();
    cout << endl << endl;

    r4.printFrac();
    cout << " : ";
    r6.printFrac();
    cout << " = ";
    r4.dividedBy(r6);
    r4.printFrac();
    cout << endl << endl;

    r5.printFrac();
    cout << " : ";
    r7.printFrac();
    cout << " = ";
    r5.dividedBy(r7);
    r5.printFrac();
    cout << endl << endl;

    cout << "Trying to do something forbidden...\n" << endl;

    try
    {
        Rational r8(1, 0);
    }
    catch(invalid_argument &excpt)
    {
        cout << "Error: " << excpt.what() << endl << endl;
    }
}
