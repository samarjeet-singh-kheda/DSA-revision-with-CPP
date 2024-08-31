#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    int totalSize = end - start + 1;

    int mergedArr[totalSize] = {0};

    int i = start;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= end && k < totalSize)
    {
        if (arr[i] < arr[j])
        {
            mergedArr[k++] = arr[i++];
        }
        else if (arr[i] > arr[j])
        {
            mergedArr[k++] = arr[j++];
        }
        else
        {
            mergedArr[k++] = arr[i++];
            mergedArr[k++] = arr[j++];
        }
    }

    while (i <= mid && k < totalSize)
    {
        mergedArr[k++] = arr[i++];
    }

    while (j <= end && k < totalSize)
    {
        mergedArr[k++] = arr[j++];
    }

    for (int i = start; i <= end; i++)
    {
        arr[i] = mergedArr[i - start];
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int mid = (start + end) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
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
    int arr[] = {99, 88, 1, 77, 66, 55, 44, -110, 33, 22, 10};
    // int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int len = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, len);
    mergeSort(arr, 0, len - 1);
    // mergeSort(arr, 0, 4);
    printArray(arr, len);

    return 0;
}