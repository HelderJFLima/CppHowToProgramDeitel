// Exercise 6.25

// This program uses a function that takes the time as three integer arguments
// (hours, minutes and seconds) and returns the number of seconds since the
// last time the clock "struck 12". This function is then used to calculate the
// amount of time in seconds between two times, both of which are within one
// 12-hour cycle of the clock.


#include <iostream>

using namespace std;

int toseconds(int h, int m, int s);


// calculate the amount of time in seconds between two times.

int main()
{
    int hour1, hour2;
    int minute1, minute2;
    int second1, second2;

    hour1 = 1;
    minute1 = 27;
    second1 = 5;
    hour2 = 3;
    minute2 = 25;
    second2 = 47;

    cout << "\ntime 1: " << hour1 << ":"
                         << minute1 << ":"
                         << second1
         << "\ntime 2: " << hour2 << ":"
                         << minute2 << ":"
                         << second2
         << "\n\ntime elapsed between time 1 and time 2: "
         << toseconds(hour2, minute2, second2) -
            toseconds(hour1, minute1, second1)
         << " seconds"
         << endl;
}


// take the time as three integer arguments and returns the number of seconds
// since the last time the clock "struck 12"; return -1 if there is an error
// in the time format.

int toseconds(int h, int m, int s)
{
    int totalsec = 0;

    if(h > 12 || h <= 0 || m > 59 || m < 0 || s > 59 || s < 0)  // Time format
        return -1;

    totalsec += (s + 60 * m);

    if(h != 12)
        totalsec += 3600 * h;

    return totalsec;
}
