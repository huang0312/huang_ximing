#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand( static_cast<unsigned int>(time(0)));
    unsigned int x = 1+rand()%1000;
    unsigned int a = 0;
    cout <<"I have a number between 1 an 1000\n"<<"Can you guess my number?\n"<<"Please type your first guess"<<endl;
    cin >> a;

    if(a==x)
        {cout <<"Excellent ! You guess the number!\n"<<"Would you like to play again (y or n)?";
        }
    else if (a<x)
        {cout <<"Too low.Try again.";
        }
    else if(a>x)
        {cout <<"Too high.Try again.";
        }

    for (int i=0;1;i++)
    {
        cin >>a;
    if(a==x)
        {
            if (i==9)
            {
                cout <<"Ahah! You know the secret!";
            }
            if (i<9)
            {
                cout <<"Either you know the secret or you got lucky!"<<endl;
            }
            if (i>9)
            {
                cout <<"You should be able to do better!";
            }
            cout <<"Excellent ! You guess the number!\n"<<"Would you like to play again (y or n)?";
            break;
        }
    else if (a<x)
        {cout <<"Too low.Try again.";
        }
    else if(a>x)
        {cout <<"Too high.Try again.";
        }
    }


    return 0;
}
