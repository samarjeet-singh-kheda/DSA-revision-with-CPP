#include<iostream>
using namespace std; 

void enter_array(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
}

void display_array(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
        cout<<endl;
}

int linear_search(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key){
            return i;
        }
    }
        return -1;
}

int main() { int arr[1000], n, key;
    cout<<"Enter length of the array: ";
    cin>>n;
    cout<<"Enter elements of the array: "<< endl;
    enter_array(arr, n);
    cout<<"Elements of the array are: ";
    display_array(arr, n);
    cout<<"Enter key: ";
    cin>>key;
    int index = linear_search(arr, n, key);
    cout<<"Index of the key is: ";
    cout<<index;
    return 0;
}