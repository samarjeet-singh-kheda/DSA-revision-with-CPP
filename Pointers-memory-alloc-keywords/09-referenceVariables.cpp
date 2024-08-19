#include <bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////
//!     BAD PRACTICE --> since we are returning reference to the variables that will die in the function scope
int *retPtr(int n)
{
    int *ptr = &n;
    return ptr;
}

int &retReference2(int a)
{
    int num = 10;
    int &ans = num;
    return ans;
}

int &retReference(int a)
{
    int &ans = a;
    return ans;
}

/////////////////////////////////////////////////////
void update(int n)
{

    cout << "Address of n (in UPDATE 1): " << &n << endl;

    n++;
}

void update2(int &n)
{

    cout << "Address of n (in UPDATE 2): " << &n << endl;

    n++;
}

int main()
{
    int i = 5;

    int &j = i; //?     Reference variable (kinda like different names for a same memory block)

    cout << "Initial Values: " << i << endl;
    cout << "Initial Values: " << j << endl;

    i++;
    cout << "After i++ : " << i << endl;
    cout << "After i++ : " << j << endl;

    j++;
    cout << "After j++ : " << i << endl;
    cout << "After j++ : " << j << endl;
    cout << endl;

    /////////////////////////////////////////////////////////////////////////
    int n = 5;

    cout << "Before: " << n << " " << &n << endl;
    update(n);
    cout << "After: " << n << " " << &n << endl;
    cout << endl;

    cout << "Before: " << n << " " << &n << endl;
    update2(n);
    cout << "After: " << n << " " << &n << endl;

    /////////////////////////////////////////////////////////////////////////
    cout << retReference(n) << endl;
    cout << retReference2(n) << endl;
    cout << retPtr(99) << endl;

    return 0;
}