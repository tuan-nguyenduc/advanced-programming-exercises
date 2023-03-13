#include <iostream>
using namespace std;

int count_even(int *p, int a[]) {
    int count = 0;
    for (int i = 0; i < (*p); i++) {
        if(a[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int a[100];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    count_even(&n, a);
    cout << "Number of even numbers: " << count_even(&n,a);
}