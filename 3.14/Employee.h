#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include<iostream>
#include <string>

using namespace std;

class Employee
{
public:
    explicit Employee (string,string,int);

    void setname(string);
    string getname()const;

    void setsurname(string);
    string getsurname()const;

    void setmoney(int);
    int getmoney();
    int up();

    void displayMessage();

private:
    string Name;
    string SurName;
    int MPay;
    int next;
};

#endif // EMPLOYEE_H_INCLUDED
