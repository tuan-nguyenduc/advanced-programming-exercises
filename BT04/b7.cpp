#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < str.length(); j++)
        {
            cout << str.at(i) << str.at(j) << " ";
            for (int k = 0; k < str.length(); k++)
            {

                cout << str.at(i) << str.at(j) << str.at(k) << " ";
            }
        }
    }
}