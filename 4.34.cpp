#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
{
    int n = 0, a = 0;
    cout <<" Please enter n :";
    cin >> n ;
    a = n;
    while ( n > 1 )
    {
       n--;
       if ( n > 0)
       a = a*n;
    }
    cout << "The a =: "<< a<<endl;
}

{
    double n = 0,m = 0,p = 0,q = 0,e = 0;
    cout << "Please enter n :";
    cin >> n;

    while ( n > 0 )
    {
       m=n;
       q=n-1;

       while ( q > 0 )//1/nµÄ½×³Ë
       {
            if ( q > 0)
            m=m*q;
            p=1/m;
            q--;
       }
       e=e+p;
       n--;
    }
    cout <<"The b =" << e <<endl;

}


{
    double n = 0,m = 0,p = 0,q = 0,ex = 0,x = 0,b = 0;
    cout << "Please enter n :";
    cin >> n >> x;

    while ( n > 0 )
    {
       m=n;
       q=n-1;
       b = pow(x,n);

       while ( q > 0 )//1/nµÄ½×³Ë
       {
            if ( q > 0)
            m=m*q;
            p=b/m;
            q--;
       }
       ex=ex+p;
       n--;
    }
    cout <<"The c =" << ex <<endl;
}
}

