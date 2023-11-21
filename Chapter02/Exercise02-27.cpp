// Exercise 2.27
// Write a program that prints the integer equivalent of a character typed at
// the keyboard using "static_cast".


#include <iostream>

using namespace std;

int main()
{
    char character;

    cout << "\nType a character: ";

    cin >> character;

    cout << "\ncharacter: " << character << "\tvalue: "
            << static_cast< int >(character) << endl;

    return 0;
}
