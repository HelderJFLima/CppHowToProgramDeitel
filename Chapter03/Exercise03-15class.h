// Exercise 3.15
// Class called Date that includes three pieces of information as data members.


class Date
{

public:

    Date(int month, int day, int year);

    void setMonth(int month);

    int getMonth();

    void setDay(int day);

    int getDay();

    void setYear(int year);

    int getYear();

    void displayDate();

private:

    int dateMonth;

    int dateDay;

    int dateYear;

};
