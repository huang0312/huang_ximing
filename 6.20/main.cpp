#include <iostream>

using namespace std;

string multiple(int a, int b)
{
    if( b % a == 0)
        return "true";
    else
        return "false";
}

int main()
{
    int a= 0, b = 0;
    cout << "Please enter the number a an b: "<<endl;
    cin >> a>>b;
    cout << multiple(a,b)<<endl;

}
