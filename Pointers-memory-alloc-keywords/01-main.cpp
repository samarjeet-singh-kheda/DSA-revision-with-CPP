#include <bits/stdc++.h>
using namespace std;

int main()
{

     int num = 5;

     cout << "num: " << num << endl;
     cout << &num << "\n"
          << endl;

     int *ptr = &num;

     cout << "ptr: " << ptr << endl;
     cout << *ptr << endl;
     cout << &ptr << "\n"
          << endl;

     int **p = &ptr;

     cout << "p: " << p << endl;
     cout << *p << endl;
     cout << **p << endl;
     cout << &p << "\n"
          << endl;

     int ***p1 = &p;

     cout << "p1: " << p1 << endl;
     cout << *p1 << endl;
     cout << **p1 << endl;
     cout << ***p1 << "\n"
          << endl;

     double d = 2.34;
     double *d_ptr = &d;

     cout << "d: " << d_ptr << endl;
     cout << &d << endl;
     cout << "d: " << "\n"
          << *d_ptr << endl;

     float f = 2.3;

     cout << sizeof(num) << endl;
     cout << sizeof(d) << endl;
     cout << sizeof(f) << endl;

     cout << sizeof(ptr) << endl; //?     pointer always have same size (8), as all of them holds address despite what they are pointing to
     cout << sizeof(d_ptr) << endl;

     cout << "\n\n\n";
     ///////////////////////////////////////////////////////////////

     int *ptr3; //! bad practice, could have been initialised to 0
     cout << "Random address: " << ptr3 << endl;
     cout << "Random value: " << *ptr3 << endl;

     // int *ptr1;
     // cout << ptr1 << endl;
     // cout << *ptr1 << endl;

     int *ptr2 = 0;

     cout << ptr2 << endl;
     cout << *ptr2 << endl; //?   Segmentation fault (core dumped)

     return 0;
}