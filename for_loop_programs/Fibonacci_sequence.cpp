#include<iostream>
using namespace std; 

int main() { int n, a=0, b=1, c;
    cin>>n;
    cout<<a<<endl;
    cout<<b<<endl;
    for (int i = 1; i <= n; i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<endl;
    }
    
     return 0;
}