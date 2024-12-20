/*
3. Backtracking
Explore all possibilities recursively.

Problem: Generate all subsets of a set.*/

#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(vector<int>& nums, vector<int>& current, int index) {
    if (index == nums.size()) {
        cout << "{ ";
        for (int num : current) {
            cout << num << " ";
        }
        cout << "}" << endl;
        return;
    }

    // Include the current element
    current.push_back(nums[index]);
    generateSubsets(nums, current, index + 1);

    // Exclude the current element
    current.pop_back();
    generateSubsets(nums, current, index + 1);
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<int> current;
    generateSubsets(nums, current, 0);
    return 0;
}

//Solving puzzles like N-Queens, Sudoku.
//Generating permutations, combinations, or subsets.