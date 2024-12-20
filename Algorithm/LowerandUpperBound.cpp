#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 2, 3, 4};

    auto lower = lower_bound(v.begin(), v.end(), 2);
    auto upper = upper_bound(v.begin(), v.end(), 2);

    cout << "Lower Bound Index: " << (lower - v.begin()) << endl;
    cout << "Upper Bound Index: " << (upper - v.begin()) << endl;

    return 0;
}


//Efficient searching and range-based queries
//Leveraging STL for competitive programming