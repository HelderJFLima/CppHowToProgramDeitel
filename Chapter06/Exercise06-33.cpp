// Exercise 6.33

// Program that simulates coin tossing. For each toss of the coin, the program
// print H (heads) or T (tails). The program toss the coin 100 times and count
// the number of times each side of the coin appears, the show the results.
// The program call a separate function 'flip' that takes no arguments and
// returns 0 for tails and 1 for heads.


#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int flip(void);


// simulate tossing a coin 100 times and count the number of times each side of
// the coin appears.

int main()
{
    int headsNum = 0;       // Number of heads
    int tailsNum = 0;       // Number of tails

    srand( time(0) );                   // Initialize random number generator

    cout << "\nHeads = H\nTails = T\n" << endl;

    for(int n = 1; n <= 100; n++)       // Flip coin 100x
    {
        if( flip() )                    // If heads
        {
            cout << "H";

            headsNum++;
        }
        else                            // If tails
        {
            cout << "T";

            tailsNum++;
        }

        if(n % 50 == 0)
            cout << endl;
    }

    cout << "\n\nTotal\n\nH: " << headsNum
         <<            "\nT: " << tailsNum
         << endl;
}


// simulate flipping a coin; return 0 for tails and 1 for heads.

int flip(void)
{
    return rand() % 2;
}
