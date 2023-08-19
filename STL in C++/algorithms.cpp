#include<iostream>
#include<algorithm>
#include<vector>
using namespace std; 

int main() { 
     vector<int> v={3, 7, 11, 19, 29, 47, 68, 72};

     cout<<"Is 47 present in the vector? "<<binary_search(v.begin(), v.end(), 47)<<endl;
     cout<<"Is 9 present in the vector? "<<binary_search(v.begin(), v.end(), 9)<<endl;

     int a=5, b=7;

     cout<<"Greater element: "<<max(a,b)<<endl;
     cout<<"Smaller element: "<<min(a,b)<<endl;

     cout<<"After swapping: "<<endl;
     swap(a, b);
     cout<<"a: "<<a<<endl<<"b: "<<b<<endl;

     string s = "abcdefghijklmno";
     reverse(s.begin()+4, s.end()-2);
     cout<<"Reversed string: "<<s<<endl;

     rotate(v.begin(), v.begin()+2, v.end());
     cout<<"After rotation of b by 2 places: "<<endl;
     for(auto i: v){
          cout<<i<<" ";
     }
     cout<<endl;

     sort(s.begin(), s.end());
     cout<<"After sorting: "<<endl;
     for(auto i: s){
          cout<<i<<" ";
     }
     cout<<endl;

     sort(v.begin(), v.end());
     cout<<"After sorting: "<<endl;
     for(auto i: v){
          cout<<i<<" ";
     }
     cout<<endl;

     return 0;
}