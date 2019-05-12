#include <iostream>
#include <ctime>

using namespace std;

class Date
{
public:
    explicit Date(int day,int month)
    {
        settime();
        setday(day);
        setmon(month);
    }
    explicit Date(int day)
    {
        settime();
        setday(day);
    }
    explicit Date()
    {
        settime();
    }
    void setday(int number)
    {
        if(0<number && number<=30)
        {
            day=number;
        }
        else
            cout<<"error"<<endl;
    }
    void  setmon(int number)
    {
        if(0<number && number<=12)
        {
            month=number;
        }
    }

    void settime()
    {
        nowtime=time(0);
        struct tm *Tptr=localtime(&nowtime);
        year=Tptr->tm_year+1900;
        month=Tptr->tm_mon+1;
        day=Tptr->tm_mday;
        hour=Tptr->tm_hour;
        minth=Tptr->tm_min;
        s=Tptr->tm_sec;
    }
    void outtime(void)
    {
        cout<<year<<"-"<<month<<"-"<<day<<" "<<hour<<":"<<minth<<":"<<s<<endl;
    }
private:
    time_t nowtime;
    int year;
    int month;
    int day;
    int hour;
    int minth;
    int s;
};

int main()
{
    Date mytime(1);
    mytime.outtime();

    return 0;
}
