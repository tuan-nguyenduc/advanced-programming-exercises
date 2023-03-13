#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}