#include <iostream>
using namespace std;

long factorial(long x)
{

    if (x > 1)
    {
        cout << "x = " << x << " at " << &x << endl;
        return (x * factorial(x - 1));
    }

    else
    {
        return 1;
    }
}

int main()
{

    long number = 9;

    cout << factorial(number) << endl;

    return 0;
}

// Output:
// x = 9 at 0xc997bff8d0
// x = 8 at 0xc997bff8a0
// x = 7 at 0xc997bff870
// x = 6 at 0xc997bff840
// x = 5 at 0xc997bff810
// x = 4 at 0xc997bff7e0
// x = 3 at 0xc997bff7b0
// x = 2 at 0xc997bff780
// 362880
// => Moi stack frame 30bit?