// bubble sort follows sucesssive comparison and shifting of bubble approach

#include<iostream>
using namespace std; 

int bubble_sort(int arr[], int n){
        for (int i = 0; i < n-1; i++)
        {
        for (int j = 1; j < n-i; j++)
        {
            if (arr[j-1]>arr[j]){swap(arr[j-1], arr[j]);}
        }
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
    bubble_sort(arr, n);
    cout<<"Sorted array is: ";
    display_array(arr, n);
     return 0;
}