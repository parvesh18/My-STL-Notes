// Queue -> First in first out
#include <iostream>
#include <queue>
using namespace std;
int main()
{

    queue<string> q;

    q.push("Monty");
    q.push("Tony");
    q.push("Eleit");
    q.push("Babbar");

    // jo phele aaeega vo phela jaega
    cout << "The Size of Queue -> " << q.size() << endl;
    cout << "The front element -> " << q.front() << endl;

    q.pop();

    cout << "The Size of Queue after pop -> " << q.size() << endl;
    cout << "The front element after pop -> " << q.front() << endl;

    return 0;
}