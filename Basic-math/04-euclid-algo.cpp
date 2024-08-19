// (a, b) --> (a-b, b)
//  if(a==0)    return b

#include <bits/stdc++.h>
using namespace std;

//!     APPROACH #1
int gcd(int a, int b)
{

    if (a == 0)
        return b;

    if (b == 0)
        return a;

    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    return b;
}

//!     APPROACH #2
int gcd2(int a, int b)
{
    int maxi = max(a, b);
    int mini = min(a, b);

    while (mini != 0)
    {
        int maxi2 = maxi - mini;
        int mini2 = mini;

        if (maxi2 == mini2)
            return maxi2;

        maxi = max(maxi2, mini2);
        mini = min(maxi2, mini2);
    }

    return maxi;
}

//!     APPROACH #3
int gcd3(int a, int b)
{
    int maxi = max(a, b);
    int mini = min(a, b);

    if (mini == 0 || mini == maxi)
        return maxi;

    return gcd(maxi - mini, mini);
}

int main()
{
    cout << gcd(1, 34) << endl;
    cout << gcd(29, 290) << endl;
    cout << gcd(12, 8) << endl;
    cout << gcd(40, 28) << endl;
    cout << gcd(168, 180) << endl;
    cout << gcd(45, 75) << endl;

    return 0;
}