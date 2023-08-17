//all elements of set are unique, they do not repeat
//it is implemented using BST
//once an element is entered it can't be modified, elements can either be added or deleted only
//elements are fetched in sorted order
//unordered set give elements in random order
//set is ususally slower than unordered set

#include<iostream>
#include<set>
using namespace std; 

int main() { 
     set<int> s;

     s.insert(5);   //O(n) because BST
     s.insert(5);
     s.insert(5);
     s.insert(5);
     s.insert(9);
     s.insert(4);
     s.insert(4);
     s.insert(4);
     s.insert(0);
     s.insert(0);
     s.insert(3);
     s.insert(2);

    for(auto i: s){
          cout<<i<<" ";  //in sorted order
    }
    cout<<endl;


     return 0;
}