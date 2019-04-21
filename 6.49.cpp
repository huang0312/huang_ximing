#include <iostream>
#define pi 3.1415926

using namespace std;

inline double circleArea(const double r)
{
    double S;
    S = r*r*pi;
    return S ;
}
int main()
{
   double r = 0;
   cout << "Please enter radius of the circle: ";
   cin >> r;
   cout <<"The area of the circle is: "<< circleArea(r);
}
