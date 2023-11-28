// Exercise 4.25
// Write a program that:
// a) reads a nonnegative integer and computes and prints its factorial;
// b) estimates the value of the mathematical constant e by using its infinite
//    series formula; the program must prompt the user for the desired accuracy
//    of e (i.e., the number of terms in the summation);
// c) computes the value of e^x by using its infinite series formula (using the
//    same prompt scheme as in part b).

// WARNING: This solution works with a number of terms up to 12 before exceeding
//          the limit of the types used; this limit is also machine dependent.


#include <iostream>
#include <iomanip>

using namespace std;


long factorial(long n);

double eValue(int accuracy);

double ePower(double x, int accuracy);


// Program that calculates factorial, the value of e and the value
// of powers of e.

int main()
{
    char choice;
    int iNumber;
    double dNumber;

    cout << "\nType an option:\n"
         "\n1 - compute the factorial of a number;"
         "\n2 - compute the value of e;"
         "\n3 - compute the value of e^x;"
         "\n\nany other key to exit.\n" << endl;

    cin >> choice;

    if(choice == '1')
    {
        cout << "\nEnter the number: ";

        cin >> iNumber;

        if(iNumber >= 0)

            cout << "\nFactorial: " << factorial(iNumber) << endl;

        else
            cout << "\nFactorial: undefined" << endl;
    }
    else if(choice == '2')
    {
        cout << "\nEnter the number of terms in the e sum: ";

        cin >> iNumber;

        cout << "\ne = " << setprecision(7) << fixed
             << eValue(iNumber) << endl;
    }
    else if(choice == '3')
    {
        cout << "\nEnter the power value: ";

        cin >> dNumber;

        cout << "\nEnter the number of terms in the e^x sum: ";

        cin >> iNumber;

        cout << "\ne^" << dNumber << " = " << setprecision(7) << fixed
             << ePower(dNumber, iNumber) << endl;
    }
    else
        return 0;
}


// factorial: return the factorial of a number (n >= 0).

long factorial(long n)
{
    long factorial = 1;

    while(n > 1)
        factorial *= n--;

    return factorial;
}


// eValue: computes the value of the mathematical constant e by using the
// infinite series formula with the number of terms given by the accuracy.

double eValue(int accuracy)
{
    long n = 0;
    double e = 0.0;

    while(n < accuracy)
        e += 1.0 / factorial(n++);

    return e;
}


// ePower: computes the value of e^x by using the infinite series formula with
// the number of terms given by the accuracy.

double ePower(double x, int accuracy)
{
    long n = 1;
    double ePow = 1.0;          // Power of e
    double xPow = 1.0;          // Power of x

    if(accuracy > 1)
    {
        while(n < accuracy)
        {
            xPow *= x;          // x^n

            ePow += xPow / factorial(n++);
        }
    }
    else if(accuracy <= 0)
        ePow = 0;

    return ePow;
}
