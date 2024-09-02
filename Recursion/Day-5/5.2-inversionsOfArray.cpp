#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr, int start, int mid, int end)
{
    int count = 0;

    vector<int> mergedArr;

    int i = start;
    int j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            mergedArr.push_back(arr[i++]);
        }
        else
        {
            count = count + mid - i + 1;
            mergedArr.push_back(arr[j++]);
        }
    }

    while (i <= mid)
    {
        mergedArr.push_back(arr[i++]);
    }

    while (j <= end)
    {
        mergedArr.push_back(arr[j++]);
    }

    for (int i = start; i <= end; i++)
    {
        arr[i] = mergedArr[i - start];
    }

    return count;
}

int mergeSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
        return 0;

    int count = 0;
    int mid = (start + end) / 2;

    count += mergeSort(arr, start, mid);
    count += mergeSort(arr, mid + 1, end);
    count += merge(arr, start, mid, end);

    return count;
}

int inversionCount(vector<int> &arr)
{
    return mergeSort(arr, 0, arr.size() - 1);
}

int main()
{

    vector<int> arr = {6, 5, 4, 3, 2, 1, 6, 0};

    cout << inversionCount(arr) << endl;

    return 0;
}