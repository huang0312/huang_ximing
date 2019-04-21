#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand( static_cast<unsigned int>(time(0)));
    unsigned int a1=0;
    unsigned int a2=0;
    for ( unsigned int roll = 1; roll <=100;roll++)
    {
        unsigned int a = 0+rand()%2;
        switch (a)
        {
        case 1:
            a1++;
            break;
        case 0:
            a2++;
            break;
        default:
            cout <<"over";
        }
    }
    cout << "Head"<<setw(15)<<a1<<endl;
    cout << "Tail"<<setw(15)<<a2<<endl;

    return 0;
}
