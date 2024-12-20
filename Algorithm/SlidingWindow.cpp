//Maximum Sum Subarray of Size K

#include <iostream>
#include <vector>
using namespace std;

int maxSumSubarray(vector<int>& nums, int k) {
    int maxSum = 0, windowSum = 0;

    // Initialize the first window
    for (int i = 0; i < k; i++) {
        windowSum += nums[i];
    }
    maxSum = windowSum;

    // Slide the window
    for (int i = k; i < nums.size(); i++) {
        windowSum += nums[i] - nums[i - k];
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 3;
    cout << "Maximum Sum Subarray of size " << k << ": " << maxSumSubarray(nums, k) << endl;
    return 0;
}


//Optimizing resource utilization.
//Solving array problems with overlapping windows.



/*1. Sliding Window
Used for problems involving subarrays or substrings.

Problem: Find the maximum sum of a subarray of size k.*/


#include <iostream>
#include <vector>
using namespace std;

int maxSumSubarray(vector<int>& nums, int k) {
    int maxSum = 0, windowSum = 0;

    // Initialize the first window
    for (int i = 0; i < k; i++) {
        windowSum += nums[i];
    }
    maxSum = windowSum;

    // Slide the window
    for (int i = k; i < nums.size(); i++) {
        windowSum += nums[i] - nums[i - k];
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 3;
    cout << "Maximum Sum Subarray of size " << k << ": " << maxSumSubarray(nums, k) << endl;
    return 0;
}


//Fixed-size subarrays.
//Problems like maximum sum, smallest subarray, or character frequency tracking.