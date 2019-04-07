#include <iostream>

using namespace std;

int main()
{
    unsigned int count = 1,n =0 , x = 0,s = 0;
    cin >> n;
    cin>>x;
    s = x;
    for ( ; count <= n-1 ; count++)
    {
        cin>>x;
        if (s > x)
            s=x;
    }
    cout << s;
}

