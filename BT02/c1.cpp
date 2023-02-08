#include <iostream>
using namespace std;

int main()
{
    bool isPrime = true;
    int n;
    cin >> n;
    if (n <= 0 || n == 1)
    {
        isPrime = false;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}