#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    int y;
    cin >> x >> y;
    double pow1 = x;
    double pow2 = pow(x, y);

    if (y == 0)
    {
        pow1 = 1;
    }
    else if (y < 0)
    {
        for (int i = 0; i <= abs(y); i++)
        {

            pow1 /= x;
        }
    }
    else if (y > 0)
    {
        for (int i = 1; i < y; i++)
        {
            pow1 *= x;
        }
    }

    cout << pow1 << endl;
    cout << pow2 << endl;

    return 0;
}