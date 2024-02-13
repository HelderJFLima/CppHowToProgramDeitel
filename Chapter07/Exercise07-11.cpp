// Exercise 7.11

// This program sorts an array of 10 integers using bubble sort. The integers
// are randomly generated.


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void bubblesort(int[], const int);

void showarray(const int[], const int);


// Test the Bubble Sort algorithm

int main()
{
    int numbers[10];
    int i;

    srand( time(NULL) );

    for(i = 0; i < 10; i++)                 // Fill array with random numbers
        numbers[i] = rand() % 100;

    showarray(numbers, 10);

    cout << "\nBubble sorting..." << endl;

    bubblesort(numbers, 10);                // Bubble Sort

    showarray(numbers, 10);
}


// Sort array elements using Bubble Sort algorithm

void bubblesort(int array[], const int size)
{
    int aux;                // Auxiliary variable
    int i;                  // Array index
    bool finished = false;  // Finishing flag

    while(!finished)
    {
        finished = true;

        for(i = 0; i < size - 1; i++)
        {
            if( array[i] > array[i + 1] )
            {
                aux = array[i];

                array[i] = array[i + 1];

                array[i + 1] = aux;

                finished = false;
            }
        }
    }
}


// Show array elements

void showarray(const int array[], const int size)
{
    int i;

    cout << "\nArray elements:\n" << endl;

    for(i = 0; i < size; i++)
        cout << array[i] << " ";

    cout << endl;
}
