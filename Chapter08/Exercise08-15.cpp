// Exercise 8.15

// This program sorts an array of 10 integers using the quick sort algorithm.
// The integers are randomly generated.


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int partition(int* const, const int, const int);

void quickSort(int* const, const int, const int);

void showArray(const int[], const int);

void swap(int*const, int*const);


// Test the Quick Sort algorithm

int main()
{
    int numbers[10];
    int i;

    srand( time(NULL) );

    for(i = 0; i < 10; i++)                 // Fill array with random numbers
        numbers[i] = rand() % 100;

    showArray(numbers, 10);

    cout << "\n\nQuick sorting...\n" << endl;

    quickSort(numbers, 0, 9);               // Quick Sort

    showArray(numbers, 10);
}


// Partition an array for Quick Sort

int partition(int *const array, const int start, const int end)
{
    int a = 0;                  // Indexes
    int b = end - start;
    int position = a;           // Final position
    int *arr = &array[start];

    while(a < b)
    {
        while( arr[a] < arr[b] )    // Comes from the right side
            b--;

        if(a < b)
        {
            swap( &arr[a++], &arr[b] );

            position = b;
        }

        while( arr[b] >= arr[a] )   // Comes from the left side
            a++;

        if(a < b)
        {
            swap( &arr[a], &arr[b--] );

            position = a;
        }
    }

    return start + position;
}


// Sort array elements using Quick Sort algorithm

void quickSort(int *const array, const int start, const int end)
{
    int pivot;

    if(start == end)
        return;

    pivot = partition(array, start, end);

    if(pivot > start && pivot < end)
    {
        quickSort(array, start, pivot - 1);

        quickSort(array, pivot + 1, end);
    }
    else if(pivot == start)

        quickSort(array, start + 1, end);

    else
        quickSort(array, start, end - 1);
}


// Show array elements

void showArray(const int array[], const int size)
{
    cout << "\nArray elements:\n" << endl;

    for(int i = 0; i < size; i++)
        cout << array[i] << " ";

    cout << endl;
}


// Swap two values between two variables

void swap(int *const a, int *const b)
{
    int aux;

    aux = *a;

    *a = *b;

    *b = aux;
}
