#include <iostream>
#include "Time.h"
#include <ctime>
using namespace std;

int main()
{
   Time t;

   t.setTime( 23, 59, 57 );

   for ( int ticks = 1; ticks < MAX_TICKS; ++ticks )
   {
      t.printStandard();
      cout << endl;
      t.tick();
   }
}

