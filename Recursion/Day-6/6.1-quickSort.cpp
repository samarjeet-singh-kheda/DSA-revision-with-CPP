#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// int partition(int arr[], int low, int high)
// {
//     int k = high;
//     for (int i = high; i >= low; i--)
//     {
//         if (arr[i] > arr[low])
//         {
//             swap(arr[i], arr[k]);
//             k--;
//         }
//     }
//     swap(arr[low], arr[k]);
//     return k;
// }

int partition(int arr[], int low, int high)
{
    int k = low;

    for (int i = low; i <= high; i++)
    {
        if (arr[i] < arr[high])
        {
            swap(arr[i], arr[k]);
            k++;
        }
    }

    swap(arr[high], arr[k]);

    return k;
}

void quickSort(int arr[], int low, int high)
{
    if (low >= high)
        return;

    int p = partition(arr, low, high);
    quickSort(arr, low, p - 1);
    quickSort(arr, p + 1, high);
}

int main()
{
    int arr[] = {99, 88, 111, 1, 2, 1, 1, 77, 66, 55, 77, 44, -110, 2, 11, 33, 22, 10};
    // int arr[] = {99, 88, 111, 1, 66, 55, 77, 44, -110, 2, 11, 33, 22, 110, 10};
    // int arr[] = {9, 8, 7, 7, 7, 6, 5, 4, 3, 2, 1};
    int len = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, len);
    quickSort(arr, 0, len - 1);
    printArray(arr, len);

    return 0;
}