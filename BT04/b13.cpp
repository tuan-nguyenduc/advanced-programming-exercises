#include <iostream>

using namespace std;

void setArray(int a[], int x)
{
    for (int i = 0; i < x; i++)
        cin >> a[i];
}

bool balancedSums(int arr[], int arr_size)
{
    if (arr_size == 1)
    {
        return "YES";
    }

    for (int i = 0; i < arr_size; i++)
    {
        int lsum = 0;
        int rsum = 0;
        for (int j = 0; j < i; j++)
        {
            lsum += arr[j];
        }
        for (int k = i + 1; k < arr_size; k++)
        {
            rsum += arr[k];
        }
        if (lsum == rsum)
        {
            return true;
        }
        for (i = 1; i < arr_size; i++)
        {
            lsum += arr[i - 1];
            rsum -= arr[i];
            if (lsum == rsum)
            {
                return "YES";
            }
        }
    }
    return false;
}

int main()
{
    int testCaseNumber;
    cin >> testCaseNumber;
    for (int i = 1; i <= testCaseNumber; i++)
    {
        int n;
        cin >> n;
        int a[n];
        setArray(a, n);
        if (balancedSums(a, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}