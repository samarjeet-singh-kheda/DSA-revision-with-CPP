#include <bits/stdc++.h>
using namespace std;

// int arraySum(int arr[], int length, int sum = 0)
// {
//     if (length == 0)
//         return sum;

//     sum += arr[0];

//     return arraySum(arr + 1, length - 1, sum);
// }

int arraySum(int arr[], int length)
{
    if (length == 0)
        return 0;
    if (length == 1)
        return arr[0];

    return arr[0] + arraySum(arr + 1, length - 1);
}

int main()
{
    int arr[] = {1, 2, 5, 6, 7};

    cout << arraySum(arr, sizeof(arr) / sizeof(arr[0])) << endl;

    return 0;
}