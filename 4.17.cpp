#include <iostream>

using namespace std;

int main()
{
  double counter = 0, number = 0, largest = 0;

  while( counter < 10 )
  {
    cout << " Please enter an number : ";
    cin >> number;
    if( number >largest )
        largest = number;
    counter++;
  }
  cout << " The largest is : " << largest <<endl;
}
