#include <iostream>

using namespace std;

 void zero(long long *);
 int addlAndSum(int *);

int main()
{
    long long a[1]={1};
    int b[1]={2};
    zero(a);
    addlAndSum(b);
    return 0;
}

void zero(long long *bigIntegers)
{
    cout<< bigIntegers[0]<<endl;
}

int addlAndSum(int *oneTooSmall)
{
    cout<<oneTooSmall[0];
    return 0;
}
