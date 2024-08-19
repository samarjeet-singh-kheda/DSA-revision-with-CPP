#include <bits/stdc++.h>
using namespace std;

int gcd(int num1, int num2)
{

    int gcd = min(num1, num2);

    while (!(num1 % gcd == 0 && num2 % gcd == 0))
        gcd--;

    return gcd;
}

/*
12 and 8: The GCD of 12 and 8 is 4.
40 and 28: The GCD of 40 and 28 is 4.
168 and 180: The GCD of 168 and 180 is 12.
45 and 75: The GCD of 45 and 75 is 15.

*/

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