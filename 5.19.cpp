#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    for (double PI=4,sum1=0,n=1,b=0;n <=1000;n ++)
    {   b=pow(-1,n);
        sum1=4/(1+2*n)*b;
        PI = sum1 + PI;
        cout << PI<<endl;
    }

}
