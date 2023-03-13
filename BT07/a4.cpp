#include <iostream>
using namespace std;

int binary_search(int *a, int max, int min, int target)
{
    int mid = (max + min) / 2;
    if (target == mid)
    {
        return mid + 1;
    }
    if (target > a[mid])
    {
        return binary_search(a, max, mid, target);
    }
    if (target < a[mid])
    {
        return binary_search(a, mid, min, target);
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p;
    int target;

    cin >> target;

    p = a;

    int n = binary_search(p, 9, 0, target);
    cout << "Position of the number: " << n;
    return 0;
}