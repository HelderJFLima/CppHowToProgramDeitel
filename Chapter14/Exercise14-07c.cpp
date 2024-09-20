// Exercise 14.7

// (Array Class Template)
// Reimplement class Array from Figs. 11.10–11.11 as a class template.
// Demonstrate the new Array class template in a program.

// Class Test


#include <iostream>
#include "Array.h"

using namespace std;


template<typename T>
void initializeArray(Array<T> &arrayToInitialize)
{
    for(int i = 0; i < arrayToInitialize.getSize(); i++)
        arrayToInitialize[i] = 0;
}


template<typename T>
void outputArray(const Array<T> &arrayToOutput)
{
    cout << "\nThe array has " << arrayToOutput.getSize()
         << " elements.\n\nContents:\n" << endl;

    cout << arrayToOutput << endl;
}


int main()
{
    Array<int> a(5);

    Array<int> b;

    Array<float> c(3);

    Array<float> d(7);

    initializeArray(a);

    initializeArray(b);

    initializeArray(c);

    initializeArray(d);

    cout << "\nArray a:" << endl;

    outputArray(a);

    cout << "\nArray b:" << endl;

    outputArray(b);

    cout << "\nArray c:" << endl;

    outputArray(c);

    cout << "\nArray d:" << endl;

    outputArray(d);

    cout << "\nTest: a == b: " << (a == b) << endl;

    cout << "\nTest: a != b: " << (a != b) << endl;

    cout << "\nEnter 7 float values:" << endl;

    cin >> d;

    for(int i = 0; i < b.getSize(); i++)
        b[i] = 2 * (i + 1);

    a = b;

    c = d;

    cout << "\nArray a:" << endl;

    outputArray(a);

    cout << "\nArray b:" << endl;

    outputArray(b);

    cout << "\nArray c:" << endl;

    outputArray(c);

    cout << "\nArray d:" << endl;

    outputArray(d);

    cout << "\nTest: c == d: " << (c == d) << endl;

    cout << "\nTest: c != d: " << (c != d) << endl;

    for(int i = 0; i < b.getSize(); i++)
        b[i] = -1;

    for(int i = 0; i < b.getSize(); i++)
        c[i] = 0;

    a = b;

    d = c;

    cout << "\nArray a:" << endl;

    outputArray(a);

    cout << "\nArray b:" << endl;

    outputArray(b);

    cout << "\nArray c:" << endl;

    outputArray(c);

    cout << "\nArray d:" << endl;

    outputArray(d);
}
