#include <iostream>
using namespace std;

int main( )
{ 
    //a
   char a[4] = "abc"; 
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }

   cout << endl;
   //b
   int b[4] = {1,2,3,4};
   for (int* ip = b; ip < b + 4; ip++)
   {
      cout << ip << " : " << (*ip) << endl;
   }

   cout << endl;
   //c
   double c[4] = {0.1, 3.5, 5.6, 6.7};
   for (double* dp = c; dp < c + 4; dp++)
   {
    cout << dp << " : " << (*dp) << endl;
   }

   cout << endl;
   //d
   double d[4] = {0.1, 3.5, 5.6, 6.7};
   for (double* dp = d; dp < d + 4; dp+=2)
   {
    cout << dp << " : " << (*dp) << endl;
   }

/*
Result:

0x337edff84c : a
0x337edff84d : b
0x337edff84e : c

0x337edff830 : 1
0x337edff834 : 2
0x337edff838 : 3
0x337edff83c : 4

0x337edff810 : 0.1
0x337edff818 : 3.5
0x337edff820 : 5.6
0x337edff828 : 6.7

0x337edff7f0 : 0.1
0x337edff800 : 5.6
*/

   return 0;
}
