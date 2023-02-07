#include <iostream>
using namespace std;

string fibonacciWord(int n)
{
    if (n < 0)
    {
        return "khong ton tai!";
    }
    else if (n == 0)
    {
        return "a";
    }
    else if (n == 1)
    {
        return "b";
    }
    else
    {
        return fibonacciWord(n-1) + fibonacciWord(n-2);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacciWord(n);
    return 0;
}