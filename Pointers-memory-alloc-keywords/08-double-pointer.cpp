#include <bits/stdc++.h>
using namespace std;

void update(int **p)
{
    cout << "In function (before): " << p << endl;
    p = p + 1;
    cout << "In function (after): " << p << endl;
}

void updateSinglePtr(int **p)
{
    cout << "In function (before): " << *p << endl;
    *p = *p + 1;
    cout << "In function (after): " << *p << endl;
}

void updateValue(int **p)
{
    cout << "In function (before): " << **p << endl;
    **p = **p + 1;
    cout << "In function (after): " << **p << endl;
}

int main()
{
    int i = 5;
    int *p1 = &i;
    int **p2 = &p1;

    cout << i << " " << *p1 << " " << **p2 << endl;
    cout << p1 << " " << *p2 << " " << &i << endl;
    cout << p2 << " " << &p1 << endl
         << endl;

    cout << "Before: " << p2 << endl;
    // update(p2);
    cout << "After: " << p2 << endl
         << endl;

    cout << "Before: " << p1 << endl;
    // updateSinglePtr(p2);
    cout << "After: " << p1 << endl
         << endl;

    cout << "Before: " << i << endl;
    // updateValue(p2);
    cout << "After: " << i << endl
         << endl;

    return 0;
}