#include <bits/stdc++.h>
using namespace std;

void solve(string &str, int idx, string output, vector<string> &ans)
{
    if (idx >= str.size())
    {
        if (output != "")
            ans.push_back(output);
        return;
    }

    //      EXCLUDE
    solve(str, idx + 1, output, ans);

    //      INCLUDE
    output += str[idx];
    solve(str, idx + 1, output, ans);
}

vector<string> subsequences(string &str)
{
    vector<string> ans;

    solve(str, 0, "", {ans});

    return ans;
}

int main()
{
    string str = "abc";
    vector<string> ans = subsequences(str);

    for (string str : ans)
    {
        cout << str << endl;
    }

    return 0;
}