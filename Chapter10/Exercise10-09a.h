// Exercise 10.9

// Time class definition.


#ifndef TIME_H
#define TIME_H


class Time
{

public:

    Time(int = 0, int = 0, int = 0);

    Time &setTime(int, int, int);   // setters

    Time &setHour(int);

    Time &setMinute(int);

    Time &setSecond(int);

    int getHour() const;            // getters

    int getMinute() const;

    int getSecond() const;

    void printUniversal() const;    // print time in universal-time format

    void printStandard() const;     // print time in standard-time format

private:

    static const int hourSeconds = 3600;

    static const int minuteSeconds = 60;

    int timeSeconds;

};


#endif
