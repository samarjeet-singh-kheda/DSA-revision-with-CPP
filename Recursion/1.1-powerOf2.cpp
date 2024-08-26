#include <bits/stdc++.h>
using namespace std;

int pow(int x, int n)
{
    //      BASE CASE
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;

    //      RECURSIVE RELATION
    int smallerProblem = pow(x, n - 1);
    int biggerProblem = x * smallerProblem;

    return biggerProblem;
}

int main()
{
    cout << pow(2, 5) << endl;
    cout << pow(2, 10) << endl;

    return 0;
}