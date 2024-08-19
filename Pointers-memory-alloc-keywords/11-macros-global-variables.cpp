#include <bits/stdc++.h>
using namespace std;

#define PI 3.14 //* (better for performance, as compared to declaring a variable "pi")
//*  a piece of code in a program is replaced by value of macro (pre-processor directive)

int score = 15;

void a(int &n)
{
    cout << "Score (in a): " << score << endl;
    cout << "In a:" << n++ << " " << &n << endl;
}

void b(int &n)
{
    cout << "Score (in b): " << score << endl;
    cout << "In b:" << n++ << " " << &n << endl;
}

int main()
{
    int radius = 5;
    // int area = 3.14 * radius * radius;

    // double pi = 3.14;
    // int area = pi * radius * radius;

    int area = PI * radius * radius;

    cout << area << endl;

    ///////////////////////////////////////////////////////////////////////
    int n = 101; //?      Variables can be shared between function using either reference variable or global variables, but global variables is considered a bad practice

    cout << "Score (in main): " << score << endl;
    cout << "In main:" << n++ << " " << &n << endl;
    a(n);
    b(n);

    return 0;
}