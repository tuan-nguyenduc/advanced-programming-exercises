#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void inMang(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << a[i] << "  ";
    }
    cout << endl;
}

void HoanViToHop(int a[], int n)
{
    sort(a, a + n);

    do {
        inMang(a, n);
    } while (next_permutation(a, a + n));
}

int main() {
    int a[] = { 10, 20, 30, 40 };
    int n = sizeof(a) / sizeof(a[0]);
    HoanViToHop(a, n);
    return 0;
}
