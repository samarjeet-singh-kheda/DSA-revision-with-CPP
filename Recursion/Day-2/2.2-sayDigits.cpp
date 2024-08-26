#include <bits/stdc++.h>
using namespace std;

string digits[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

string sayDigits(int n, string ans = "")
{
    if (n == 0)
        return ans;

    ans = digits[n % 10] + " " + ans;

    return sayDigits(n / 10, ans);
}

int main()
{
    cout << sayDigits(412) << endl;
    cout << sayDigits(129100) << endl;

    return 0;
}