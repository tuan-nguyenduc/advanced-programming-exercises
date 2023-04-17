#include <iostream>
#include <string.h>
using namespace std;

struct String
{
    int n;
    char* str;

    String(const char* str_)
    {
        n = strlen(str_);
        str = new char[n];
        strcpy(str, str_);
    }

    ~String()
    {
        delete[] str;
    }

    void print()
    {
        cout << str << endl;
    }

    void append(const char* new_string)
    {
        char* tmp = new char[n + strlen(new_string)];
        strcpy(tmp, str);
        strcat(tmp, new_string);
        str = tmp;

        tmp = NULL;
        delete[] tmp;
    }

};

int main()
{
    String s("Helloaaa");
    s.append(" there");
    s.print();
    return 0;
}