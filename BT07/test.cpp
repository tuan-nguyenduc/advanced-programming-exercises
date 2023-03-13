#include <iostream>
using namespace std;

int main() {
    int n = 567;
    int *p;
    *p = n;
    cout << *p << " " << &n;
}