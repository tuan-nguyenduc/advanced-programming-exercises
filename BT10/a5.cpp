#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;

    Point(int _x, int _y) {
        x = _x;
        y = _y;
    }
};

void print(Point point) {
    cout << "(" << point.x << ", " << point.y << ")";
}

int
main()
{
    Point p = Point(1, 2);
    print(p);
    return 0;
}