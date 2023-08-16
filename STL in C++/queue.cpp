//first in, first out

#include<iostream>
#include<queue>
using namespace std; 

int main() { 
    queue<string> q;

    q.push("samarjeet");
    q.push("singh");
    q.push("kheda");

    cout<<"Size of queue: "<<q.size()<<endl;

    cout<<"First element of queue: "<<q.front()<<endl;
    cout<<"Last element of queue: "<<q.back()<<endl;

    q.pop();
    cout<<"First element of queue: "<<q.front()<<endl;
    cout<<"Size of queue: "<<q.size()<<endl;

     return 0;
}