/* print the following pattern:-
A A A
B B B
C C C
*/
#include<iostream>
using namespace std; 

int main() { int n;
    cin>>n;
for (int i = 1; i <= n; i++)
{  char k = 'A' + i - 1;
for (int j = 1; j <=n; j++)
{
    cout<<k<<" ";
}
    cout<<endl;
}

     return 0;
}