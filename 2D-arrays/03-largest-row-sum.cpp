#include <bits/stdc++.h>
using namespace std;

void rowBasedInput(int arr[][4], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void columnBasedInput(int arr[][4], int row, int col)
{

    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            cin >> arr[i][j];
        }
    }
}

void printArray(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int largestRowSum(int arr[][4], int row, int col)
{
    int ans = INT_MIN;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;

        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }

        if (sum > ans)
            ans = sum;
    }

    return ans;
}

int main()
{

    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {10, 11, 12, 13}, {14, 15, 16, 17}};
    printArray(arr, 4, 4);
    cout << largestRowSum(arr, 4, 4) << endl;

    int arr2[4][4] = {{-1, -2, -13, -4}, {-5, -6, -7, -8}, {-10, 0, -2, -13}, {1, -3, -16, -17}};
    printArray(arr2, 4, 4);
    cout << largestRowSum(arr2, 4, 4) << endl;

    return 0;
}