/*Useful for sorted arrays or linked lists.

Problem: Check if a given array has two numbers that add up to a target.*/

#include <iostream>
#include <vector>
using namespace std;

bool twoSumSorted(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            cout << "Numbers found: " << nums[left] << ", " << nums[right] << endl;
            return true;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 6};
    int target = 6;
    if (!twoSumSorted(nums, target)) {
        cout << "No numbers found." << endl;
    }
    return 0;
}
