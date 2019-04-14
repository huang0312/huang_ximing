#include <iostream>

using namespace std;

string iseven (int a)

{
    if( a % 2==0)
        return "true";
    else
        return "false";
}

int main()
{
    for(int i =0;i <=10;i++)
    {
    int a = 0;
    cout << "Please enter an number to determine whether it is even: ";
    cin >> a;
    cout << iseven( a )<<endl;
    }
}
