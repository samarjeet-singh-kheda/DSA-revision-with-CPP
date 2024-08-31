#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int len, int start = 0)
{
    if (start >= len - 1)
        return;

    int minIdx = start;

    for (int i = start + 1; i < len; i++)
        if (arr[i] < arr[minIdx])
            minIdx = i;

    swap(arr[start], arr[minIdx]);

    selectionSort(arr, len, start + 1);
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
    int arr[] = {9, -29, 8, 7, 6, 11, 23, 5, 4, 3, 2, 1, 1000, 0};
    int len = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, len);
    selectionSort(arr, len);
    printArray(arr, len);

    return 0;
}