// Exercise 11.8

// Definition of Complex class functions, to perform arithmetic with complex
// numbers.


#include <iostream>
#include "Complex.h"

using namespace std;


// constructor

Complex::Complex(double realPart, double imaginaryPart)
        : real(realPart),
          imaginary(imaginaryPart) { }


// addition operator

Complex Complex::operator+(const Complex &operand2) const
{
    return Complex(real + operand2.real, imaginary + operand2.imaginary);
}


// subtraction operator

Complex Complex::operator-(const Complex &operand2) const
{
    return Complex(real - operand2.real, imaginary - operand2.imaginary);
}


// multiplication operator

Complex Complex::operator*(const Complex &operand2) const
{
    double newReal;

    double newImaginary;

    newReal = real * operand2.real - imaginary * operand2.imaginary;

    newImaginary = real * operand2.imaginary + imaginary * operand2.real;

    return Complex(newReal, newImaginary);
}


// == operator

bool Complex::operator==(const Complex &operand2) const
{
    return (real == operand2.real) && (imaginary == operand2.imaginary);
}


// != operator

bool Complex::operator!=(const Complex &operand2) const
{
    return (real != operand2.real) || (imaginary != operand2.imaginary);
}


// overloaded output operator

ostream &operator<<(ostream &output, const Complex &c)
{
    output << "(" << c.real << ", " << c.imaginary << ")";

    return output;
}


// overloaded input operator

istream &operator>>(istream &input, Complex &c)
{
    input >> c.real >> c.imaginary;

    return input;
}
