#include<iostream>
using namespace std; 

int get_length(char name[]){
    int count=0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
        return count;
}

void reverse_string(char name[]){
    int n=get_length(name);
    for(int i=0; i<n/2; i++)
    {
        swap(name[i], name[n-1-i]);
    }
}

int main() { char name[20];

     cout<<"Enter your name: ";
     cin>>name;
     cout<<"Your name is "<<name<<endl;
     cout<<get_length(name)<<endl;
     reverse_string(name);
     cout<<"Reversed string: "<<name<<endl; 
    
     return 0;
}