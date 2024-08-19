#include <bits/stdc++.h>
using namespace std;

int main()
{
    //!     Copying a pointer
    int num = 15;
    int *p = &num;

    int *q = p;

    cout << p << " " << q << endl;

    //!     pointer arithmetic
    int num2 = 5;
    int *ptr = &num2;

    cout << *ptr << endl;

    *ptr = *ptr + 1; //?     value at address pointer by "ptr" += 1
    cout << *ptr << endl;

    (*ptr)++;
    cout << *ptr << endl;

    cout << ptr << endl;
    *ptr++; //?      equivalent to *(p++), i.e.  pointer address += sizeof(data_type it is pointing to)
    cout << ptr << endl;
    *ptr--; //?      equivalent to *(p++), i.e.  pointer address += sizeof(data_type it is pointing to)
    cout << ptr << endl;

    cout << *(ptr++) << endl;

    return 0;
}