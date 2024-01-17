#include<iostream>
using namespace std; 

int binary_search(int arr[], int n, int key){
    int start = 0, end = n-1;
    int mid = end + (start-end)/2;
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
        mid = end + (start-end)/2;
    }
        return -1;
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

int main() { int arr[1000], n, key;
    cout<<"Enter length of the array: ";
    cin>>n;
    cout<<"Enter elements of the array: "<< endl;
    enter_array(arr, n);
    cout<<"Elements of the array are: ";
    display_array(arr, n);
    cout<<"Enter key: ";
    cin>>key;
    int index = binary_search(arr, n, key);
    cout<<"Index of the key is: ";
    cout<<index;
     return 0;
}