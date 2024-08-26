#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int key)
{
    if (start > end)
        return -1;

    int mid = start - (start - end) / 2;

    if (arr[mid] == key)
        return mid;
    else if (arr[mid] > key)
        return binarySearch(arr, start, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, end, key);
}

int main()
{
    int arr[] = {11, 22, 33, 44, 55, 66, 66, 77};

    cout << binarySearch(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1, 22) << endl;
    cout << binarySearch(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1, 77) << endl;

    return 0;
}