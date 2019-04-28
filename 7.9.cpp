#include <iostream>
#include <array>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{

    array<array<int,3>,2>t={1,2,3,4,5,6};

    cout<<"7.9-a"<<endl;
    cout<<"a.2 rows"<<endl;

    cout<<"7.9-b"<<endl;
    cout<<"a.3 columns"<<endl;

    cout<<"7.9-c"<<endl;
    cout<<"a has six elements"<<endl;

    cout<<"7.9-d"<<endl;
    cout<<"1,2"<<endl;

    cout<<"7.9-e"<<endl;
    cout<<"2,4,6"<<endl;

    cout<<"7.9-f"<<endl;
    t[0][1]=0;
    cout<<t[0][1]<<endl;

    cout<<"7.9-g"<<endl;
    memset(&t[0],0,6*sizeof(t));
    for(auto &out:t)
    {
        for(auto &c:out)
        cout<<c<<" ";
    }
    cout <<endl;

    cout<<"7.9-h"<<endl;
    for(int i = 1;i<=2;i++)
    {
        for(int x = 1;x<=3;x++)
        {
            t[i-1][x-1]=0;
            cout<<t[i-1][x-1]<<" ";
        }
    }
    cout <<endl;

    cout<<"7.9-i"<<endl;
    for(auto &x:t)
    {
        for(auto &p:x)
        {
            p=0;
            cout<<p<<" ";
        }
    }
    cout <<endl;

    cout<<"7.9-j"<<endl;
    int a = 0;
    for (auto &x:t)
    {
        for(auto &p:x)
        {
            cout<<"Please enter the number: ";
            cin >> a;
            p=a;
            cout<<p<<endl;
        }
    }

    cout<<"7.9-l"<<endl;
    int min = 0;
    min=t[0][0];
    for (auto &x:t)
    {
        for(auto &p:x)
        {
            if (p<min)
                min=p;
        }
    }
    cout<<"min = "<<min<<endl;

    cout<<"7.9-m"<<endl;
    for (int i =0;i<3;i++)
    {
        cout <<t[0][i]<<"  ";
    }
    cout<<endl;

    cout<<"7.9-n"<<endl;
    int sum=0;
    for (int i=0;i<2;i++)
    {
        sum+=t[i][1];
    }
    cout<<sum<<endl;

    cout<<"7.9-o"<<endl;
    cout <<setw(5)<<"0"<<setw(5)<<"1"<<setw(5)<<"2"<<endl;
    cout<<"0"<<setw(5);
    for(int i=0;i<3;i++)
    {
        cout<<t[0][i]<<setw(5);
    }
    cout<<"\n1"<<setw(5);
    for(int i=0;i<3;i++)
    {
        cout<<t[1][i]<<setw(5);
    }

    return 0;

}
