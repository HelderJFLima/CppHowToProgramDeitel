// Exercise 5.19
// Calculate the value of pi from an infinite series.


#include <iomanip>
#include <iostream>

using namespace std;


// Program that print a table that shows the approximate value of pi after each
// of the first 1000 terms of the series.

int main()
{
    int signal = -1;
    double pi = 0;

    cout << "terms" << setw(14) << "pi value\n" << endl;

    for(int counter = 1; counter <= 1000; counter++)
    {
        signal = -signal;

        pi += signal * 4.0 / (2 * counter - 1);

        cout << setw(5) << counter
             << setw(17) << setprecision(10) << fixed << pi
             << endl;
    }

    cout << endl;
}
