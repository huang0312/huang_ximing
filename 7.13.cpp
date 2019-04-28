#include <iostream>
#include <array>
#include<ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand( static_cast<unsigned int>(time(0)));
    array<int,20>a={0};
    int y = 0;
    for(int i = 0;i<20;i++)
    {
        int prep=1;
        y=(10+rand()%90);
        for(int x =0;x<20;x++)
        {
            if(y==a[x])
                {
                    prep=0;
                }
        }
        if(prep==1)
        {
            a[i]=y;
        }
        cout<<a[i]<<endl;
    }
    return 0;
}

