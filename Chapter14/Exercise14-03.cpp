// Exercise 14.3

// (Selection Sort Function Template)
// Write a function template selectionSort based on Fig. 8.13. Write a driver
// program that inputs, sorts and outputs an int array and a float array.


#include <iomanip>
#include <iostream>

using namespace std;


template<typename T>
void selectionSort(T* const, const int);

template<typename T>
void swap(T* const, T* const);


int main()
{
    const int arraySize = 10;

    int intArray[] = {267, 368, 368, 18, 477, 451, 264, 204, 8, 168};

    float floatArray[] = {38.0, 55.7, 0.8, 62.1, 9.4,
                          87.4, 50.8, 38.8, 56.6, 25.2};

    cout << "\nint array in original order:\n" << endl;

    for(int i = 0; i < arraySize; i++)
        cout << setw(4) << intArray[i] << endl;

    cout << fixed << setprecision(1);

    cout << "\n\nfloat array in original order:\n" << endl;

    for(int i = 0; i < arraySize; i++)
        cout << setw(4) << floatArray[i] << endl;

    cout << "\n\nsorting int array..." << endl;

    selectionSort(intArray, arraySize);

    cout << "\nsorting float array..." << endl;

    selectionSort(floatArray, arraySize);

    cout << "\n\nsorted int array:\n" << endl;

    for(int i = 0; i < arraySize; i++)
        cout << setw(4) << intArray[i] << endl;

    cout << "\n\nsorted float array:\n" << endl;

    for(int i = 0; i < arraySize; i++)
        cout << setw(4) << floatArray[i] << endl;
}


template<typename T>
void selectionSort(T* const array, const int size)
{
    int smallest;

    for(int i = 0; i < size - 1; i++)
    {
        smallest = i;

        for(int index = i + 1; index < size; index++)
        {
            if( array[index] < array[smallest] )
                smallest = index;
        }

        swap( &array[i], &array[smallest] );
    }
}


template<typename T>
void swap(T* const element1Ptr, T* const element2Ptr)
{
    T hold = *element1Ptr;

    *element1Ptr = *element2Ptr;

    *element2Ptr = hold;
}
