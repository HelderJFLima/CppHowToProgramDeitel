// Fig. 2.13: fig02_13.cpp
// Comparing integers using if statements, relational operators
// and equality operators.

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int number1, number2;

    cout << "Enter two integers to compare: ";

    cin >> number1 >> number2;

    if(number1 == number2)
        cout << number1 << " == " << number2 << endl;

    if(number1 != number2)
        cout << number1 << " != " << number2 << endl;

    if(number1 < number2)
        cout << number1 << " < " << number2 << endl;

    if(number1 > number2)
        cout << number1 << " > " << number2 << endl;

    if(number1 <= number2)
        cout << number1 << " <= " << number2 << endl;

    if(number1 >= number2)
        cout << number1 << " >= " << number2 << endl;

    return 0;
}
