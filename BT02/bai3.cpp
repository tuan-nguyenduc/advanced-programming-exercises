#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int canh1, canh2, canh3;
    cin >> canh1 >> canh2 >> canh3;
    if (canh1 < 0 || canh2 < 0 || canh3 < 0 || (canh1 + canh2 < canh3) || (canh1 + canh3 < canh2) || (canh2 + canh3 < canh1))
    {
        cout << "Invalid";
    }
    else
    {
        cout << canh1 + canh2 + canh3 << endl;
        if (canh1 == canh2 && canh2 == canh3)
        {
            cout << "deu" << endl;
        }
        else if ((canh1 == canh2 && canh2 != canh3) || (canh1 == canh3 && canh3 != canh2) || (canh2 == canh3 && canh1 != canh3))
        {
            cout << "can" << endl;
        }
        else if ((pow(canh1, 2) == pow(canh2, 2) + pow(canh3, 2)) || (pow(canh2, 2) == pow(canh3, 2) + pow(canh1, 2)) || (pow(canh3, 2) == pow(canh1, 2) + pow(canh2, 2)))
        {
            cout << "vuong" << endl;
        }
        else
        {
            cout << "thuong";
        }
    }
}