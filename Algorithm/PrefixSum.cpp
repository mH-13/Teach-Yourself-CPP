/*Used for array range queries and optimizations.

Problem: Find the sum of elements in a range efficiently.*/

#include <iostream>
#include <vector>
using namespace std;

class PrefixSum {
    vector<int> prefix;

public:
    PrefixSum(vector<int>& nums) {
        prefix.resize(nums.size() + 1, 0);
        for (int i = 0; i < nums.size(); i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }
    }

    int rangeSum(int left, int right) {
        return prefix[right + 1] - prefix[left];
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    PrefixSum ps(nums);

    cout << "Sum of range [1, 3]: " << ps.rangeSum(1, 3) << endl;
    cout << "Sum of range [0, 4]: " << ps.rangeSum(0, 4) << endl;

    return 0;
}

//Sum or count queries over subarrays.
//Problems involving cumulative data processing.