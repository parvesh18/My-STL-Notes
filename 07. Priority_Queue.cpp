#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // Max-Heap -> Print the elements on Decresing Order
    // Min-Heap -> Print the elements on increasing Order

    priority_queue<int> maxi; // max-heap
    // we push these elements in maxi priority queue
    maxi.push(5);
    maxi.push(4);
    maxi.push(0);
    maxi.push(8);

    priority_queue<int, vector<int>, greater<int>> mini; // min-heap

    cout << "The Size of an Queue -> " << maxi.size() << endl;
    int n = maxi.size(); // size of queue change continously that's why we store the size of queue in (n)
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    // we push these elements in mini priority queue
    mini.push(9);
    mini.push(7);
    mini.push(16);
    mini.push(3);
    mini.push(0);
    mini.push(21);

    cout << "The Size of an Queue -> " << mini.size() << endl;
    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    // we find QUEUE is empty or not
    cout << "Empty or Not(maxi{Max-Heap}) -> " << maxi.empty() << endl;
    cout << "Empty or Not(mini{Min-Heap}) -> " << mini.empty() << endl;
}