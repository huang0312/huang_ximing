#include <iostream>
#include <ctime>
#include <array>
#include <iomanip>
using namespace std;

int main()
{
    srand( static_cast<unsigned int>(time(0)));
    array<int,11>w={};
    int y = 0,x=0;
    for(size_t i = 0;i<36000;i++)
    {
        x=(1+rand()%6);
        y=(1+rand()%6);
        w[x+y-2]++;
    }

        for(int i = 0;i<11;i++)
            cout<<setw(5)<<i+2<<setw(15)<<w[i]<<endl;
    return 0;
}
