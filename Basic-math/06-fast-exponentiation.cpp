#include <bits/stdc++.h>
using namespace std;

int modularExponentiation(int x, int n, int m)
{

    return (int)floor(pow(x, n)) % m;
}

int main()
{

    cout << modularExponentiation(10000000, 2, 10000001) << endl;
    cout << modularExponentiation(10000000, 10, 10000005) << endl;
    cout << modularExponentiation(10000000, 10, 1) << endl;
    cout << modularExponentiation(10000000, 10, 10) << endl;
    cout << modularExponentiation(17, 17, 17) << endl;
    cout << modularExponentiation(5, 5, 10) << endl;

    return 0;
}

/*
6
10000000 2 10000001
10000000 10 10000005
10000000 10 1
10000000 10 10
17 17 17
5 5 10
*/