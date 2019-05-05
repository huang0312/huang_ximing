#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    unsigned int values[5]={2,4,6,8,10};
    int SIZE=5;

    unsigned int *vPtr=nullptr;

    for(int i = 0;i<SIZE;i++)
    cout << values[i]<<"  ";

    cout<<endl;

    vPtr = values;
    vPtr = &values[0];

    for(int i = 0;i<SIZE;i++)
        cout<<*(vPtr+i) <<"  ";

    cout << endl;

    vPtr = values;
    for(int i = 0;i<SIZE;i++)
        cout<<* (values+i)<<"  ";

    cout << endl;

    vPtr = values;
    for(int i = 0;i<SIZE;i++)
        cout<<vPtr[i]<<"  ";

    cout<<endl;

    cout<<values[4]<<setw(4)<<*(values+4)<<setw(4)<<vPtr[4]<<setw(4)<<*(vPtr+4)<<endl;

    cout<<endl;

    cout<<"vPtr+3 所引用的地址为"<<vPtr<<endl;
    cout<<"该位置储存的值为："<<*(vPtr+3)<<endl;

    vPtr = &values[4];
    vPtr-=4;
    cout<<"执行vPtr-=4之后vPtr引用的地址为"<<vPtr-4<<endl;
    cout<<"存储值为： "<<*vPtr;

    return 0;

}
