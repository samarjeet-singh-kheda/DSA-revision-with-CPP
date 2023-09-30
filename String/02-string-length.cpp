#include<iostream>
using namespace std; 

int get_length(char name[]){
          int count=0;
     for (int i = 0; name[i] !='\0'; i++)
     {
          count++;
     }
          return count;
}

int main() { char name[20];

     cout<<"Enter your name: ";
     cin>>name;
     cout<<"Your name is "<<name<<endl; 
     cout<<"Length of string: "<<get_length(name);

      return 0;
}