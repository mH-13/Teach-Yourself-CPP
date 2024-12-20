#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // Using Lambda to print elements
    for_each(v.begin(), v.end(), [](int x) { cout << x << " "; });
    cout << endl;

    // Lambda for custom sorting
    sort(v.begin(), v.end(), [](int a, int b) { return a > b; });

    cout << "Sorted in descending order: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
//Inline, concise custom functions
//Functional programming in C++