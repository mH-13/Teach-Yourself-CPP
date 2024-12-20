/*7. Binary Search on Answers
Used for problems where the solution lies in a range, and binary search can be applied to minimize/maximize the value.

Problem: Find the smallest divisor such that the sum of all array elements divided by the divisor is ≤ threshold.*/

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool isValidDivisor(vector<int>& nums, int divisor, int threshold) {
    int total = 0;
    for (int num : nums) {
        total += ceil((double)num / divisor);
    }
    return total <= threshold;
}

int smallestDivisor(vector<int>& nums, int threshold) {
    int left = 1, right = *max_element(nums.begin(), nums.end());
    int result = right;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (isValidDivisor(nums, mid, threshold)) {
            result = mid; // Try smaller divisors
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return result;
}

int main() {
    vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;
    cout << "Smallest Divisor: " << smallestDivisor(nums, threshold) << endl;
    return 0;
}

//Optimization problems (e.g., minimizing the largest sum, cutting wood).
//Solving problems where a condition needs to be satisfied.