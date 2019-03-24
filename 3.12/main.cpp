#include<iostream>
#include"Account.h"

int main()
{
    int b,c;
    std::cout<<"abc"<< endl;
    cin >> b >> c;
    Account one(b);
    Account two(c);
    std::cout << ".... " <<endl;

    int a;
    cin >>  a ;
    one.credit(a);
    two.debit(a);
    one.displayMessage();
    two.displayMessage();

    return 0;
}
