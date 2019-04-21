#include <iostream>

using namespace std;

int qualityPoints (int a)
{
    int b=0;
    if(90<=a)
        b=4;
    else if(80<=a)
        b=3;
    else if(70<=a)
        b=2;
    else if(60<=a)
        b=1;
    else if(a<60)
        b=0;
    return b;

}
int main()
{
    int a = 0;
    cout << "Please enter the student's usual score: ";
    cin >> a;
    cout << "The student's gpa is : "<<qualityPoints(a);
}
