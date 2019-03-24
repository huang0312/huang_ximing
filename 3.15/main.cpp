#include<iostream>
#include"Date.h"

using namespace std;

int main()
{
    cout<<"please enter month,day and year: ";
    int a,b,c;
    cin>> a >> b >> c;

    Date displayDate(b,a,c);

    displayDate.displayDate();

}
