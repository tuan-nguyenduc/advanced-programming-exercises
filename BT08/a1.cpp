#include <iostream>
using namespace std;


void f(int xval)
{
   int x;
   x = xval;
   // in địa chỉ của x tại đây
   cout << &x << endl;
}
void g(int yval)
{
   int y;
   // in địa chỉ của y tại đây
   cout << &y << endl;
}
int main()
{
   f(7);
   g(11);
   return 0;
} 

// Dia chi cua x va y giong nhau: 0x80ffbff7fc va 0x80ffbff7fc do chung deu la bien dia phuong cua ham f va g (co cung cau truc code giong nhau) va chung deu duoc goi o ham main nen co cung stack frame.