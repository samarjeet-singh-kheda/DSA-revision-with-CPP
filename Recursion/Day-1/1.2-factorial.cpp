#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n < 0)
        return -1;

    //      BASE CASE
    if (n == 0 || n == 1)
        return 1;

    //      RECURSIVE RELATION
    int smallerProblem = fact(n - 1);
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}

int main()
{
    cout << fact(5) << endl;
    cout << fact(10) << endl;

    return 0;
}