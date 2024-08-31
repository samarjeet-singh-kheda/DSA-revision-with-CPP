#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int len, int start = 1)
{
    if (len == 1)
        return;
    if (start >= len)
        return;

    for (int i = start; i > 0; i--)
    {
        if (arr[i - 1] > arr[i])
            swap(arr[i - 1], arr[i]);
    }

    insertionSort(arr, len, start + 1);
}

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {9, 7, 6, 25, 7, 5, -12, 4, 220, 3, 2, 1000, 1, 0};
    int len = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, len);
    insertionSort(arr, len);
    printArray(arr, len);

    return 0;
}