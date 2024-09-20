// Exercise 14.7

// (Array Class Template)
// Reimplement class Array from Figs. 11.10–11.11 as a class template.
// Demonstrate the new Array class template in a program.

// Class Functions Definitions


#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "Array.h"

using namespace std;


template<typename T>
Array<T>::Array(int arraySize)
{
    if(arraySize > 0)

        size = arraySize;

    else
        throw invalid_argument("Array size must be grater than 0.");

    ptr = new T[size];
}


template<typename T>
Array<T>::Array(const Array &arrayToCopy)
         : size(arrayToCopy.getSize())
{
    ptr = new T[size];

    for(int i = 0; i < size; i++)
        ptr[i] = arrayToCopy.ptr[i];
}


template<typename T>
Array<T>::~Array()
{
    delete [] ptr;
}


template<typename T>
int Array<T>::getSize() const
{
    return size;
}


template<typename T>
const Array<T> &Array<T>::operator=(const Array &right)
{
    if(&right != this)
    {
        if(size != right.getSize())
        {
            delete [] ptr;

            size = right.getSize();

            ptr = new T[size];
        }

        for(int i = 0; i < size; i++)
            ptr[i] = right.ptr[i];
    }

    return *this;
}


template<typename T>
bool Array<T>::operator==(const Array &right) const
{
    if(size != right.getSize())
        return false;

    for(int i = 0; i < size; i++)
    {
        if(ptr[i] != right.ptr[i])
            return false;
    }

    return true;
}


template<typename T>
bool Array<T>::operator!=(const Array &right) const
{
    return !(*this == right);
}


template<typename T>
T &Array<T>::operator[](int subscript)
{
    if(subscript < 0 || subscript >= size)
        throw out_of_range("Subscript out of range.");

    return ptr[subscript];
}


template<typename T>
T Array<T>::operator[](int subscript) const
{
    if(subscript < 0 || subscript >= size)
        throw out_of_range("Subscript out of range.");

    return ptr[subscript];
}


template<typename T>
ostream &operator<<(ostream &output, const Array<T> &a)
{
    int i;

    for(i = 0; i < a.getSize(); i++)
    {
        output << setw(15) << a.ptr[i];

        if( (i + 1) % 4 == 0)
            output << endl;
    }

    if( (i + 1) % 4 == 0)
        output << endl;

    return output;
}


template<typename T>
istream &operator>>(istream &input, Array<T> &a)
{
    for(int i = 0; i < a.getSize(); i++)
        input >> a.ptr[i];

    return input;
}

template class Array<int>;
template class Array<float>;

template istream &operator>>(istream &, Array<float> &);
