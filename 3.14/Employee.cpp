#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

Employee::Employee(string name,string surname, int mpay)
{
   setname(name);
   setsurname(surname);
   setmoney(mpay);
}
void Employee::setname(string name)
{
    Name = name;
}
string Employee::getname()const
{
    return Name;
}

void Employee::setsurname(string surname)
{
    SurName = surname;
}
string Employee::getsurname()const
{
    return SurName;
}

void Employee::setmoney(int a)
{
    MPay=a;
    next=a;
}

int Employee::getmoney()

{
    return MPay*12;
}
int Employee::up()
{
    return next*13.2;
}

void Employee::displayMessage()
{
    cout << "Your name is: " <<getname()<< getsurname() << endl;
    cout << "Your yearly pay is: " << getmoney() << endl;
    cout << "Your annual salary in one year's time is: "<<up()<<endl;
}
