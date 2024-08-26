#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int length, int key, int start = 0)
{
    if (start >= length)
        return -1;

    return arr[start] == key ? start : linearSearch(arr, length, key, start + 1);
}

int main()
{
    int arr[] = {1, 2, 5, 6, 7, 78, 324, 424, 23, 12, 12, 34324, 78};

    cout << linearSearch(arr, sizeof(arr) / sizeof(arr[0]), 22) << endl;
    cout << linearSearch(arr, sizeof(arr) / sizeof(arr[0]), 78) << endl;

    return 0;
}