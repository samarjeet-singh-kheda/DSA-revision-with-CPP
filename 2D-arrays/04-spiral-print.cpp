#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();

    int topRow = 0;
    int bottomRow = row - 1;
    int startCol = 0;
    int endCol = col - 1;
    int count = 0;

    while (count < row * col)
    {
        for (int i = startCol; i <= endCol && count < row * col; i++)
        {
            ans.push_back(matrix[topRow][i]);
            count++;
        }
        topRow++;

        for (int i = topRow; i <= bottomRow && count < row * col; i++)
        {
            ans.push_back(matrix[i][endCol]);

            count++;
        }
        endCol--;

        for (int i = endCol; i >= startCol && count < row * col; i--)
        {
            ans.push_back(matrix[bottomRow][i]);

            count++;
        }
        bottomRow--;

        for (int i = bottomRow; i >= topRow && count < row * col; i--)
        {
            ans.push_back(matrix[i][startCol]);

            count++;
        }
        startCol++;
    }

    return ans;
}

void printVector(vector<vector<int>> matrix)
{

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    vector<vector<int>> ans;
    ans.push_back({1, 2, 3});
    ans.push_back({4, 5, 6});
    ans.push_back({7, 8, 9});

    printVector(ans);

    vector<int> res = spiralOrder(ans);

    for (auto i : res)
        cout << i << " ";

    cout << endl;

    return 0;
}