#include <iostream>
using namespace std;

bool isPalindromic(int n);
int countPalindromic(int a, int b);
int reversedNumber(int n);

int main()
{
    int n;
    cin >> n;
    int a[n], b[n], count[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << countPalindromic(a[i], b[i]) << endl;
    }

    return 0;
}

bool isPalindromic(int n)
{
    if (n == reversedNumber(n))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int countPalindromic(int a, int b)
{
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        if (isPalindromic(i))
        {
            count++;
        }
    }
    return count;
}

int reversedNumber(int n)
{
    int reversed_number = 0;
    int remainder;
    while (n != 0)
    {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }
    return reversed_number;
}