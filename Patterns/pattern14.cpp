/* print the following pattern:-
A 
B B 
C C C
*/
#include<iostream>
using namespace std; 

int main() { int n; char k='A';
    cin>>n;
    int i=1;
while (i<=n){
    int j=1;
while (j<=i){
    cout<<k<<" ";
    j++;
}
cout<<endl;
    i++;
    k++;
}
     return 0;
}