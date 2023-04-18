#include <iostream>
using namespace std;

int get_length(char a[])
{
    int str_length = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        str_length++;
    }
    return str_length;
}

void string_copy (char des[], char src[])
{
    for (int i = 0; i < get_length(src) && src[i] != '\0'; i++)
    {
        *(des + i) = *(src + i);
    }
    *(des + get_length(src)) = '\0';
}

void reverse(char a[])
{
    char* reversed_string = new char[get_length(a)];
    for (int i = 0; i < get_length(a); i++)
    {
        *(reversed_string + i ) = *(a + get_length(a) - 1 - i);
    }
    /*
    for (int i = 0; i < get_length(a); i++)
    {
        *(a + i) = *(reversed_string + i);
    }
    */
    *(reversed_string + get_length(a)) = '\0';
    
   string_copy (a, reversed_string);
    
    delete[] reversed_string;
}

void delete_char(char a[], char c)
{
    char* result = new char[get_length(a)];
    int count_a = 0;
    int count_result = 0;
    while (count_a <= get_length(a))
    {
        if (*(a + count_a) != c)
        {
            *(result + count_result) = *(a + count_a);
            count_result++;
        }
        count_a++;
    }
    string_copy(a, result);
    delete[] result;
}

void pad_right(char a[], int n)
{
    if (get_length(a) >= n) {
        return;
    }

    char* result = new char[n];
    string_copy(result, a);

    for (int i = get_length(a); i < n; i++) {
        *(result + i) = ' ';
    }

    string_copy(a, result);
    delete[] result;
}

void pad_left(char a[], int n)
{
    if (get_length(a) >= n)
    {
        return;
    }
    char* result = new char[n];
    for (int i = 0; i < n - get_length(a); i++)
    {
        *(result + i) = ' ';
    }
    string_copy(result + n - get_length(a), a);
    string_copy(a, result);

    delete[] result;
}

void truncate(char a[], int n)
{
    if (get_length(a) <= n)
    {
        return;
    }
    char* result = new char[n];
    string_copy(result, a);
    *(result + n) = '\0';
    string_copy(a, result);
    delete[] result;
}
bool is_palindrome(char a[])
{
    for (int i = 0; i < get_length(a)/2; i++)
    {
        if (*(a + i) != *(a + get_length(a) - 1 - i))
        {
            return false;
        }
    }
    return true;
}

void trim_left(char a[])
{
    int count = 0;
    char* result = new char[get_length(a)];
    while (*(a+count) == ' ')
    {
        count++;
    }
    string_copy(result, a + count);
    string_copy(a, result);
    delete[] result;
}

void trim_right(char a[])
{
    int last_non_space_index = get_length(a) - 1;
    while (last_non_space_index >= 0 && *(a + last_non_space_index) == ' ')
    {
        last_non_space_index--;
    }
    char* result = new char[last_non_space_index];
    string_copy(result, a);
    *(result + last_non_space_index + 1) = '\0';
    string_copy(a, result);
    delete[] result;

}
int main()
{
    char str[] = "Hello World";
    //reverse(str);
    //delete_char(str, 'l');
    //pad_right(str, 15);
    //pad_left(str, 15);
    //truncate(str, 7);
    //cout << is_palindrome(str) << endl;
    //trim_left(str);
    trim_right(str);
    cout << str;
    
}