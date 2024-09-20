// Fig. 14.1: fig14_01.cpp

// Using function-template specializations.


#include <iostream>

using namespace std;


template< typename T >
void printArray(const T* const array, int count)
{
    for(int i = 0; i < count; i++)
        cout << array[i] << " ";

    cout << endl;
}


int main()
{
    const int aCount = 5;

    const int bCount = 7;

    const int cCount = 6;

    int a[aCount] = {1, 2, 3, 4, 5};

    double b[bCount] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};

    char c[cCount] = "HELLO";

    cout << endl;

    cout << "Array a contains:" << endl;

    printArray(a, aCount);

    cout << "Array b contains:" << endl;

    printArray(b, bCount);

    cout << "Array c contains:" << endl;

    printArray(c, cCount);

    cout << endl;
}
