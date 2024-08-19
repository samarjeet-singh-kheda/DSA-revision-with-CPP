#include <bits/stdc++.h>
using namespace std;

//!     In cpp, default arguments always start from right most one, we can't make an argument default without making all the arguments on the right of it default as well
// void printArr(int arr[], int len, int start = 0)
void printArr(int arr[], int len = 0, int start = 0)
{
    for (int i = start; i < len; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "execution finished" << endl
         << endl;
}

//!     INLINE FUNCTIONS ---> are used to reduce the function calls overhead
inline int getMax(int &a, int &b)
{
    return (a > b) ? a : b;
}
/**
 *      Here, without inline function are used because without them, the function will take extra space in stack & the copied variables will occupy unnecessary memory (when they are copied).
 *
 *      Thus, it provided us extra readability + performance benefits (no extra space + less function overhead)
 *
 *  ?       If function have only a single line ---> definitely an inline function
 *  ?       If function have 2-3 lines ---> compiler might not do it
 *  ?       If function have more than 3 lines ---> even if we write "inline", it will still have no affect
 */

int main()
{
    int a = 1, b = 2;
    int ans = 0;

    ans = getMax(a, b);
    cout << ans << endl;

    a = 2;
    b = 1;

    ans = getMax(a, b);
    cout << ans << endl;

    ///////////////////////////////////////////////////////////////////
    int arr[5] = {2, 3, 4, 5, 6};
    printArr(arr);
    printArr(arr, 5);
    printArr(arr, 5, 2);

    return 0;
}