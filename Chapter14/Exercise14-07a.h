// Exercise 14.7

// (Array Class Template)
// Reimplement class Array from Figs. 11.10–11.11 as a class template.
// Demonstrate the new Array class template in a program.

// Class Header

#ifndef ARRAY_H
#define ARRAY_H


#include <iostream>

using namespace std;


template<typename T>
class Array
{

    friend ostream &operator<<(ostream &, const Array<T> &);

    friend istream &operator>>(istream &, Array<T> &);

public:

    explicit Array(int = 10);

    Array(const Array &);

    ~Array();

    int getSize() const;

    const Array &operator=(const Array &);

    bool operator==(const Array &) const;

    bool operator!=(const Array &) const;

    T &operator[](int);

    T operator[](int) const;

private:

    int size;

    T *ptr;

};


#endif // ARRAY_H
