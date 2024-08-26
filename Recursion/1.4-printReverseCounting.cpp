#include <bits/stdc++.h>
using namespace std;

void printReverseCounting(int n)
{
    if (n == 0)
        return;

    cout << n << endl;

    printReverseCounting(n - 1);
}

int main()
{
    printReverseCounting(19);

    return 0;
}