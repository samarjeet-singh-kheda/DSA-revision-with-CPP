/* print the following pattern:-
A B C
D E F
G H I
*/
#include<iostream>
using namespace std; 

int main() { int n; char k='A';
    cin>>n;
for (int i = 1; i <= n; i++)
{
for (int j = 1; j <= n; j++)
{
    cout<<k<<" ";
    k++;
}
    cout<<endl;
}

     return 0;
}