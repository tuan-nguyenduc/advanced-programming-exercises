#include <iostream>
using namespace std;

void print_triangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k < 2*i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print_triangle(n);
    return 0;
}