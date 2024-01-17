// Find maximum occurring character in string

#include <bits/stdc++.h>
using namespace std;

char maxOccurringChar(string s){

    int count = 0;
    char ans;

    for (int i = 0; i < s.length(); i++)
    {
        int temp_count = 0;

        if (s[i] != ' ')
        {
            for (int j = i+1; j < s.length(); j++)
            {
                if (s[i] == s[j])
                {
                    temp_count++;
                }
            }
            
            if (temp_count>count)
            {
                count = temp_count;
                ans = s[i];
            }
            
        }
        
    }
    
            return ans;
}

int main(){
    
    string str;

    cin>>str;
    cout<<str<<endl;

    cout<<"Maximum occurring character is "<<maxOccurringChar(str)<<endl;

    return 0;
}