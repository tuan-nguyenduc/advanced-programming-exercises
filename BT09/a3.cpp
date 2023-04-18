#include <iostream>
using namespace std;

int main()
{
    char* a = new char[10];
char* c = a + 3;
for (int i = 0; i < 9; i++) a[i] = 'a'; 
a[9] = '\0';
cerr <<"a: " << "-" << a << "-" << endl;
cerr <<"c: " << "-" << c << "-" << endl;
delete a; // delete c khong chinh xac vi c tro den mot vi tri trong bo nho duoc cap phat cho a. Xoa c khong giai phong bo nho cap phat cho a ma no con de a vao trang thai khong hop le.
cerr << "a after deleting c:" << "-" << a << "-" << endl;
}


