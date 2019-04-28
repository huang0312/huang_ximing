#include <iostream>
#include <array>
#include <cstddef>
#include <iomanip>

using namespace std;

int main()
{
//a
    cout<<"7.8-a"<<endl;
    array<size_t,10> alphabet={1,2,3,4,5,6,7,8,9,10};
    cout<<alphabet[6]<<"\n"<<endl;

//b
    cout<<"7.8-b"<<endl;
    array<size_t,10> grades={0};
    int i = 0;
    cin>>i;
    grades[4]=i;
    cout<<"grades[4]="<<grades[4]<<"\n"<<endl;

//c
    cout<<"7.8-c"<<endl;
    array<size_t,5> values;
    for(size_t i = 0;i<values.size();i++)
    {
        values[i]=8;
        cout<<values[i]<<"\n"<<endl;
    }

//d
    cout<<"7.8-d"<<endl;
    const int  x=100;
    array<size_t,x>temperatures;
    int sum = 0;
    for(size_t i = 0;i<temperatures.size();i++)
    {
        temperatures[i]=i;
        sum =sum+ temperatures[i];
    }
   cout <<sum<<"\n"<<endl;

//e
    cout<<"7.8-e"<<endl;
    array<double,11>a={0};
    array<double,34>b={0};
    for(double i = 0;i<a.size();i++)
    {
        a[i]=i;
        b[i]=a[i];
        cout << b[i]<<setw(5);
    }
    for(double i=11;i<b.size();i++)
    {
        cout<<b[i]<<setw(5);
    }

//f
    cout<<"\n7.8-f"<<endl;
    array<float,99>w={};

    for(double i = 0;i<w.size();i++)
    {
        w[i]=i;
        w[i]+=100;
    }

    float y = 0;
    y = w[0];
    for(float i = 1;i<w.size();i++)
    {
        if (y< w[i])
        {
            y= w[i];
        }
    }

    int z = 0;
    z = w[0];
    for(float i = 1;i<w.size();i++)
    {
        if(z>w[i])
        {
            z=w[i];
        }
    }
    cout<<"max="<<y<<endl;
    cout<<"min="<<z<<endl;

}
