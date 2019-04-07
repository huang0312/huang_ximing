#include <iostream>

using namespace std;

int main()
{
    unsigned int count=1,n=0,sum=0;
    cin>>n;
    for ( int x=0;count<=n ;count++ )
    {
    cin>>x;
    sum =sum+x;
    }
    cout<<sum;
}
