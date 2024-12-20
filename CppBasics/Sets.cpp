#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {5, 3, 1, 4, 2};

    // Add elements
    s.insert(6);

    // Access elements
    for (int x : s) {
        cout << x << " "; // Output is sorted: 1 2 3 4 5 6
    }
    cout << endl;

    return 0;
}


//Efficient lookups (O(log n) for maps and sets)
//Removing duplicates (sets)