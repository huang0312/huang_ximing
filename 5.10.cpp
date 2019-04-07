#include <iostream>

using namespace std;

int main()
{
  unsigned int count=1;
  for (int a=1,s=1;count <=5;count ++)
  {
      a=a*s;
      s++;
      cout<< a<<endl;
  }
}
