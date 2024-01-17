// selection sort follows smallest element first with swapping approach

#include<iostream>
using namespace std; 

int selection_sort(int arr[], int n){
        for (int i = 0; i < n-1; i++)
        {   int minIndex=i;

        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[minIndex]) { minIndex=j; }
        }
            swap(arr[minIndex], arr[i]);
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
    selection_sort(arr, n);
    cout<<"Sorted array is: ";
    display_array(arr, n);
     return 0;
}