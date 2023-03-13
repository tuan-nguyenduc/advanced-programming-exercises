#include <iostream>
using namespace std;

void f (int a[]) {
    cout << &a << " " << &a[0];
}

int main() {
    int A[1000];
    cout << &A << " " << &A[0] << endl;
    f(A);
    return 0;
}

//Hai ket qua khac nhau