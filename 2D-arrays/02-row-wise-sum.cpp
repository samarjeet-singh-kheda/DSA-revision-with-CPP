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

void printArray2D(int arr[][4], int row, int col)
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

vector<int> rowSum(int arr[][4], int row, int col)
{

    vector<int> ans;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        ans.push_back(sum);
    }

    return ans;
}

void columnSum(int arr[][4], int row, int col)
{

    for (int j = 0; j < col; j++)
    {
        int sum = 0;
        for (int i = 0; i < row; i++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    vector<int> sum = rowSum(arr, 3, 4);

    for (int i = 0; i < end(sum) - begin(sum); i++)
    {
        cout << sum[i] << endl;
    }

    columnSum(arr, 3, 4);

    return 0;
}