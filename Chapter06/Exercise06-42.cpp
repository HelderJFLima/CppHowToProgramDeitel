// Exercise 6.42

// Program that implements a recursive main function.


#include <iostream>

using namespace std;


// Recursive main

int main()
{
    static int counter = 1;

    cout << counter << endl;

    counter++;

    if(counter == 10)
        return 0;

    main();
}
