#include <iostream>
using namespace std;

const int MAXN = 100;

int a[MAXN][MAXN];

int main()
{
    int n;
    cin >> n;
    int x = 0;
    int y = n / 2;

    for (int i = 1; i <= n * n; i++)
    {
        a[x][y] = i;
        x--;
        y++;
        if (x < 0)
        {
            x = n - 1;
        }
        if (y >= n)
        {
            y = 0;
        }
        if (a[x][y] != 0)
        {
            x++;
            if (x >= n)
            {
                x = 0;
            }
            x++;
            if (x >= n)
            {
                x = 0;
            }
            y--;
            if (y < 0)
            {
                y = n - 1;
            }
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}