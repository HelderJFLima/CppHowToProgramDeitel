// Fig. 9.9: Time.cpp
// Member-function definitions for class Time.


#include <iostream>
#include <iomanip>
#include <stdexcept>    // for invalid_argument exception class
#include "Time.h"

using namespace std;


// Time constructor initializes each data member to zero.

Time::Time(int hour, int minute, int second)
{
    setTime(hour, minute, second);
}


// set new Time value using universal time

void Time::setTime(int h, int m, int s)
{
    setHour(h);

    setMinute(m);

    setSecond(s);
}


// set hour value

void Time::setHour(int h)
{
    if(h >= 0 && h < 24)

        hour = h;

    else
        throw invalid_argument("hour must be 0-23");
}


// set minute value

void Time::setMinute(int m)
{
    if(m >= 0 && m < 60)

        minute = m;

    else
        throw invalid_argument("minute must be 0-59");
}


// set second value

void Time::setSecond(int s)
{
    if(s >= 0 && s < 60)

        second = s;

    else
        throw invalid_argument("second must be 0-59");
}


// return hour value

int Time::getHour()
{
    return hour;
}


// return minute value

int Time::getMinute()
{
    return minute;
}


// return second value

int Time::getSecond()
{
    return second;
}


// print Time in universal-time format (HH:MM:SS)

void Time::printUniversal()
{
    cout << setfill('0')
         << setw(2) << getHour() << ":"
         << setw(2) << getMinute() << ":"
         << setw(2) << getSecond();
}


// print Time in standard-time format (HH:MM:SS AM or PM)

void Time::printStandard()
{
    cout << ( (getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12 ) << ":"
         << setfill('0')
         << setw(2) << getMinute() << ":"
         << setw(2) << getSecond()
         << (hour < 12 ? " AM" : " PM");
}
