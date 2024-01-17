/* print the following pattern:-
        123
        456
        789
*/
#include<iostream>
using namespace std; 

int main() { int n, i, j, k=1;
cin>>n;
i=1;
while (i<=n)
{
    j=1;

while (j<=n)
{
    cout<<k;
    k++;
    j++;
}
cout<<endl;
i++;
}
     return 0;
}