#include <iostream>

#define  PI  3.14159

using namespace std;

int main()
{
     float  r = 0, d = 0, C = 0, S = 0;
     cout << " Please enter a radius : " << endl;
     cin >> r ;
     d = 2 * r;
     C = 2 * PI * r;
     S = PI * r * r;
     cout << " d = " << d << endl ;
     cout << " C = " << C << endl ;
     cout << " S = " << S << endl ;
}
