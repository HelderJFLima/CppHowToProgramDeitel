// Fig. 10.15: Time.h
// Cascading member function calls.

// Time class definition.
// Member functions defined in Time.cpp


#ifndef TIME_H      // prevent multiple inclusions of header
#define TIME_H

class Time
{

public:

    Time(int = 0, int = 0, int = 0);

    Time &setTime(int, int, int);   // set functions

    Time &setHour(int);

    Time &setMinute(int);

    Time &setSecond(int);

    int getHour() const;            // get functions

    int getMinute() const;

    int getSecond() const;

    void printUniversal() const;    // print time in universal-time format

    void printStandard() const;     // print time in standard-time format

private:

    int hour;                       // 0 - 23 (24-hour clock format)

    int minute;                     // 0 - 59

    int second;                     // 0 - 59

};

#endif
