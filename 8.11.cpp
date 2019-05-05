#include <iostream>

using namespace std;

int main()
{
    cout<<"a)"<<endl;
    int number = 0;
    int *numberP=&number;
    cout<<*numberP<<endl;

    cout<<"b)"<<endl;
    double a=0;
    double *realPtr=&a;
    long *integerPtr=reinterpret_cast<long *>(realPtr);
    *realPtr=*integerPtr;
    cout<<realPtr<<" 0"<<integerPtr<<endl;

    cout<<"c)"<<endl;
    int z=0;
    int *x;
    int *y;
    x=y=&z;
    cout<<*x<<" "<<*y<<endl;

    cout<<"d)"<<endl;
    char s[]=" this is a character array ";
    for (int i=0;*(s+i) !='\0';++i)
    {
        cout<<*(s+i)<<' ';
    }
        cout<<endl;
   cout<<"e)"<<endl;
    short *numPtr,result=1;
    numPtr=&result;
    auto *genericPtr = numPtr;
    result =*genericPtr+7;
    cout<<result<<endl;

    cout<<"f)"<<endl;
    double x2 =19.34;
    double *xPtr = &x2;
    cout<<xPtr<<endl;

    return 0 ;
}
