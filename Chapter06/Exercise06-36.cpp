// Exercise 6.36

// Program that uses a recursive exponentiation function.


#include <iostream>

using namespace std;

long power(long base, long exponent);


// Determine a integer power

int main()
{
    long base, exp;

    cout << "\nEnter base: ";
    cin >> base;

    cout << "\nEnter exponent: ";
    cin >> exp;

    if(exp < 0)
    {
        cout << "\nInvalid exponent\n"
             << "\nThe exponent must be non-negative"
             << endl;

        return 1;
    }

    cout << "\n" << base << "^" << exp << " = "
         << power(base, exp)
         << endl;

    return 0;
}


// Recursive exponentiation

long power(long base, long exponent)
{
    if(exponent == 0)

        return 1;

    else if(exponent == 1)

        return base;

    else
        return base * power(base, exponent - 1);
}
