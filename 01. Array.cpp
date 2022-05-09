#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 4> a = {5, 6, 3, 9};

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    cout << "Element at index 2 is -> " << a.at(2) << endl;
    cout << "Empty or not -> " << a.empty() << endl;
    cout << "First Element -> " << a.front() << endl;
    cout << "Last Element -> " << a.back() << endl;

    return 0;
}