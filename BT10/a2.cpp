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

void print1(Point point) {
    cout << "(" << point.x << ", " << point.y << ") ";
    cout << &point << endl;
}

void print2(Point &point) {
    cout << "(" << point.x << ", " << point.y << ") ";
    cout << &point << endl;
}


int
main()
{
    Point p = Point(1, 2);
    print1(p);
    print2(p);
    cout << "Dia chi cua p: " << &p;
    return 0;
}

// Ta thay khi truyen tham tri thi tham so la 1 ban sao cua doi so, con khi truyen theo tham chieu thi tham so va doi so la mot bien.