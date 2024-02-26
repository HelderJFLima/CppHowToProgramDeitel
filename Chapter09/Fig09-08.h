// Fig. 9.8: Time.h
// Time class containing a constructor with default arguments.
// Member functions defined in Time.cpp


#ifndef TIME_H      // prevent multiple inclusions of header
#define TIME_H

class Time
{

public:

    Time(int = 0, int = 0, int = 0);

    void setTime(int, int, int);    // set functions

    void setHour(int);

    void setMinute(int);

    void setSecond(int);

    int getHour();                  // get functions

    int getMinute();

    int getSecond();

    void printUniversal();          // print time in universal-time format

    void printStandard();           // print time in standard-time format

private:

    int hour;                       // 0 - 23 (24-hour clock format)

    int minute;                     // 0 - 59

    int second;                     // 0 - 59

};

#endif
