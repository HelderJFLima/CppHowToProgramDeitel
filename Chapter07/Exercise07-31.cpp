// Exercise 7.31

// This program sorts an array of 10 integers using a recursive version of
// selection sort algorithm. The integers are randomly generated.


#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void selectionSort(int[], int);

void showArray(const int[], const int);

void swapElements(int, int, int[]);


// Test the Selection Sort algorithm

int main()
{
    int numbers[10];
    int i;

    srand( time(NULL) );

    for(i = 0; i < 10; i++)                 // Fill array with random numbers
        numbers[i] = rand() % 100;

    showArray(numbers, 10);

    cout << "\nSelection sorting..." << endl;

    selectionSort(numbers, 10);             // Selection Sort

    showArray(numbers, 10);
}


// Sort array elements using Selection Sort algorithm

void selectionSort(int array[], int size)
{
    int minimum = 0;        // Position of smallest value

    for(int i = 1; i < size; i++)           // Find the smallest value
    {
        if( array[i] < array[minimum] )
            minimum = i;
    }

    if(minimum != 0)
        swapElements(0, minimum, array);    // Swap elements

    if(size > 2)
        selectionSort(&array[1], size - 1); // Recursion step
}


// Show array elements

void showArray(const int array[], const int size)
{
    cout << "\nArray elements:\n" << endl;

    for(int i = 0; i < size; i++)
        cout << array[i] << " ";

    cout << endl;
}


// Swap two elements of an array

void swapElements(int a, int b, int array[])
{
    int aux;

    aux = array[a];

    array[a] = array[b];

    array[b] = aux;
}
