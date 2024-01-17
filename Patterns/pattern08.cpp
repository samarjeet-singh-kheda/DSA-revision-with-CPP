/* print the following pattern:-
1
2 3
3 4 5
4 5 6 7
*/
#include<iostream>
using namespace std; 

int main() { 

    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<i+j-1<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

//  int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j = i;
//         while(j<2*i){
//             cout<<j<<" ";
//             j =j+1;
//         }
//         cout<<endl;
//         i =i+1;
//     }

int n;
cin>> n;

for (int i = 1; i <= n; i++)
{   int k=i;
    for (int j = 1; j <= i; j++)
    {
        cout<<k<<" ";
        k++;
    }
    cout<<endl;
}

     return 0;
}