#include <iostream>

using namespace std;

int integerPower(int base ,int exponent)
{
    int result = 1;
    for(int i = 1;i <= exponent;i++)
    {
        result *=base;
    }
    return result;
}

int main()
{
    int a = 0,b = 0;
    cout << "Please enter the base : ";
    cin >> a;
    cout <<"Please enter the exponent: ";
    cin >> b;
    cout << "result: "<<integerPower(a,b);
    return 0;
}
