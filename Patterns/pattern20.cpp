/* print the following pattern:-
   1
  121
 12321
1234321
*/
#include<iostream>
using namespace std; 

int main() { int n;
    cin>>n;

for (int t = 1; t <= n; t++)
{ 
for (int i = 1; i <= n-t; i++)
{
    cout<<" ";
}
for (int j = 1; j <= t; j++)
{
    cout<<j;
}
for (int k = 1; k <= t-1 ; k++)
{
    cout<<t-k;
}
cout<<endl;
}
     return 0;
}   