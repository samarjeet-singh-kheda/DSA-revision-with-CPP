/* print the following pattern:-
A 
B C
C D E
E F G H
*/
#include<iostream>
using namespace std; 

int main() { int n; 
    cin>>n;
    int i=1;
while (i<=n){
    int j=1;
    char k='A'+i-1;
while (j<=i){
    cout<<k<<" ";
    k++;
    j++;
}
cout<<endl;
    i++;
}
     return 0;
}