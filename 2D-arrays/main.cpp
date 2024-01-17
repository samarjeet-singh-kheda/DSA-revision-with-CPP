#include <bits/stdc++.h>
using namespace std;

//! Rows needs to be specified in case of 2-D arrays
void rowBasedInput(int arr[][4], int row, int col)
{
    //? row-wise input
    cout << "Enter " << 3 * 4 << " array elements: " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            // printf("arr[%i][%i]: ", row, col);
            cin >> arr[row][col];
        }
    }
}

void columnBasedInput(int arr[][4], int row, int col)
{
    //? column-wise input
    cout << "Enter array elements: " << endl;
    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            printf("arr[%i][%i]: ", row, col);
            cin >> arr[row][col];
        }
    }
}

void printArray(int arr[][4], int row, int col)
{
    cout << "Your array is: " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}

bool isPresent(int arr[][4], int row, int col, int key)
{

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == key)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{

    // int arr[3][4];

    //? initialisation
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};

    printArray(arr, 3, 4);

    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;

    isPresent(arr, 3, 4, key) ? cout << "Found\n" : cout << "Not found\n";

    return 0;
}