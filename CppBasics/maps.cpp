#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> ageMap;

    // Insert elements
    ageMap["Alice"] = 25;
    ageMap["Bob"] = 30;

    // Access elements
    cout << "Alice's age: " << ageMap["Alice"] << endl;

    // Iterate through map
    for (auto& entry : ageMap) {
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}
//Efficient lookups (O(log n) for maps and sets)