// Exercise 11.8

// Definition of class Complex, to perform arithmetic with complex numbers.


#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

using namespace std;


class Complex
{

    friend ostream &operator<<(ostream &, const Complex &);

    friend istream &operator>>(istream &, Complex &);

public:

    Complex(double = 0.0, double = 0.0);

    Complex operator+(const Complex &) const;

    Complex operator-(const Complex &) const;

    Complex operator*(const Complex &) const;

    bool operator==(const Complex &) const;

    bool operator!=(const Complex &) const;

private:

    double real;

    double imaginary;

};


#endif
