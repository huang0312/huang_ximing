#include <iostream>

using namespace std;

int main()
{
    double a = 0, b = 0, c = 0;
    cout <<"Please enter three number: ";\
    cin >> a >> b >> c;
    if(( a + b > c) & ( a + c > b) & ( b + c > a))
        cout << "These three numbers can form a triangle";
    else
        cout << "These three numbers cannot form a triangle";
}
