// Exercise 10.9

// Time class member-function definitions.


#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"

using namespace std;


// Time constructor initializes each data member to zero.

Time::Time(int hour, int minute, int second)
          :timeSeconds(0)
{
    if(hour != 0 || minute != 0 || second != 0)
        setTime(hour, minute, second);
}


// set new Time value using universal time

Time &Time::setTime(int h, int m, int s)
{
    setHour(h);

    setMinute(m);

    setSecond(s);

    return *this;
}


// set hour value

Time &Time::setHour(int h)
{
    if(h >= 0 && h < 24)

        timeSeconds = timeSeconds % hourSeconds + h * hourSeconds;

    else
        throw invalid_argument("hour must be 0-23");

    return *this;
}


// set minute value

Time &Time::setMinute(int m)
{
    if(m >= 0 && m < 60)

        timeSeconds = hourSeconds * getHour() + minuteSeconds * m + getSecond();

    else
        throw invalid_argument("minute must be 0-59");

    return *this;
}


// set second value

Time &Time::setSecond(int s)
{
    if(s >= 0 && s < 60)

        timeSeconds = (timeSeconds / minuteSeconds) * minuteSeconds + s;

    else
        throw invalid_argument("second must be 0-59");

    return *this;
}


// return hour value

int Time::getHour() const
{
    return timeSeconds / hourSeconds;
}


// return minute value

int Time::getMinute() const
{
    int hour = getHour();

    return (timeSeconds - hour * hourSeconds) / minuteSeconds;
}


// return second value

int Time::getSecond() const
{
    return timeSeconds % minuteSeconds;
}


// print Time in universal-time format (HH:MM:SS)

void Time::printUniversal() const
{
    cout << setfill('0')
         << setw(2) << getHour() << ":"
         << setw(2) << getMinute() << ":"
         << setw(2) << getSecond();
}


// print Time in standard-time format (HH:MM:SS AM or PM)

void Time::printStandard() const
{
    cout << ( (getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12 ) << ":"
         << setfill('0')
         << setw(2) << getMinute() << ":"
         << setw(2) << getSecond()
         << (getHour() < 12 ? " AM" : " PM");
}
