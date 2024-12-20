#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string expr) {
    stack<char> s;

    for (char c : expr) {
        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (s.empty() || (c == ')' && s.top() != '(') || 
                (c == '}' && s.top() != '{') || 
                (c == ']' && s.top() != '[')) {
                return false;
            }
            s.pop();
        }
    }

    return s.empty();
}

int main() {
    string expr = "{[()]}";
    if (isBalanced(expr)) {
        cout << "Expression is balanced." << endl;
    } else {
        cout << "Expression is not balanced." << endl;
    }
    return 0;
}
//Validating expressions (balanced parentheses).
//Backtracking and reversing operations.
//Undo functionality in applications.