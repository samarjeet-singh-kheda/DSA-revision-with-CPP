//shifting amd insertion of elements take place instead of swapping, card example

#include<iostream>
using namespace std; 

int insertion_sort(int arr[], int n){
    for (int i = 1; i < n; i++)
    {   int j, key=arr[i];
    for (j = i-1; j >= 0; j--)
    {
        if (arr[j]<key)
        {
            break;
        }
        else
        {
            arr[j+1]=arr[j];
        }
    }
            arr[j+1]=key;
    }
    
}

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

int main() { int arr[10000], n;
    cout<<"Enter array length: ";
    cin>>n;
    cout<<"Enter array elements: "<< endl;
    enter_array(arr, n);
    cout<<"Entered array is: ";
    display_array(arr, n);
    insertion_sort(arr, n);
    cout<<"Sorted array is: ";
    display_array(arr, n);
     return 0;
}