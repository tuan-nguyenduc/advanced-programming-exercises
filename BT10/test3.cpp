#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<char, int> freq;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (char c : s)
        {
            freq[c]++;
        }
    }

    for (char c = 'a'; c <= 'z'; c++)
    {
        if (freq.count(c))
        {
            cout << c << " : " << freq[c] << endl;
        }
    }

    return 0;
}