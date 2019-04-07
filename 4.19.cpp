#include <iostream>



using namespace std;


int main()

{

    double number=0 ,counter = 0, largest1 = 0, largest2 = 0;
    cout << "Please enter an number:";
    cin >> number;
    largest1 = number;
    cin  >> number;
    if( number > largest1 )
    {
        largest2 = largest1;
        largest1 = number;
    }
    else
    {
        largest2 = number;
    }


   while ( counter < 3)

    {
        cin >> number;

       if( number > largest1 )
       {
           largest2 = largest1;
        largest1 = number;
       }
       else if( number > largest2 )
       {
           largest2 = number;
       }


        counter ++;


    }


    cout << largest1 <<endl;

     cout<<largest2<<endl;

}
