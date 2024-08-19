#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    int arr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 111};

    cout << "Address of first memory block of array is: " << arr << endl; //?  "arr" is a reference to first memory block
    cout << "Address of arr[0] is: " << &arr[0] << endl;                  //?  &arr[0] == arr, &arr[1] == (arr + 1)

    cout << "Address of second memory block of array is: " << arr + 1 << endl;

    cout << "Address of last memory block of array is: " << arr + 10 << endl;
    cout << "Address of arr[10] is: " << &arr[10] << endl;

    cout << "Value at arr: " << *arr << endl; //?        arr --> arr[0], arr+1 --> arr[1]
    cout << "Value at (arr + 1): " << *(arr + 1) << endl;
    cout << "Value at (arr + 3): " << *(arr + 3) << endl;

    //!     Thus,       arr[i] == *(arr+i) == i[arr] == *(i + arr)

    cout << 3 [arr] << endl; //?    3[arr] = arr[3]

    cout << sizeof(arr) << endl; //?    (length of array)*(size of data type)



    int a[20] = {1, 2, 3, 4, 5};

    //?      all three would be equal
    cout << a << " " << sizeof(a) << " " << *(a) << endl;                       //* decays to the pointer to first element of an array, except in sizeof() { which treats it like int a[20] }
    cout << &a << " " << sizeof(&a) << " " << *(&a) << " " << *(*(&a)) << endl; //* pointer to the entire array of type int(*)[20], its size is "8"
    cout << &a[0] << " " << sizeof(&a[0]) << " " << *(&a[0]) << endl;           //*  pointer to just the first element of array, size ---> 8

    int *p = a;
    int(*p2)[20] = &a;

    cout << p << " " << *p << " " << sizeof(a) << endl;

    cout << p << " " << p2 << endl;
    p++;
    p2++;
    cout << p << " " << p2 << endl;



    */

    //*  array address is stored in symbol table and cannot be changed, array is reassign-able
    int arr[10] = {0};

    // arr = arr + 1;       //!     ERROR

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr++;
    cout << ptr << endl;

    return 0;
}