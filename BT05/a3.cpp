#include <bits/stdc++.h>
using namespace std;
void changeValue(int x) // tham chiếu
{
    cout << (void*)&x << endl;
	x = 2;
}
int main()
{
	int x = 0;
	changeValue(x);
	cout << x << " at " << (void*)&x << endl;
	return 0;
}