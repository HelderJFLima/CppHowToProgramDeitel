// Exercise 3.15
// Class called Date that includes three pieces of information as data members.


#include <iostream>
#include "Date.h"

using namespace std;


// Constructor

Date::Date(int month, int day, int year)
{
    setMonth(month);

    setDay(day);

    setYear(year);
}


// Set month.

void Date::setMonth(int month)
{
    if(month >= 1 && month <= 12)
        dateMonth = month;

    else
    {
        dateMonth = 1;

        cout << "Invalid month value!\n\nSetting month to 1.\n"
             << endl;
    }
}


// Get month.

int Date::getMonth()
{
    return dateMonth;
}


// Set day.

void Date::setDay(int day)
{
    dateDay = day;
}


// Get day.

int Date::getDay()
{
    return dateDay;
}


// Set year.

void Date::setYear(int year)
{
    dateYear = year;
}


// Get year.

int Date::getYear()
{
    return dateYear;
}


// Display the date in the form "mm/dd/yyyy".

void Date::displayDate()
{
    cout << "date: " << getMonth()
         << "/" << getDay()
         << "/" << getYear() << endl;
}
