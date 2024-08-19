#include <bits/stdc++.h>
using namespace std;

//?     columns needs to be specified in case of 2-D arrays
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

pair<int, int> linearSearch(int arr[][4], int row, int col, int target)
{
    pair<int, int> ans;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                ans = make_pair(i, j);

                return ans;
            }
        }
    }

    ans = make_pair(-1, -1);

    return ans;
}

int main()
{
    //?     creating 2-D array
    // int arr[3][4];
    // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};

    rowBasedInput(arr, 3, 4);
    cout << endl;

    cout << "Entered array is: " << endl;
    printArray(arr, 3, 4);

    int key;
    cout << "Enter an element to be searched: ";
    cin >> key;

    pair<int, int> indices = linearSearch(arr, 3, 4, key);
    cout << "Indices of target are: " << indices.first << " " << indices.second << endl;

    return 0;
}