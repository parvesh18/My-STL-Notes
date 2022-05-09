// STACK
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;

    s.push("Monty");
    s.push("Yadav");
    s.push("Parvesh");
    s.push("Kumar");

    // jo bad me element jayega vo phele print hoga
    cout << "Top Element -> " << s.top() << endl; // print -> Kumar

    cout << "The Size of stack is -> " << s.size() << endl;

    s.pop(); // pop me bi last element pop hoga

    cout << "Top Element after pop -> " << s.top() << endl;
    cout << "The Size of stack after pop is -> " << s.size() << endl;

    cout << "Empty or Not -> " << s.empty() << endl;

    return 0;
}