#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool a[n];

    for (int i = 0; i < n; i++) {
        a[i] = true;
    }
    for (int i = 2; i < sqrt(n); i++)
    {
        if (a[i] == true)
        {
            for (int j = i*i ; j < n; j += i)
            {
                a[j] = false;
                
            }
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (a[i] == true)
        {
            cout << i << " ";
        }
    }
}