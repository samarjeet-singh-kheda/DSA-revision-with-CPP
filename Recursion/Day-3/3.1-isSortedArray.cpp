#include <bits/stdc++.h>
using namespace std;

// bool isSorted(int arr[], int length, int start = 0)
// {
//     if (start == length - 1)
//         return true;

//     return arr[start] <= arr[start + 1] ? isSorted(arr, length, start + 1) : false;
// }

bool isSorted(int arr[], int length)
{
    if (length <= 1)
        return true;

    return arr[0] > arr[1] ? false : isSorted(arr + 1, length - 1);
}

int main()
{
    int arr[] = {11, 22, 33, 44, 44, 55, 66};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << isSorted(arr, size) << endl;

    int arr2[] = {11, 22, 33, 44, 44, 55, 66, 44};
    cout << isSorted(arr2, sizeof(arr2) / sizeof(arr2[0])) << endl;

    return 0;
}