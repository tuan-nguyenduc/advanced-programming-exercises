#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 2; i++)
    {
        cout << 12 << " midnight" << endl;
        for (int j = 1; j < 12; j++)
        {
            cout << j << " "
                 << "am" << endl;
        }
        if (i = 1)
        {
            cout << 12 << " noon" << endl;
            for (int k = 1; k < 12; k++)
            {
                cout << k << " "
                     << "pm" << endl;
            }
        }
    }
    return 0;
}