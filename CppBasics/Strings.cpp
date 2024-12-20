#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";

    // Access characters
    cout << "First character: " << str[0] << endl;

    // Append and Concatenate
    str += " How are you?";
    cout << "Modified String: " << str << endl;

    return 0;
}
