#include <bits/stdc++.h>
using namespace std;

void bubbleSortIterative(int arr[], int length)
{
    for (int i = length - 1; i > 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

void bubbleSortRecursive(int arr[], int length)
{
    if (length <= 1)
        return;

    for (int i = 1; i < length; i++)
        if (arr[i - 1] > arr[i])
            swap(arr[i - 1], arr[i]);

    bubbleSortRecursive(arr, length - 1);

    // for (int i = length - 1; i > 0; i--)
    // {
    //     if (arr[i - 1] > arr[i])
    //         swap(arr[i - 1], arr[i]);
    // }
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
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    // bubbleSortIterative(arr, sizeof(arr) / sizeof(arr[0]));
    printArray(arr, sizeof(arr) / sizeof(arr[0]));
    bubbleSortRecursive(arr, sizeof(arr) / sizeof(arr[0]));
    printArray(arr, sizeof(arr) / sizeof(arr[0]));

    return 0;
}