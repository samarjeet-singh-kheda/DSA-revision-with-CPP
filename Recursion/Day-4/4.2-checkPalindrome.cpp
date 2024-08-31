#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int start, int end)
{
    if (start >= end)
        return true;

    return str[start] == str[end] ? isPalindrome(str, start + 1, end - 1) : false;
}

int main()
{
    string str = "tenet tenet tenet tenet tenet";
    cout << isPalindrome(str, 0, str.size() - 1) << endl;

    string str1 = "tenet tenet tenft tenet tenet";
    cout << isPalindrome(str1, 0, str1.size() - 1) << endl;

    return 0;
}