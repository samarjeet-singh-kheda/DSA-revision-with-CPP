#include <bits/stdc++.h>
using namespace std;

/**
 *
 * ?    2  --->  "abc"
 * ?    3  --->  "def"
 * ?    4  --->  "ghi"
 * ?    5  --->  "jkl"
 * ?    6  --->  "mno"
 * ?    7  --->  "pqr"
 * ?    8  --->  "stuv"
 * ?    9  --->  "wxyz"
 *
 */

vector<string> mapping = {"abc", "def", "ghi", "jkl", "mno", "pqr", "stuv", "wxyz"};

void solve(string &str, int idx, string output, vector<string> &ans)
{
    if (idx >= str.size())
    {
        ans.push_back(output);
        return;
    }

    for (int i = 0; i < mapping[str[idx] - '2'].size(); i++)
    {
        solve(str, idx + 1, output + mapping[str[idx] - '2'][i], ans);
    }
}

vector<string> phoneKeypad(string &str)
{
    vector<string> ans;

    solve(str, 0, "", ans);

    return ans;
}

int main()
{
    string str = "29";
    vector<string> combinations = phoneKeypad(str);

    for (string str : combinations)
    {
        cout << str << endl;
    }

    return 0;
}