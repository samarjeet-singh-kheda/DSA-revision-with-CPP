// list is implemented using doubly linked list
// random access of elements is not possible

#include<iostream>
#include<list>
using namespace std; 

int main() { 
    list<int> l;

    l.push_back(1);
    l.push_front(0);

    for(auto i: l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());  //time complexity is O(n)

    for(auto i: l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size of list: "<<l.size()<<endl;

    list<int> new_1(l);
    cout<<"Elements in list new_1: ";
    for(auto i: new_1){
        cout<<i<<" ";
    }
    cout<<endl;

    list<int> new_2(10, 'b');
    cout<<"Elements in list new_2: ";
    for(auto i: new_2){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Empty or not: "<<l.empty()<<endl;

     return 0;
}