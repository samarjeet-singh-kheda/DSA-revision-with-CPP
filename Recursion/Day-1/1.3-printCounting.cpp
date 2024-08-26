#include <bits/stdc++.h>
using namespace std;

void printCounting(int n)
{
    //      BASE CASE
    if (n == 0)
        return;

    //      RECURSIVE RELATION
    if (n > 0)
        printCounting(n - 1);
    if (n < 0)
        printCounting(n + 1);

    cout << n << endl;
}

int main()
{
    printCounting(25);
    printCounting(-25);

    return 0;
}