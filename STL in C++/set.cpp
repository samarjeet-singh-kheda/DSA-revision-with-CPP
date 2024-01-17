// all elements of set are unique, they do not repeat
// it is implemented using BST
// once an element is entered it can't be modified, elements can either be added or deleted only
// elements are fetched in sorted order
// unordered set give elements in random order
// set is ususally slower than unordered set

#include <iostream>
#include <set>
using namespace std;

int main()
{
      set<int> s;

      s.insert(5); // O(n) because BST
      s.insert(5);
      s.insert(5);
      s.insert(5);
      s.insert(9);
      s.insert(4);
      s.insert(4);
      s.insert(4);
      s.insert(0);
      s.insert(0);
      s.insert(3);
      s.insert(2);

      for (auto i : s)
      {
            cout << i << " "; // in sorted order
      }
      cout << endl;

      s.erase(s.begin());

      // after erase
      for (auto i : s)
      {
            cout << i << " "; // in sorted order
      }
      cout << endl;

      set<int>::iterator it = s.begin();
      it++;

      s.erase(it);

      for (auto i : s)
      {
            cout << i << " "; // in sorted order
      }
      cout << endl;

      cout << "Is 5 present in the set? " << s.count(5) << endl;
      cout << "Is -5 present in the set? " << s.count(-5) << endl;

      set<int>::iterator itr = s.find(5);
      // itr gives refrence of value

      cout << "Iterator of 5 is " << *itr << endl;

      // i gives refrence of value
      for (auto i = itr; i != s.end(); i++)
      {
            cout << *i << " ";
      }

      return 0;
}

// insert, find, erase & count -> O(log(n))
// size, begin, empty & end -> O(1)