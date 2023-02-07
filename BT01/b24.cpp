//Using Zeller’s Algorithm

#include <iostream>
#include <math.h>
using namespace std;

string weekday[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

int main()
{
    int day, month, year;
    cout << "Hay nhap ngay, thang, nam: " << endl;
    cin >> day >> month >> year;
    int m, y, c, w;
    if (month > 2)
    {
        m = month;
    }
    else
    {
        m = 12 + month;
        year--;
    }
    y = year % 100;
    c = year / 100;
    w = (day + floor((13 * (m + 1) / 5) + y + floor(y / 4) + floor(c / 4) + (5 * c)));
    w = w % 7;

    cout << weekday[w];
}