// LIST
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l; // make list

    l.push_back(12); // include element from the back

    l.push_front(6); // include element from the front

    // we also use pop
    // l.pop_back();
    // l.pop_front();

    // We will print list
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin()); // erase one element from the Front

    cout << "The Size of List is -> " << l.size() << endl; // We will find the size of list

    // We will print the list after erase function use
    for (int i : l)
    {
        cout << i << " ";
    }

    //  To initialise which you want number
    list<int> l2(5, 100); // We also give size to list and initialize to 100
    for (int i : l2)
    {
        cout << i << " ";
    }

    return 0;
}