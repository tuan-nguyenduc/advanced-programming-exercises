#include <iostream>
using namespace std;

void f(int a[]) {
    cout << sizeof(a);
}

int main()
{
    int A[4];
    cout << sizeof(A);
    cout << endl;
    f(A);
}