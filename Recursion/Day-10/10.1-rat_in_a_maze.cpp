#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &maze, vector<vector<int>> &visited, string dir, int row, int col, vector<string> &ans)
{
    if (row == maze.size() - 1 && col == maze.size() - 1)
    {
        ans.push_back(dir);
        return;
    }

    visited[row][col] = 1;

    //  DOWN
    if (row + 1 >= 0 && row + 1 < maze.size() && maze[row + 1][col] == 1 && visited[row + 1][col] != 1)
        solve(maze, visited, dir + 'D', row + 1, col, ans);

    //  RIGHT
    if (col + 1 >= 0 && col + 1 < maze.size() && maze[row][col + 1] == 1 && visited[row][col + 1] != 1)
        solve(maze, visited, dir + 'R', row, col + 1, ans);

    //  UP
    if (row - 1 >= 0 && row - 1 < maze.size() && maze[row - 1][col] == 1 && visited[row - 1][col] != 1)
        solve(maze, visited, dir + 'U', row - 1, col, ans);

    //  LEFT
    if (col - 1 >= 0 && col - 1 < maze.size() && maze[row][col - 1] == 1 && visited[row][col - 1] != 1)
        solve(maze, visited, dir + 'L', row, col - 1, ans);

    visited[row][col] = 0;
}

vector<string> paths(vector<vector<int>> &maze)
{
    vector<string> ans;

    vector<vector<int>> visited = maze;

    for (int i = 0; i < maze.size(); i++)
        for (int j = 0; j < maze.size(); j++)
            visited[i][j] = 0;

    solve(maze, visited, "", 0, 0, ans);

    return ans;
}

int main()
{
    vector<vector<int>> maze = {{1, 1, 1, 1}, {1, 0, 0, 1}, {1, 1, 0, 1}, {0, 1, 1, 1}};

    for (int i = 0; i < maze.size(); i++)
    {
        for (int j = 0; j < maze[i].size(); j++)
        {
            cout << maze[i][j] << " ";
        }
        cout << endl;
    }

    vector<string> ans = paths(maze);

    for (auto path : ans)
    {
        cout << path << " ";
    }
    cout << endl;

    return 0;
}