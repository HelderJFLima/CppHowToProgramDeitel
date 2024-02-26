// Exercise 9.6

// Definition of class Rational, to perform arithmetic with fractions.


#ifndef RATIONAL_H
#define RATIONAL_H


class Rational
{

public:

    Rational(int = 0, int = 1);

    int getNumerator();

    int getDenominator();

    void plus(Rational &);

    void minus(Rational &);

    void times(Rational &);

    void dividedBy(Rational &);

    void printFrac();

    void printDec();

private:

    int gcd(int, int);

    void reduce();

    int numeratorR;

    int denominatorR;

};


#endif
