

#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;

    Point(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
};

void print(Point point)
{
    cout << "(" << point.x << ", " << point.y << ")" << endl;
    cout << &point.x << endl;
    cout << &point.y << endl;
}

int main()
{
    Point p = Point(1, 2);
    print(p);
    cout << &p;
    return 0;
}

// Vi tri tuong doi cac truong kieu x, y cua mot bien kieu Point va chinh bien do o canh nhau.