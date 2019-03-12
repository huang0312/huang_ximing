#include <iostream>

using namespace std2;

int main()
{
    int a =0 , b = 0;
    cout << "Enter two integer to compare: ";
    cin >> a >> b;
    if ( a == b )
        cout  << " These numbers are equal" << endl;

    if ( a > b )
        cout << a << " is large " << endl;

    if ( a < b )
        cout << b << " is large "<< endl;

}
