#include <bits/stdc++.h>
using namespace std;

int pow(int a, int x)
{
    if (a == 1 || a == 0)
        return a;
    if (x == 0)
        return 1;
    if (x == 1)
        return a;
    if (x == 2)
        return a * a;

    int ans = pow(a, x / 2);

    return (x & 1) ? a * ans * ans : ans * ans;
}

int main()
{
    cout << pow(2, 11) << endl;
    cout << pow(2, 10) << endl;

    return 0;
}