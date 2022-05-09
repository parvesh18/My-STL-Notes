#include <iostream>
#include <map>
using namespace std;
int main()
{
    // map -> key value -> different key denotes same value but same key doesn't denotes different value
    /* key -> fasfood & value -> burger etc.
     Example -> fastfood denotes burger & favourite denotes burger , this is possible
     but fastfood denotes burger & fastfood doesnot denotes pizza ,it is not possible */

    // map ke case me sorted hota but unordered map ke case me random(unsorted) hota hai

    map<int, string> m;

    m[1] = "monty"; // 1 is key & monty is value
    m[13] = "yadav";
    m[6] = "tony";
    m[3] = "thor";

    m.insert({5, "Spider-Man"}); // By this way we also include key-value in map

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl; // first -> key and second -> value
    }

    cout << "6 is present or not -> " << m.count(6) << endl;
    cout << endl;

    m.erase(3); // erase

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // --find---
    auto it = m.find(6);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }

    return 0;
}

// erase, count, find, insert -> Time Complexity -> O(log n)
