#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y;
    double distance;
    cout << "Nhap toa do x: " << endl;
    cin >> x;
    cout << "Nhap toa do y: " << endl;
    cin >> y;
    distance = sqrt(x*x + y*y);

    cout << "Khoang cach toi goc toa do la: " << distance;
}