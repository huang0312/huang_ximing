#include <iostream>

using namespace std;

int main()
{
    float a = 0, b = 0, sum = 0,product = 0,difference = 0,quotient = 0;
    cout << " Please enter two integer : " << endl;
    cin >> a >> b;
    sum = a + b;
    product = a * b;
    difference = a - b;
    quotient = a / b;
    cout << "sum is " << sum << endl;
    cout << " product is " << product << endl;
    cout << " difference is  " << difference << endl;
    cout << " quotient is " << quotient << endl;

    return 0;

}
