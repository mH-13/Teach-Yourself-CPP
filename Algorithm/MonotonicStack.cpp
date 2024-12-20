/*Used for problems that require finding the next/previous greater or smaller elements efficiently.

Problem: Find the next greater element for each element in an array.*/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, -1); // Initialize with -1 (default when no greater element exists)
    stack<int> s;

    for (int i = 0; i < n; i++) {
        // Resolve stack for the current element
        while (!s.empty() && nums[s.top()] < nums[i]) {
            result[s.top()] = nums[i];
            s.pop();
        }
        s.push(i); // Push the current index
    }

    return result;
}

int main() {
    vector<int> nums = {4, 5, 2, 10, 8};
    vector<int> result = nextGreaterElement(nums);

    cout << "Next Greater Elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


//Problems involving stock spans, histogram areas.
//Efficient range queries.