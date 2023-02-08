#include <iostream>
#include <algorithm>
using namespace std;

string one[] = {"", "one ", "two ", "three ", "four ",
                "five ", "six ", "seven ", "eight ",
                "nine ", "ten ", "eleven ", "twelve ",
                "thirteen ", "fourteen ", "fifteen ",
                "sixteen ", "seventeen ", "eighteen ",
                "nineteen "};

string ten[] = {"", "", "twenty ", "thirty ", "forty ",
                "fifty ", "sixty ", "seventy ", "eighty ",
                "ninety "};

bool isNegative = false;


string numToWords(long long int n, string s)
{
    string str = "";
    if (n<0) {
        n = abs(n);
    }
    if (n > 19)
    {
        string ten_copy = ten[n/10];
        ten_copy.erase(std::remove_if(ten_copy.begin(), ten_copy.end(), ::isspace), ten_copy.end());
        str += ten_copy + "-" + one[n % 10];
    }
    else
    {
        str += one[n];
    }

    if (n != 0)
    {
        str += s;
    }

    return str;
}

string convertToWords(long long int n) {
    string out;
    if (n<0) {
        out += "negative ";
    }
    out += numToWords((n/100000000) , "hundred million ");
    out += numToWords((n/1000000) % 100, "million ");
    out += numToWords(n/100000 % 10, "hundred thousand ");
    out += numToWords((n/1000) % 100, "thousand "); 
    out += numToWords((n/100) % 10, "hundred ");
    out += numToWords((n%100), "");

    if(out=="") {
        out = "zero";
    }
    return out;
}

int main()
{
    long long int n;
    cin >> n;
    cout << convertToWords(n);
}