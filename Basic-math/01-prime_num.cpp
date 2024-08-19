#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        cout << "N/A" << endl;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{

    cout << isPrime(37) << endl;
    cout << isPrime(999) << endl;
    cout << isPrime(2) << endl;
    cout << isPrime(1) << endl;

    return 0;
}