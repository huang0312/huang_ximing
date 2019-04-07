#include <iostream>

using namespace std;

int main()
{
    double r = 0, d = 0, C = 0, S = 0,PI = 3.14159;
    cout << "Please enter the radius of the circle: ";
    cin >> r;
    d = 2*r*PI;
    C = 2*r*PI;
    S = r*r*PI;
    cout <<"The diameter of this circle is:" << d << endl;
    cout <<"The circumference of this circle is:" << C << endl;
    cout <<"The area of this circle is:" << S << endl;
}
