#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int n;
    double a[n];
    double sum, mean, max, min;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    mean = sum/n;

    sort(a, a + n);

    max = a[n-1];
    min = a[0];

        cout << "Mean: " << mean << endl;
        cout << "Max: " << max << endl;
        cout << "Min: " << min << endl;
    return 0;
}