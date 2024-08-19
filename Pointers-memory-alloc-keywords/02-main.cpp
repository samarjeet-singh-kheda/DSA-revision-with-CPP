#include <bits/stdc++.h>
using namespace std;

int main()
{

    //! 1) first declaring, then initialising the pointer
    int i = 5;
    int *p = 0;
    //? *p = &i;  (this is invalid, as we are assigning value to an integer)
    p = &i;

    cout << *p << endl;

    //! 2)
    int num = 5;
    int a = num;
    a++;

    cout << a << " " << num << endl;

    //! 3)
    int num31 = 5;
    int *ptr31 = &num31;

    int num32 = *ptr31;
    num32--;

    cout << num31 << " " << num32 << endl;

    (*ptr31)++;
    cout << num31 << " " << num32 << endl;

    return 0;
}