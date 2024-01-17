
/* print the following pattern:-
   *
  **
 ***
****
*/
#include<iostream>
using namespace std; 

int main() { int n;
cin>>n;
for (int i = 1; i <=n ; i++)
{   int p = n-i; 
for (int j = 1; j <= p; j++)
{
    cout<<" ";
}
for (int k = 1; k <= i; k++)
{
    cout<<"*";
}
    cout<<endl;
}
     return 0;
}