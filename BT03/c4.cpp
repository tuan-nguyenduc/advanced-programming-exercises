#include <iostream>
#include <string>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    char** a = new char*[m];
    for (int i = 0; i < m; i++)
    {
        a[i] = new char[n];
    }

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
            if (a[i][j] == '*')
            {
                cout << '*' << ' ';
            }
            else
            {
                int count = 0;
                for (int k = i-1; k <= i+1; k++)
                {
                    for (int l = j-1; l <= j+1; l++)
                    {
                        if (k>=0 && k<m && l>=0 && l<n && a[k][l] == '*')
                        {
                            count++;
                        }
                    }
                }
                cout << count << ' ';
            }
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++)
    {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}