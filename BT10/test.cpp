#include <iostream>
using namespace std;

int main() {
    bool isGrow = false;
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> *(a+i);
    }
    for (int i = 0; i < n-1; i++) {
        if (*(a+i) > *(a+i+1)) {
            isGrow = false;
            break;
        }
        isGrow = true;
    }

    cout << isGrow;
}