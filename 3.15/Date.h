#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED


#include <iostream>


class Date
{
public:
    explicit Date(int,int,int);

    void setM(int);
    int getM();

    void setD(int);
    int getD();

    void setY(int);
    int getY();

    void displayDate();

private:
    int month;
    int day;
    int year;
};

#endif // DATE_H_INCLUDED
