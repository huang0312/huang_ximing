#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(int money)
{
    setMoney(money);
}

void Account::setMoney(int money)
{
    if ( money >=0 )
        MONEY = money;
    else
        {
            cout << "�˻�����Ϊ0��";
            MONEY = 0;
        }
}
       int Account::getMoney()
        {
            return MONEY;
        }

void Account::credit(int AddMoney)
    {
        if ( AddMoney >= 0)
        MONEY +=AddMoney;
    else
        cout << "��ȡ������>0:\n";
    }

void Account::debit(int takemoney)
    {
        if ( takemoney > 0 )
            MONEY-=takemoney;
        else
            cout << "��ȡ���Ϊ����>0\n";
    }
void Account::displayMessage()
        {
            cout << "��ǰ��" << getMoney() <<endl;
}
