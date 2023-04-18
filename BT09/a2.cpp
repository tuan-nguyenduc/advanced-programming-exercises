#include <iostream>
using namespace std;

int main()
{
 int* p = new int;
 int* p2 = p;
 *p = 10;
 p = nullptr; // Set p thanh null truoc khi delete neu khong se gay ra loi p2 tro de vung bo nho da bi giai phong.
 delete p; 
*p2 = 100;
 cout << *p2;
 p2 = nullptr;
 delete p2;
}