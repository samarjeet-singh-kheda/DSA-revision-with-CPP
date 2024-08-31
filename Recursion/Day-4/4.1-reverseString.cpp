#include <bits/stdc++.h>
using namespace std;

string reverseString(string &str, int start)
{
    if (start > (str.size() - 1) / 2)
        return str;

    swap(str[start], str[str.size() - start - 1]);

    return reverseString(str, start + 1);
}

int main()
{
    string str = "palindromee";
    cout << reverseString(str, 0) << endl;

    return 0;
}