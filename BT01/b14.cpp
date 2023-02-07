#include <iostream>
using namespace std;

int main()
{
    srand ( time(NULL) );
    int the1 = rand() % 100 + 1;
    int the2 = rand() % 100 + 1;
    int chonXem;
    int theChon;
    int theDung;
    if (the1 >= the2)
    {
        theDung = the1;
    }
    if (the2 > the1)
    {
        theDung = the2;
    }
    cout << "Chon the ban muon xem truoc: (1 hoac 2)" << endl;
    cin >> chonXem;

    if (chonXem != 1 && chonXem != 2) {
        cout << "Du doan khong hop le!";
        return 0;
    }

    if (chonXem == 1)
    {
        cout << "The 1 co gia tri la: " << the1 << endl;
        if (the1 >= 50)
        {
            theChon = the1;
        }
        if (the1 < 50)
        {
            theChon = the2;
        }
    }
    if (chonXem == 2)
    {
        cout << "The 2 co gia tri la: " << the2 << endl;
        if (the2 >= 50)
        {
            theChon = the2;
        }
        if (the2 < 50)
        {
            theChon = the1;
        }
    }
    

    if(theChon == theDung) {
        cout << "Bob da doan DUNG!" << endl;
        cout << "The 1 co gia tri la: " << the1 << endl;
        cout << "The 2 co gia tri la: " << the2 << endl;
        cout << "The Bob da chon la: " << theChon << endl;
    } else {
        cout << "Bod da doan SAI!" << endl;
        cout << "The 1 co gia tri la: " << the1 << endl;
        cout << "The 2 co gia tri la: " << the2 << endl;
    }
    return 0;
}