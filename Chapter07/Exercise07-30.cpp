// Exercise 7.30

// This program sorts an array of 10 integers using bucket sort. The integers
// are randomly generated.


#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void bucketSort(int[], int);

void insertInArray(int[], int);

int maximum(const int[], int);

void showArray(const int[], const int);


// Test the Bucket Sort algorithm

int main()
{
    int numbers[10];
    int i;

    srand( time(NULL) );

    for(i = 0; i < 10; i++)                 // Fill array with random numbers
        numbers[i] = rand() % 1000 + 1;

    showArray(numbers, 10);

    cout << "\nBucket sorting..." << endl;

    bucketSort(numbers, 10);                // Bucket Sort

    showArray(numbers, 10);
}


// Sort array elements using Bucket Sort algorithm

void bucketSort(int array[], const int size)
{
    int counter = 1;
    int i, j, k;
    int power10 = 1;        // Power of 10
    int row;                // Row of bucket
    int total;              // Total of iterations
    int bucket[10][50];

    for(j = 0; j < 10; j++)             // Initialize the bucket
    {
        for(k = 0; k < 50; k++)
            bucket[j][k] = 0;
    }

                                        // Find the number of iterations needed
    total = static_cast<int>( ceil( log10( maximum(array, size) ) ) );

    while(counter <= total)
    {
        for(i = 0; i < size; i++)           // Distribution pass
        {
            row = (array[i] / power10) % 10;        // Determine the row

            insertInArray( bucket[row], array[i] ); // Copy element to row
        }

        i = 0;

        for(j = 0; j < 10; j++)             // Gathering pass
        {
            k = 0;

            while(bucket[j][k])                     // While element is not zero
            {
                array[i] = bucket[j][k];

                i++, k++;
            }
        }

        for(j = 0; j < 10; j++)             // Clear the bucket
        {
            for(k = 0; k < size; k++)
                bucket[j][k] = 0;
        }

        power10 *= 10;

        counter++;
    }
}


// Insert a number into an array in the first free position

void insertInArray(int array[], int number)
{
    int i = 0;

    while( array[i] )   // Jump to first free position
        i++;

    array[i] = number;
}


// Find the maximum value of an array

int maximum(const int array[], int size)
{
    int maximum = 0;

    for(int i = 0; i < size; i++)
    {
        if(array[i] > maximum)
            maximum = array[i];
    }

    return maximum;
}


// Show array elements

void showArray(const int array[], const int size)
{
    cout << "\nArray elements:\n" << endl;

    for(int i = 0; i < size; i++)
        cout << array[i] << " ";

    cout << endl;
}
