#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    cout << "Please enter an number :";
    cin >>a;
    while (a!=0)
    {
        int b =0;
        b=a%10;
        a=a/10;
        cout <<b;
    }
    return 0;
}

