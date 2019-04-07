#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    double a = 0, b = 0, c = 0,d=0,e=0,f=0;
    cout <<"Please enter three number: ";
    cin >> a >> b >> c;
    d=pow(a,2);
    e=pow(b,2);
    f=pow(c,2);
    if (( d + e == f )|(d + f == e)| (f + e ==d))
        cout << "These three numbers can form a triangle";
    else
        cout << "These three numbers cannot form a triangle";
}

