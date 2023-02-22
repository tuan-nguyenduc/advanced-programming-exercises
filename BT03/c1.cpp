#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    string s;
    bool seen = false;
    cout << "Nhap so chu so: " << endl;
    cin >> n;
    cout << "Nhap chuoi: " << endl;
    cin >> s;
    while (s.length() != n)
    {
        cout << "Yeu cau nhap chuoi co dung so chu so!" << endl;

        cin >> s;
    }

    int a[n];

    char tmp = s[0];
    a[0] = atoi(&tmp);

    for (int i = 0; i < n & seen == false; i++)
    {
        for (int j = 0; j < i; j++)
        {
            char c = s[i];
            if (atoi(&c) == a[j])
            {
                seen = true;
            }
            else
            {
                a[i] = atoi(&c);
            }
        }
    }

    if (seen)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}