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
    cout << "(" << point.x << ", " << point.y << ")";
}

const Point mid_point(Point p1, Point p2)
{
    Point mid = Point(0, 0);
    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;

    return mid;
}

int main()
{
    Point p1 = Point(2, 2);
    Point p2 = Point(0, 0);

    print(mid_point(p1, p2));
    return 0;
}