#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

int main()
{
    cout <<"7.11-a"<<endl;
    array<unsigned int,10>counts={};
    for(unsigned int i = 0;i<counts.size();i++)
    {
        counts[i]=0;
        cout<<counts[i]<<setw(5);
    }

    cout <<"\n7.11-b"<<endl;

    array<unsigned int,15>bonus={};
    for(unsigned int i = 0;i<bonus.size();i++)
    {
        bonus[i]=i;
        bonus[i]=bonus[i]+1;
        cout<<bonus[i]<<setw(5);
    }

    cout<<"\n7.11-c"<<endl;

    array<unsigned int,12>monthlyTemperatures={};
    double x = 0;
    for(unsigned int i = 0;i<monthlyTemperatures.size();i++)
    {
        cin>>x;
        monthlyTemperatures[i]=x;
        cout<<"monthlyTemperatures["<<i<<"]="<<monthlyTemperatures[i]<<endl;
    }

    cout <<"\n7.11-d"<<endl;

    array<unsigned int,5>bestScores={};
    cout <<"i"<<setw(18)<<"bestScores"<<endl;
    for(unsigned int i =0;i<bestScores.size();i++)
    {
        bestScores[i]=i;
        bestScores[i]+=10;
        cout<<i<<setw(10)<<bestScores[i]<<endl;
    }
    return 0;
}
