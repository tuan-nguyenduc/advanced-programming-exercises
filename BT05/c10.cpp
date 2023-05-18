#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <math.h>

using namespace std;

void printResult(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            for (int k = 2; k < n; k++)
            {
                if ((a[i] + a[j] + a[k]) % 25 == 0)
                {
                    cout << a[i] << " " << a[j] << " " << a[k] << endl; 
                }
            }
        }
    }
}

int main()
{
    srand(time(0));
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        int k = rand() % 50;
        a[i] = k;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    printResult(a, n);
}