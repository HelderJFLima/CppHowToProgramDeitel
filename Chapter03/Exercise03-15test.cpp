// Exercise 3.15
// Class called Date that includes three pieces of information as data members.


#include <iostream>
#include "Date.h"

using namespace std;


// Test program that demonstrates class Date's capabilities.

int main()
{
    Date date1(0, 1, 2001);
    Date date2(1, 2, 2002);
    Date date3(11, 3, 2003);
    Date date4(13, 4, 2004);

    date1.displayDate();
    date2.displayDate();
    date3.displayDate();
    date4.displayDate();

    date1.setMonth(2);
    date1.setDay(11);
    date1.setYear(2011);

    date2.setMonth(3);
    date2.setDay(12);
    date2.setYear(2012);

    date3.setMonth(4);
    date3.setDay(13);
    date3.setYear(2013);

    date4.setMonth(5);
    date4.setDay(14);
    date4.setYear(2014);

    cout << endl;

    date1.displayDate();
    date2.displayDate();
    date3.displayDate();
    date4.displayDate();
}
