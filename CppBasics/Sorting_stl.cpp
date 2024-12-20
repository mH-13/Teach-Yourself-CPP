#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {4, 2, 5, 1, 3};

    // Sort in ascending order
    sort(v.begin(), v.end());

    cout << "Sorted Vector: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
