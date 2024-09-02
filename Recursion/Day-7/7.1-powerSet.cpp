#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, int idx, vector<int> output, vector<vector<int>> &ans)
{
    //      BASE CASE
    if (idx >= arr.size())
    {
        ans.push_back(output);
        return;
    }

    //      EXCLUDE
    solve(arr, idx + 1, output, ans);

    //      INCLUDE
    output.push_back(arr[idx]);
    solve(arr, idx + 1, output, ans);
}

vector<vector<int>> powerSet(vector<int> &arr)
{
    vector<vector<int>> ans;

    solve(arr, 0, {}, ans);

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3};

    vector<vector<int>> ans = powerSet(arr);

    for (auto set : ans)
    {
        for (auto i : set)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}