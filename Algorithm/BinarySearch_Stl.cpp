#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    if (binary_search(v.begin(), v.end(), 3)) {
        cout << "Element found!" << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}
