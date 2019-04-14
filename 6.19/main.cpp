#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int hypotenuse(double a, double b)
{
    double c = 0, d = 0 ,e = 2;
    c = pow(a,2);
    d = pow(b,2);
    e = sqrt( c + d);
    return e;
}

int main()
{
    cout <<"Èý½ÇÐÎ"<<"    "<<"±ß1"<<"    "<<"±ß2"<<"    "<<"Ð±±ß"<<endl;
    cout <<"  1"<<"       "<<"3.0"<<"    "<<"4.0"<<"    "<<hypotenuse(3.0,4.0)<<endl;
    cout <<"  2"<<"       "<<"5.0"<<"    "<<"12.0"<<"   "<<hypotenuse(5.0,12.0)<<endl;
    cout <<"  3"<<"       "<<"8.0"<<"    "<<"15.0"<<"   "<<hypotenuse(8.0,15.0)<<endl;
}
