#include <iostream>

using namespace std;

int minimum(double b)
{
    double min = 0;
    min = b;
    for (int i = 1;i<3;i++)
    {
        int c = 0;
        cout<<"Please enter an number: ";
        cin >> c;
        if (b>c)
        min =c;
        else
        min = b;
    }
    return min;
}

int main()
{
    int a = 0;
    cout<<"Please enter an number: ";
    cin >> a;
    cout <<minimum(a)<<endl;

    return 0;
}
