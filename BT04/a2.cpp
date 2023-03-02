#include <iostream>
using namespace std;

int BinarySeach(int a[], int n, int x);
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

int BinarySeach(int a[], int n, int x)
{
    // Sap xep tang dan
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }

    // Tim kiem nhi phan
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == x)
        {
            return mid;
        }
        if (a[mid] < x)
        {
            low = mid + 1;
        }
        if (a[mid] > x)
        {
            high = mid - 1;
        }
    }
    return -1;
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