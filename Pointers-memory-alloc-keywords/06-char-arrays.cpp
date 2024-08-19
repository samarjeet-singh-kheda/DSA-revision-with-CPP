#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {55, 44, 33, 22, 11};
    char crr[6] = "abcde"; // 6 characters including '\0'

    //*     "cout" have different implementation for integer and character arrays
    //*     in "int" arrays it prints the address while in "char" array it prints the all the characters starting from "0" until it founds '\0' (null character)
    cout << arr << endl; //!   OUTPUT --->  0x7ffd10159ca0
    cout << crr << endl; //!   OUTPUT --->  abcde

    ///////////////////////////////////////////////
    int *ptr = &arr[0];
    //      prints the address of first memory block of array
    cout << ptr << endl; //! OUTPUT --->  0x7ffd10159ca0

    char *c = &crr[0];
    //    prints all the characters starting from "crr[0]" until it encounters '\0'
    cout << c << endl; //!   OUTPUT --->  abcde

    ///////////////////////////////////////////////
    char temp = 'z';
    char *c_temp = &temp;
    //  different outcome every time because it will keep printing characters starting from memory block pointed by "c_temp", until it encounters '\0' in some memory block
    cout << c_temp << endl; //!    OUTPUT --> zpx���  or  z��o��  or  z��o��
    cout << *c_temp << endl;

    return 0;
}