#include <iostream>
using namespace std;

void size(int a[]) {
    cout << sizeof(a);
}

int main() {
    int a[20];
    cout << sizeof(a) << endl;
    size(a);
    return 0;
}

// 2 gia tri khac nhau