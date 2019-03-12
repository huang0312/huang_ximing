#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0 ,sum = 0 , Average = 0, product = 0;
    cout << "input three integer: " ;
    cin >> a >> b >> c;

    sum = a + b + c;
    cout << " sum is " << sum << endl;

    Average = ( a + b + c )/ 3 ;
    cout << " Average is " << Average << endl;

    product = a * b * c;
    cout << " product is " << product << endl;

    if ( a < b )
    if ( a < c )
        cout << " Small is " << a << endl;

    if ( b < a )
    if ( b < c )
        cout << " Small is " << b << endl;

    if ( c < a )
    if ( c < b )
        cout << " Small is " << c << endl;

    if ( a > b )
    if ( a > c )
        cout << " Largest is " << a << endl;

    if ( b > a )
    if ( b > c )
        cout << " Largest is " << b << endl;

    if (c > a )
    if (c > b )
        cout << " Largest is " << c << endl;


}

