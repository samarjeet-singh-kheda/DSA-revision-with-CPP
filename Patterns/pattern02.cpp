/* print the following pattern:-
    111
    222
    333
*/
#include<iostream>
using namespace std; 

int main() { int n;
    cin>>n;
for (int i = 1; i <= n; i++)
{
for (int j = 1; j <= n; j++)
{
    cout<<i;
}
    cout<<endl;
}
    
     return 0;
}