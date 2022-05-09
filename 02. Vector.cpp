#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    cout << "Capacity of vector -> " << v.capacity() << endl;

    v.push_back(5);
    cout << "Capacity of vector -> " << v.capacity() << endl;

    v.push_back(7);
    cout << "Capacity of vector -> " << v.capacity() << endl;

    v.push_back(8);
    cout << "Capacity of vector -> " << v.capacity() << endl;

    // size and capacity are not same
    cout << "Size of vector -> " << v.size() << endl;

    cout << "Element at 2nd index -> " << v.at(2) << endl;

    cout << "Front element of the vector -> " << v.front() << endl;

    cout << "Back element of the vector -> " << v.back() << endl;

    v.pop_back(); //  we remove the last element of the vector

    // v.clear(); // by this size of vector is 0 but capacity is not 0

    vector<int> v1(5, 100); // by this way initalize all element of the vector from 100
    for (int i : v1)        // by the use of for loop we print the vector(v1);
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> v2(v); // by this way we copy the vector v into vector v2;
    for (int i : v2)
    {
        cout << i << " ";
    }

    return 0;
}