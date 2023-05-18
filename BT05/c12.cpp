#include <iostream>
using namespace std;

int giaiThua(int n)
{
    int giai_thua = 1;
    for (int i = 1; i <= n; i++)
    {
        giai_thua *= i;
    }
    return giai_thua;
}

int toHop(int k, int n)
{
   return (giaiThua(n)) / (giaiThua(k) * giaiThua(n - k));
}

int kiemTra(int k, int n)
{
    if (k >= 0 && k <= n && n >= 1 && n <= 20)
    {
        return 1;
    }
    return 0;
}

void nhapKN(int k[], int n[], int *soPhanTu)
{
    *soPhanTu = 0;
    while (true)
    {
        int k_input, n_input;
        cin >> k_input >> n_input;
        if (k_input == -1 && n_input == -1)
        {
            break;
        }
        k[*soPhanTu] = k_input;
        n[*soPhanTu] = n_input;
        (*soPhanTu)++;
    }
}

int main()
{
    int k[100], n[100], soPhanTu;
    nhapKN(k, n, &soPhanTu);
    for (int i = 0; i < soPhanTu; i++)
    {
        //cout << soPhanTu << endl;
        //cout << k[i] << " " << n[i] << endl;
        //cout << kiemTra(k[i], n[i]) << endl;
        if (kiemTra(k[i], n[i]) == 1)
        {
            cout << toHop(k[i], n[i]) << endl;
        }
    }
    return 0;
}