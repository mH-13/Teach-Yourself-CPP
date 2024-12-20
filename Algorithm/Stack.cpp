#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    // Push elements
    s.push(10);
    s.push(20);
    s.push(30);

    // Access and pop elements
    while (!s.empty()) {
        cout << "Top element: " << s.top() << endl;
        s.pop();
    }

    return 0;
}
