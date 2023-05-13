#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int male[n];
    int female[n];
    for (int i = 0; i < n; i++)
    {
        cin >> male[i] >> female[i];
    }

    sort(male, male+n);
    sort(female, female+n);

    for (int i = 0; i < n; i++)
    {
        if (male[i] < female[i])
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
    
}