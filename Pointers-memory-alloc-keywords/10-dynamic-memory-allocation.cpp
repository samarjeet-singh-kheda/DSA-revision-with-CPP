#include <bits/stdc++.h>
using namespace std;

int main()
{
    //! *********************************************** 1-D Array ***********************************************
    // int size;
    // cin >> size;

    // int *arr = new int[size];

    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " " << &arr[i] << endl;
    // }

    // while (true)
    // {
    //     int *j = new int;
    // }

    // while (true)
    // {
    //     int j = 10;
    // }

    //! *********************************************** 2-D Array ***********************************************

    //?     Creating 2-D array
    int row, col;

    cin >> row >> col;

    int **arr = new int *[row]; //*     (it is an array of int*, kinda like a 1-D array is an array of "int")

    for (int i = 0; i < row; i++)
        arr[i] = new int[col];

    cout << "Start entering array elements" << endl;

    //?     Taking input
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> arr[i][j];

    //?     Printing 2-D array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //?     Releasing memory
    for (int i = 0; i < row; i++)
        delete[] arr[i];

    delete[] arr;

    return 0;
}