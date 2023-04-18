#include <iostream>
using namespace std;

int get_length(const char a[])
{
    int str_length = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        str_length++;
    }
    return str_length;
}

void string_copy(char des[], const char src[])
{
    for (int i = 0; i < get_length(src) && src[i] != '\0'; i++)
    {
        *(des + i) = *(src + i);
    }
    *(des + get_length(src)) = '\0';
}

const char *reverse(const char a[])
{
    int len = get_length(a);
    char *reversed_string = new char[len + 1];
    for (int i = 0; i < len; i++)
    {
        *(reversed_string + i) = *(a + len - 1 - i);
    }
    *(reversed_string + len) = '\0';
    return reversed_string;
}

const char *delete_char(const char a[], char c)
{
    int len = get_length(a);
    char *result = new char[len + 1];
    int count_result = 0;
    for (int i = 0; i < len; i++)
    {
        if (*(a + i) != c)
        {
            *(result + count_result) = *(a + i);
            count_result++;
        }
    }
    *(result + count_result) = '\0';
    return result;
}

const char *pad_right(const char a[], int n)
{
    int len = get_length(a);
    if (len >= n)
    {
        char *result = new char[len + 1];
        string_copy(result, a);
        return result;
    }

    char *result = new char[n + 1];
    string_copy(result, a);

    for (int i = len; i < n; i++)
    {
        *(result + i) = ' ';
    }

    *(result + n) = '\0';
    return result;
}

const char *pad_left(const char a[], int n)
{
    int len = get_length(a);
    if (len >= n)
    {
        char *result = new char[len + 1];
        string_copy(result, a);
        return result;
    }
    char *result = new char[n + 1];
    for (int i = 0; i < n - len; i++)
    {
        *(result + i) = ' ';
    }
    string_copy(result + n - len, a);
    *(result + n) = '\0';
    return result;
}

const char *truncate(const char a[], int n)
{
    int len = get_length(a);
    if (len <= n)
    {
        char *result = new char[len + 1];
        string_copy(result, a);
        return result;
    }
    char *result = new char[n + 1];
    string_copy(result, a);
    *(result + n) = '\0';
    return result;
}

const char *trim_left(const char a[])
{
    int count = 0;
    int len = get_length(a);
    while (*(a + count) == ' ')
    {
        count++;
    }
    char *result = new char[len - count + 1];
    string_copy(result, a + count);
    return result;
}

const char *trim_right(const char a[])
{
    int last_non_space_index = get_length(a) - 1;
    while (last_non_space_index >= 0 && *(a + last_non_space_index) == ' ')
    {
        last_non_space_index--;
    }
    char *result = new char[last_non_space_index + 2];
    string_copy(result, a);
    *(result + last_non_space_index + 1) = '\0';
    return result;
}
int main()
{
    const char str[] = "Hello World";
    cout << reverse(str) << endl;
    cout << delete_char(str, 'l') << endl;
    cout << pad_right(str, 15) << endl;
    cout << pad_left(str, 15) << endl;
    cout << truncate(str, 7) << endl;
    cout << trim_left(str) << endl;
    cout << trim_right(str) << endl;
    cout << str;
}