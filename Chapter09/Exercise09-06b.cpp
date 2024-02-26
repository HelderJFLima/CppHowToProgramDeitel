// Exercise 9.6

// Definition of Rational class functions, to perform arithmetic with fractions.


#include <cmath>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include "Rational.h"

using namespace std;


Rational::Rational(int numerator, int denominator)
{
    if(denominator == 0)
        throw invalid_argument("denominator must be non-zero");

    numeratorR = numerator;

    denominatorR = denominator;

    reduce();                  // Reduces the fraction
}


// Get the numerator

int Rational::getNumerator()
{
    return numeratorR;
}


// Get the denominator

int Rational::getDenominator()
{
    return denominatorR;
}


// Add a fraction

void Rational::plus(Rational &fraction)
{
    numeratorR = fraction.getDenominator() * numeratorR +
                 denominatorR * fraction.getNumerator()  ;

    denominatorR *= fraction.getDenominator();

    reduce();
}


// Subtract a fraction

void Rational::minus(Rational &fraction)
{
    numeratorR = fraction.getDenominator() * numeratorR -
                 denominatorR * fraction.getNumerator()  ;

    denominatorR *= fraction.getDenominator();

    reduce();
}


// Multiply by a fraction

void Rational::times(Rational &fraction)
{
    numeratorR *= fraction.getNumerator();

    denominatorR *= fraction.getDenominator();

    reduce();
}


// Divide by a fraction

void Rational::dividedBy(Rational &fraction)
{
    numeratorR *= fraction.getDenominator();

    denominatorR *= fraction.getNumerator();

    reduce();
}


// Print the fraction in fractional form

void Rational::printFrac()
{
    cout << numeratorR << "/"
         << denominatorR;
}


// Print the fraction in decimal form

void Rational::printDec()
{
    cout << setprecision(5) << fixed
         << static_cast<double>(numeratorR) / static_cast<double>(denominatorR);
}


// Calculate the greatest common divisor of two positive numbers

int Rational::gcd(int a, int b)
{
    int p, q, r = 1;    // Auxiliary variables

    if(a <= b)
    {
        p = b;

        q = a;
    }
    else
    {
        p = a;

        q = b;
    }

    while(r != 0)       // Euclidean algorithm
    {
        r = p % q;

        p = q;

        q = r;
    }

    return p;
}


// Put the fraction in reduced form

void Rational::reduce()
{
    int gcD;            // Greatest common divisor

    if(numeratorR != 0)
    {
        gcD = gcd( abs(numeratorR), abs(denominatorR) );

        if(denominatorR < 0)            // The denominator is aways positive
            gcD = -gcD;

        numeratorR /= gcD;

        denominatorR /= gcD;
    }
    else                                // Default null fraction
        denominatorR = 1;
}
