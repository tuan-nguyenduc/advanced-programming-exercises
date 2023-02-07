#include <iostream>
using namespace std;

bool isLeapYear(int n)
{
    if (n % 400 == 0)
    {
        return true;
    }
    if (n % 100 == 0)
    {
        return false;
    }
    if (n % 4 == 0)
    {
        return true;
    }
    return false;
};

int main()
{
    int n;
    cout << "Nhap so nam can kiem tra: ";
    cin >> n;
    if (isLeapYear(n))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}