#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100];
    int b[100];

    bool isMistery = true;
    int misteryNumber = 0;

    int countA = 0;
    int countB = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i <= n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        countA += a[i];
    }

    for (int i = 0; i <= n; i++)
    {
        countB += b[i];
    }

    misteryNumber = countB - countA;

    cout << misteryNumber << endl;
    return 0;
}