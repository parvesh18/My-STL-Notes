// DEQUE
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(45);
    d.push_front(35);
    d.push_front(30);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // d.pop_back();
    // d.pop_front();
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }

    cout << "The first element is -> " << d.at(1) << endl;

    cout << "The Front Element is -> " << d.front() << endl;
    cout << "The Back Element is -> " << d.back() << endl;

    cout << "The size of DEQUE is before erase -> " << d.size() << endl;

    d.erase(d.begin(), d.begin() + 1);
    cout << "The size of DEQUE is after erase -> " << d.size() << endl;

    for (int i : d)
    {
        cout << i << " ";
    }

    return 0;
}