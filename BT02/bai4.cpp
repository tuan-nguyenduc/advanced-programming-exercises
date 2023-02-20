#include <iostream>
#include <algorithm>
using namespace std;

int lcm(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b) << endl;
    return 0;
}

int lcm(int a, int b)
{
    int lcm;
    for (int i = max(a, b); i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }
    return lcm;
}