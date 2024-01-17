#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 4> arr = {4, 6, 8, 10};
    // it's static that's why not used much

    int size = arr.size(); // to find Capacity
    cout << "size of array: " << size << endl;

    for (auto i : arr)
    {
        cout << i << " "; // transversed like a normal array
    }
    cout << endl;

    cout << "Empty or not: " << arr.empty() << endl;
    // 1 if empty, 0 if not

    cout << "Third element of array is: " << arr.at(2) << endl;
    // arr.at(i) gives element at 'i' inde

    cout << "first index of array is: " << arr.front() << endl;
    // gives element at front

    cout << "last index of array is: " << arr.back() << endl;
    // gives element at back

    cout << "Max size of array: " << arr.max_size();

    return 0;
}