#include<iostream>
#include<array>
using namespace std; 

int main() { 
    array<int,4> arr={4, 5, 8, 9}; 
    //it's static that's why not used much

    int size = arr.size();  //to find size
    cout<<size<<endl;

    for (int i = 0; i < size; i++) 
    {
        cout<<arr[i]<<" "; //transversed like a normal array
    }
    
    cout<<"Third element of array is: "<<arr.at(2)<<endl;
    //arr.at(i) gives element at 'i' inde

    cout<<"first index of array is: "<<arr.front()<<endl;
    //gives element at front

    cout<<"last index of array is: "<<arr.back()<<endl;
    //gives element at back

     return 0;
}