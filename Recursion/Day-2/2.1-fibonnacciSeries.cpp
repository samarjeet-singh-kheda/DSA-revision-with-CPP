#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n)
{
    int fb0 = 0;
    int fb1 = 1;
    int fb2;

    for (int i = 0; i <= n; i++)
    {
        cout << fb0 << " ";

        fb2 = fb0 + fb1;

        fb0 = fb1;
        fb1 = fb2;
    }

    cout << endl;
}

int fib(int n)
{
    if (n <= 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    fibonacci(20);

    cout << fib(8) << endl;

    return 0;
}