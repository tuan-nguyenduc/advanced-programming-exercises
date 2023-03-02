#include <iostream>
using namespace std;

int BinarySeach2(int a[], int low, int high, int x);

int main()
{
    int n;
    int x;

    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Nhap so can tim: " << endl;
    cin >> x;
    cout << "Vi tri so can tim: ";
    cout << BinarySeach2(a, 0, n - 1, x);

    return 0;
}

int BinarySeach2(int a[], int low, int high, int x)
{
    // Tim kiem nhi phan bang de quy
    if (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == x)
        {
            return mid;
        }
        if (a[mid] < x)
        {
            return BinarySeach2(a, mid + 1, high, x);
        }
        if (a[mid] > x)
        {
            return BinarySeach2(a, low, mid - 1, x);
        }
    }
    return -1;
}