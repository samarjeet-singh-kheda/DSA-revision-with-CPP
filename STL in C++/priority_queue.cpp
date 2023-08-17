//priority queue is like a max_heap, where the first element is always largest of the bunch
//priority queue is based on queue data structure with priority function

#include<iostream>
#include<queue>
using namespace std; 

int main() { 
     //max heap
     priority_queue<int> maxi;

     //min heap
     priority_queue< int, vector<int>, greater<int> > mini;

     maxi.push(7);
     maxi.push(4);
     maxi.push(9);
     maxi.push(2);
     maxi.push(11);

     cout<<"Size of maxi: "<<maxi.size()<<endl;

     int n = maxi.size();

     for (int i = 0; i < n; i++)
     {
          cout<<maxi.top()<<" ";
          maxi.pop();
     }
     cout<<endl;

     mini.push(7);
     mini.push(4);
     mini.push(9);
     mini.push(2);
     mini.push(11);

     int n2 = mini.size();

     for (int i = 0; i < n2; i++)
     {
          cout<<mini.top()<<" ";
          mini.pop();
     }
     cout<<endl;
     
     cout<<"Is mini empty? "<<mini.empty();

     return 0;
}