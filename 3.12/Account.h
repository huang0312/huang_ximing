#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Account
{
public:
    explicit Account(int);

    void setMoney(int);
    int getMoney();

    void credit(int);
    void debit(int);
    void displayMessage();

private:
    int MONEY;
};
#endif
