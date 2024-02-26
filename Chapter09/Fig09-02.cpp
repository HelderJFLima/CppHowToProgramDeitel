// Fig. 9.2: Time.cpp
// Member-function definitions for class Time.


#include <iostream>
#include <iomanip>
#include <stdexcept>    // for invalid_argument exception class
#include "Time.h"

using namespace std;


// Time constructor initializes each data member to zero.

Time::Time()
{
    hour = minute = second = 0;
}


// set new Time value using universal time

void Time::setTime(int h, int m, int s)
{
    if( (h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60) )
    {
        hour = h;

        minute = m;

        second = s;
    }
    else
        throw invalid_argument("hour, minute and/or second was out of range");
}


// print Time in universal-time format (HH:MM:SS)

void Time::printUniversal()
{
    cout << setfill('0')
         << setw(2) << hour << ":"
         << setw(2) << minute << ":"
         << setw(2) << second;
}


// print Time in standard-time format (HH:MM:SS AM or PM)

void Time::printStandard()
{
    cout << ( (hour == 0 || hour == 12) ? 12 : hour % 12 ) << ":"
         << setfill('0')
         << setw(2) << minute << ":"
         << setw(2) << second
         << (hour < 12 ? " AM" : " PM");
}
