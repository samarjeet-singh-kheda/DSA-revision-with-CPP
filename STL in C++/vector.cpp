#include <iostream>
#include <vector>
using namespace std;

int main()
{
     vector<int> v = {1, 2, 3, int(4.9)};

     vector<int> a(7); // syntax -> vector(size, element);
     for (int i : a)
     {                      // if element is not specified it is assumed
          cout << i << " "; // to be zero. If it is, then it is intialised
     }                      // at every position.
     cout << endl;

     vector<int> b(7, 1);
     for (int i : b)
     {
          cout << i << " ";
     }
     cout << endl;

     vector<int> last(b); // method to copy a vector in another vector
     for (int i : last)
     { // new_vector(old_vector);
          cout << i << " ";
     }

     cout << "Capacity of vector: " << v.capacity() << endl;
     cout << "Size of vector: " << v.size() << endl;

     v.push_back(0);
     cout << "Capacity of vector: " << v.capacity() << endl;
     cout << "Size of vector: " << v.size() << endl;

     v.push_back(1);
     cout << "Capacity of vector: " << v.capacity() << endl;
     cout << "Size of vector: " << v.size() << endl;

     v.push_back(2);
     cout << "Capacity of vector: " << v.capacity() << endl;
     cout << "Size of vector: " << v.size() << endl;

     v.push_back(3);
     cout << "Capacity of vector: " << v.capacity() << endl;
     cout << "Size of vector: " << v.size() << endl;

     v.push_back(4);
     cout << "Capacity of vector: " << v.capacity() << endl;
     cout << "Size of vector: " << v.size() << endl;

     cout << "Element at index 5: " << v[4] << endl;
     cout << "Element at index 5: " << v.at(4) << endl;

     cout << "First element: " << v.front() << endl;
     cout << "Last element: " << v.back() << endl;

     cout << "Vector before pop: " << endl;
     for (int i : v)
     { // range based for loop
          cout << i << " ";
     }
     cout << endl;
     cout << "Vector capacity before pop: " << v.capacity() << endl;
     cout << "Vector size before pop: " << v.size() << endl;

     v.pop_back(); // pops the last entered element

     cout << "Vector after pop: " << endl;
     for (int i : v)
     {
          cout << i << " ";
     }
     cout << endl;
     cout << "Vector capacity after pop: " << v.capacity() << endl;
     cout << "Vector size after pop: " << v.size() << endl;

     v.pop_back();
     cout << "Vector capacity after second pop: " << v.capacity() << endl;
     cout << "Vector size after second pop: " << v.size() << endl;

     vector<float> f = {1.2, 2.3, 3.4, 4.5, 5.6};

     f.erase(f.begin(), f.begin());
     cout << "Vector after erase: " << endl;
     for (float i : f)
     {
          cout << i << " ";
     }
     cout << endl;

     cout << "Max size of vector is: " << v.max_size() << endl;
     cout << "Max size of vector is: " << f.max_size() << endl;

     return 0;
}