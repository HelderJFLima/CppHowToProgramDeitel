// Exercise 9.5

// Definition of class Complex, to perform arithmetic with complex numbers.


#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{

public:

    Complex(double = 0, double = 0);

    void setReal(double);

    void setImaginary(double);

    double getReal();

    double getImaginary();

    void plus(Complex &);

    void minus(Complex &);

    void print();

private:

    double realPart;

    double imaginaryPart;

};


#endif
