// Exercise 4.25
// Write a program that reads in the size of the side of a square then prints
// a hollow square of that size out of asterisks and blanks. Your program should
// work for squares of all side sizes between 1 and 20.


#include <iostream>
#include <string>

using namespace std;


// Program that reads in the size of the side of a square then prints a hollow
// square of that size out of asterisks and blanks.

int main()
{
    int i, j, sideSize;

    cout << "\nEnter the square side size (between 1 to 20): ";
    cin >> sideSize;
    cout << endl;

    if(sideSize < 1)            // Check the validity of the side size.

        sideSize = 1;

    else if(sideSize > 20)
        sideSize = 20;

    if(sideSize == 1)           // Build the square.

        cout << "*";

    else if(sideSize == 2)

        cout << "**\n**";

    else
    {
        i = sideSize;

        while(i--)
            cout << "*";

        cout << endl;

        i = sideSize - 2;

        while(i--)
        {
            j = sideSize - 2;

            cout << "*";

            while(j--)
                cout << " ";

            cout << "*" << endl;
        }

        i = sideSize;

        while(i--)
            cout << "*";
    }

    cout << endl;
}
