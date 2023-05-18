#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(string a, string b)
{
    if (a.length() % 2 == 0 || a.length() != b.length())
    {
        return false;
    }

    int i = 0;
    int j = a.length() - 1;

    while (i < a.length() && j >= 0)
    {
        if (a.at(i) != b.at(j))
        {
            return false;
        }
        i++;
        j--;
    }

    return true;

}

int main()
{
    int n;
    cin >> n;
    string passwd[n];

    for (int i = 0; i < n; i++)
    {
        cin >> passwd[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (isPalindrome(passwd[i], passwd[j]))
            {
                int length = passwd[i].length();
                cout << length << " " << passwd[i].at(length/2) << endl;
                return 0;
            }
        }
    }


}