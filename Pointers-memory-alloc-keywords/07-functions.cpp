#include <bits/stdc++.h>
using namespace std;

void logger(int *p)
{
    cout << *p << endl;
}

void update(int *p)
{
    cout << "In function (before): " << *p << endl;
    *p = *p + 1;
    cout << "In function (after): " << *p << endl;
}

void updatePtr(int *p)
{
    cout << "In function (before): " << p << endl;
    p = p + 1;
    cout << "In function (after): " << p << endl;
}

// int getSum(int arr[], int n)
int getSum(int *arr, int n)
{
    cout << "Size of arr (in function): " << sizeof(arr) << endl;
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

int main()
{
    int val = 5;
    int *p = &val;

    logger(p);
    // logger(val);  //!    ERROR --> invalid conversion from 'int' to 'int*'

    cout << "Before: " << *p << endl;
    update(p);
    cout << "After: " << *p << endl;

    cout << "Before: " << p << endl;
    updatePtr(p);
    cout << "After: " << p << endl;

    int arr[6] = {6, 5, 4, 3, 2, 1};

    cout << sizeof(arr) << endl;

    cout << getSum(arr, 6) << endl;

    return 0;
}