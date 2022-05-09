#include <iostream>
#include <set>
using namespace std;
int main()
{
    // set contains unique
    set<int> s;

    s.insert(5);
    s.insert(5); // in this we insert four 5 but we print the set so set print only one 5 because set contains unique element
    s.insert(3);
    s.insert(5);
    s.insert(7);
    s.insert(8);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(10);

    for (auto i : s) // we print the set
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "The Size of Set is -> " << s.size() << endl;

    cout << "7 is present or not -> " << s.count(7) << endl; // we check set conatins this element or not

    // s.erase(s.begin()); // by this we erase the first element of set

    set<int>::iterator it = s.begin(); // we start the iterator from the first element & by this way we erase any element in set{it-> Name of Iterator}
    it++;                              // iterator go on next element
    it++;                              // iterator go on next element

    s.erase(it);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    /*
    // By this way we find element
    set<int>::iterator itr = s.find(7);
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    */

    return 0;
}

// insert , find , erase & count -> Time Complexity -> O(log n)
// size , begin , end & empty -> Time Complexity -> O(n)
