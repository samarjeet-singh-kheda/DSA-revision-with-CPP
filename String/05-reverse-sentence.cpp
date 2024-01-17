#include <bits/stdc++.h>
using namespace std;

string reverseSentence(string &s){

    int end = s.size();
    string ans = "";

    for (int i = s.size()-1; i >= 0; i--)
    {
        if (s[i]==' ')
        {
            for (int j = i+1; j < end; j++)
            {
                ans.push_back(s[j]);
            }
                ans.push_back(' ');

                end = i;
        }
        
    }
    
    for (int i = 0; i < end; i++)
    {
        ans.push_back(s[i]);        
    }
    
    return ans;

}

int main(){
    
    string s = "Fear is my enemy I have no fear for the love of god";

    cout<<s<<endl;

    cout<<reverseSentence(s)<<endl;

    return 0;
}