// Fig. 9.1: Time.h
// Time class definition.
// Member functions are defined in Time.cpp


#ifndef TIME_H      // prevent multiple inclusions of header
#define TIME_H

class Time
{

public:

    Time();

    void setTime(int, int, int);    // set hour, minute and second

    void printUniversal();          // print time in universal-time format

    void printStandard();           // print time in standard-time format

private:

    int hour;                       // 0 - 23 (24-hour clock format)

    int minute;                     // 0 - 59

    int second;                     // 0 - 59

};

#endif
