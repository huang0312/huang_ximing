#include <iostream>

using namespace std;

int main()
{
    long  valuel = 20000;
    long value2;
    long  *longPtr=nullptr;
    longPtr =&valuel;
    cout<<*longPtr<<endl;
    value2 = *longPtr;
    cout<<value2<<endl;
    cout<<&valuel<<endl;
    cout<<longPtr<<endl;
    cout<<"ÏàÍ¬"<<endl;

    return 0;
}
