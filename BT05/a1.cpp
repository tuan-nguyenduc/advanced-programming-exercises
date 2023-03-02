#include <iostream>
using namespace std;

int main() {
    int before;
    int a[5];
    char b[5];
    int after;

    for (int i = 0; i < 3; i++) {
        cout << (void*)&a[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 3; i++) {
        cout << (void*)&b[i] << " ";
    }

    cout << endl;

    cout << (void*)&before << " " << (void*)&after;
    return 0;
}

// Ket qua chay chuong trinh:  
// 0x42e59ff890 0x42e59ff894 0x42e59ff898 
// 0x42e59ff88b 0x42e59ff88c 0x42e59ff88d 
// 0x42e59ff8a4 0x42e59ff884
// => Cac dia chi co gia tri tuong doi nhau (Chi khac nhau o duoi dia chi)

