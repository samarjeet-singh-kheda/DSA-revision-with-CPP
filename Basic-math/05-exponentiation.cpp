#include <bits/stdc++.h>
using namespace std;

int exponent(int a, int b)
{
    int ans = 1;

    while (b--)
    {
        ans *= a;
    }

    return ans;
}

int main()
{
    cout << exponent(3, 2) << endl;
    cout << exponent(2, 10) << endl;

    return 0;
}