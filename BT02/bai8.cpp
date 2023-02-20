#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double delta = pow(b, 2) - 4 * a * c;
    if (delta == 0)
    {
        cout << setprecision(2) << fixed << -b/2*a;
    }
    if (delta > 0) {
        cout << setprecision(2) << fixed <<(-b - sqrt(delta))/2*a << endl;
        cout << setprecision(2) << fixed << (-b + sqrt(delta))/2*a << endl;
    }
    if (delta < 0) {
        cout << setprecision(2) << fixed << -b/2*a << " " << -sqrt(abs(delta))/2*a << endl;
        cout << setprecision(2) << fixed << -b/2*a << " " << sqrt(abs(delta))/2*a << endl;
    }
}