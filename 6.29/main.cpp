#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int prime (int a)
{

   for (int i = 2;i < a/2;i++)
   {
       if (a%i==0)
        return 0;
    }
    return 1;
}

int prime2 (int a)
{

   for (int i = 2;i < sqrt(a);i++)
   {
       if (a%i==0)
        return 0;
    }
    return 1;
}




int main()
{
    cout << "Please enter an number: ";
    int a =0;
    cin >>a;

    cout << "Is the number prime? :"<<endl;
    if(prime(a)==1)
        cout << "Yes"<<endl;
    else
        cout <<"No"<<endl;






cout <<"----------------------------------------------------------------------------------------------------------------------------------------"<<endl;


    for (int i = 2;i <=10000;i ++)
    {
        if (prime(i)==1)
            cout << setw(10)<<i;
    }


cout <<"\n-------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
}
