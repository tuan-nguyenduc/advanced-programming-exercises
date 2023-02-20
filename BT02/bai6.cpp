#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;
    cout << a/gcd(a, b) << "/" << b/gcd(a,b) << endl;
    return 0;
}

int gcd(int a, int b)
{
    int result = min(a,b);
    while (result > 0) {
        if(a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result;
}