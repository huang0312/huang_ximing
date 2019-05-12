#ifndef DATE_H
#define DATE_H


class Date
{
public:
    Date( int = 1, int = 1, int = 2000 );
    void print();
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    void setDate(int, int, int);

    int getMonth();
    int getDay();
    int getYear();
    void nextDay();

private:
    unsigned int month;
    unsigned int day;
    unsigned int year;
    bool leapYear();
    int monthDays();
};

#endif // DATE_H
