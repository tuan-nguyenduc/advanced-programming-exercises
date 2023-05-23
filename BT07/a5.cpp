#include <iostream>
using namespace std;

char* weird_string() {
   char c[] = “123345”;
   return c;
}

int main()
{
    cout << weird_string();
}

//Chuong trinh chay bi loi.
//Không được trả về địa chỉ của một vùng nhớ không hợp lệ.
