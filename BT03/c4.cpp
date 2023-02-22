#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    string a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == "." && i >= 0 && j >= 0)
            {
                int count = 0;
                if (a[i - 1][j - 1] == "*")
                {
                    count++;
                }
                // if (a[i - 1][j] == "*")
                // {
                //     count++;
                // }
                // if (a[i - 1][j + 1] == "*")
                // {
                //     count++;
                // }
                // if (a[i][j - 1] == "*")
                // {
                //     count++;
                // }
                // if (a[i][j + 1] == "*")
                // {
                //     count++;
                // }
                // if (a[i + 1][j - 1] == "*")
                // {
                //     count++;
                // }
                // if (a[i + 1][j + 1] == "*")
                // {
                //     count++;
                // }
                a[i][j] = to_string(count);
                cout << a[i][j] << " ";
            }
            if (a[i][j] == "*")
            {
                cout << "*"
                     << " ";
            }
        }
        cout << endl;
    }
    return 0;
}