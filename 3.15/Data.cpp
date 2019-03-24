#include <iostream>
#include "Date.h"

using namespace std;

Date::Date(int d,int m,int y)
{
    setD(d);
    setM(m);
    setY(y);
}

void Date::setD(int a)
{
    day=a;
}
int Date::getD()
{
    return day;
}

void Date::setM(int b)
{
    if (b<=12)
        month=b;
    else
    {
        month=1;
    }
}
int Date::getM()
{
    return month;
}

void Date::setY(int c)
{
    year=c;
}
int Date::getY()
{
    return year;
}

void Date::displayDate()
{
    cout<< "The date is: "<< getM()<<" / "<<getD()<<" / "<<getY()<<endl;
}
