#include <bits/stdc++.h>
using namespace std;

int main()
{

     //! Incrementing pointer
     int a = 34;
     int *pa = &a;
     cout << a << " " << *pa << " " << pa << endl;

     pa++;
     cout << a << " " << *pa << " " << pa << endl;

     //! Decrementing pointer
     int b = 34;
     int *pb = &b;
     cout << b << " " << *pb << " " << pb << endl;

     pb--;
     cout << b << " " << *pb << " " << pb << endl;

     //! adding integer to a pointer
     int num11 = 90000;
     int *p11 = &num11;
     cout << "Adding integer to a pointer: " << endl;
     cout << "Before: " << p11 << endl;
     p11 += 5;
     cout << "After: " << p11 << "\n"
          << endl;

     //! subtracting integer from a pointer
     int num12 = 90000;
     int *p12 = &num12;
     cout << "Subtracting integer to a pointer: " << endl;
     cout << "Before: " << p12 << endl;
     p12 -= 5;
     cout << "After: " << p12 << "\n"
          << endl;

     //! subtracting two pointers
     int num1 = 10;
     int num2 = 345;

     int *ptr1 = &num1;
     int *ptr2 = &num2;

     cout << ptr1 << " " << ptr2 << endl;
     cout << ptr2 - ptr1 << endl;
     cout << ptr1 - ptr2 << endl;

     int num3 = 789;
     int *ptr3 = &num3;

     cout << ptr3 << endl;
     cout << ptr3 - ptr1 << endl;
     cout << ptr3 - ptr2 << endl;

     char ch = '2';
     char *ptr_ch = &ch;

     cout << ptr_ch << endl;

     float f = 34.56;
     float *ptr_fl = &f;

     cout << ptr_fl << endl;

     // cout << ptr1 - ptr_fl << endl; //?   invalid operation

     return 0;
}