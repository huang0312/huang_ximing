#include <iostream>

using namespace std;

int main()
{
    for( unsigned int count = 1;count <=10;++count)
    {
        if (count ==5)
            count=count+1;
        cout << count << "";
    }
    cout << "\nUsed continue to skip printing5"<<endl;
}
