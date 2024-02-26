// Exercise 9.5

// Definition of Complex class functions, to perform arithmetic with complex
// numbers.


#include <iomanip>
#include <iostream>
#include "Complex.h"

using namespace std;


Complex::Complex(double real, double imaginary)
{
    setReal(real);

    setImaginary(imaginary);
}


// set real part

void Complex::setReal(double real)
{
    realPart = real;
}


// set imaginary part

void Complex::setImaginary(double imaginary)
{
    imaginaryPart = imaginary;
}


// get real part

double Complex::getReal()
{
    return realPart;
}


// get imaginary part

double Complex::getImaginary()
{
    return imaginaryPart;
}


// add a complex number

void Complex::plus(Complex &cnumber)
{
    realPart += cnumber.getReal();

    imaginaryPart += cnumber.getImaginary();
}


// subtract a complex number

void Complex::minus(Complex &cnumber)
{
    realPart -= cnumber.getReal();

    imaginaryPart -= cnumber.getImaginary();
}


// print a complex number with the form (a, b)

void Complex::print()
{
    cout << setprecision(2) << fixed
         << "(" << getReal()
         << ", " << getImaginary()
         << ")";
}
