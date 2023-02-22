#include <iostream>
using namespace std;

int main()
{
    bool isSymmetry = true;
    string s;
    cin >> s;

    int j = s.length() - 1;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] != s[j])
        {
            isSymmetry = false;
            break;
        }
        j--;
    }

    if (isSymmetry)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}