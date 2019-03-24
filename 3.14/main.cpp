#include<iostream>
#include"Employee.h"

using namespace std;

int main()
{
    cout << "Your month pay is :"<< endl;
    int Ypay1, Ypay2;
    cin >> Ypay1 >> Ypay2;
    Employee one("Huang","ximing",Ypay1);
    Employee two("Hu.","xueting",Ypay2);


    one.displayMessage();
    two.displayMessage();
}
