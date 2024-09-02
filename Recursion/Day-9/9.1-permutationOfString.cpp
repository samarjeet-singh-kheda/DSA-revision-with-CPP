#include <bits/stdc++.h>
using namespace std;

void permute(string &str, string output, int idx, vector<string> &ans)
{
    if (idx >= str.length())
    {
        ans.push_back(output);
        return;
    }

    for (int i = idx; i < str.length(); i++)
    {
        swap(output[idx], output[i]);
        permute(str, output, idx + 1, ans);
    }
}

int main()
{
    vector<string> ans;
    string str = "abcd";
    permute(str, str, 0, ans);

    for (string str :
         ans)
    {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}