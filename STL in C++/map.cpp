// data is stored as key value
// key is pointing to value
// all keys are unique & every key points to only a single value
// multiple keys could be pointing to a similar value

// insert, erase, serch, find and count -> O(log(n))
// in unorderd map, searching complexity -> O(1)
// sorted map is implemented using red and black tree
// unordered map is implemented using hash table

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<float, string> m;

    m[000.9] = "kheda";
    m[15] = "singh";
    m[-3] = "sam";
    m[16.95] = "ji";

    // it's a sorted map so elements will appear in sorted order regardless of insertion
    for (auto i : m)
    {
        cout << i.first << " ";
    }
    cout << endl;

    m.erase(15); // only key needs to be given to erase

    // after erase
    for (auto i : m)
    {
        cout << i.first << " ";
    }
    cout << endl;

    m.insert({12.89999, "hai"});

    // after insert
    for (auto i : m)
    {
        cout << i.first << " ";
    }
    cout << endl;

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    cout << "Is -3 present? " << m.count(-3) << endl;

    auto it = m.find(12.89999); // returns iterator of that particular element

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << " " << (*i).second << endl;
    }

    return 0;
}