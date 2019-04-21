#include <iostream>

using namespace std;

inline int tripleByValue (const int count)
{
    int b =0;
    b =3*count;
    return b;
}

int trpleByReference (int &count)
{

    count =3*count;
    return count;
}

int main()
{
    int a = 0;
    cin>>a;
    cout << tripleByValue (a)<<endl;
    cout << trpleByReference (a)<<endl;
    return 0;
}
