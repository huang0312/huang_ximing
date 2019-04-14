#include <iostream>
#include <iomanip>

using namespace std;
int celsius ( double F )
{
    double Celsius = 0;
    Celsius = (F - 32)/1.8;
    return Celsius;
}

int fahrenheit (double C )
{
    double Fahrenheit = 0;
    Fahrenheit = (C*1.8+32);
    return Fahrenheit;
}

int main()
{
    cout <<setw(15)<< "Celsius"<<setw(15)<<"Fahrenheit"<<endl;
    for(int i = 0, C =1, B = 1;i < 100;i++)
    {
        cout <<setw(15)<<  C  <<setw(15)<<fahrenheit (B)<<endl;
        C++;
        B++;
    }

    cout <<"*****************************************************************************************"<<endl;
    cout <<setw(15)<< "Fahrenheit"<<setw(15)<< "Celsius"<<endl;
    for(int i = 31,C = 32, B = 32;i < 212;i++)
    {
        cout <<setw(15)<<  C  <<setw(15)<<celsius ( B )<<endl;
        C++;
        B++;
    }
    return 0;
}
