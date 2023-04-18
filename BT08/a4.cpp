#include <iostream>
using namespace std;

int main()  { 
   char **s = new char*[1];
   char foo[] = "Hello World"; 
   *s = foo; 
   printf("s is %s\n",*s); 
   s[0] = foo; 
   printf("s[0] is %s\n",s[0]); 
   delete[] s;
   return(0); 
}

/*
- Loi 1: Khong cap phat bo nho cho s
- Loi 2: De in ra gia tri cua s thi phai thay s->*s o dong so 8
- Loi 3: Chua giai phong bo nho -> Phai them delete[] s o dong 11
*/
