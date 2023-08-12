//In deque or doubly added queue, elements can be added and deleted from both sides
//instead of continuous memory alloaction, elements are stored in multiple static arrays & all the elements are kept tracked
//it is dynamic sized

#include<iostream>
#include<deque>
using namespace std; 

int main() {
     deque<int> d={2, 3, 4, 5};
     d.push_front(1);
     d.push_back(6);

     for(auto i: d){
          cout<<i<<" ";
     }
     cout<<endl;

     cout<<"Element at first index: "<<d.at(0)<<endl;

     cout<<"Element at front: "<<d.front()<<endl;
     cout<<"Element at back: "<<d.back()<<endl;

     cout<<"Empty or not: "<<d.empty()<<endl;

     cout<<"Size of deque: "<<d.size()<<endl;

     d.erase(d.begin(), d.begin()+2);

     cout<<"Deque after erase: "<<endl;
     for(auto i: d){
          cout<<i<<" ";
     }
     cout<<endl;
     
     cout<<"Size of deque after erase: "<<d.size()<<endl;

//even after erase *MAX_SIZE* of deque remains the same

     return 0;
}