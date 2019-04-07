#include <iostream>

using namespace std;

int main()
{
    unsigned int count=1,sum=0;
    for(int x = 1; count <=15;count++)
    {
        if( x%2==1 )
        {
        sum = sum + x;
        }
        x++;
    }
    cout << sum;
}

