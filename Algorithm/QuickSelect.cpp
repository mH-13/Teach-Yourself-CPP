//Find the Kth Smallest/Largest Element
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

// Partition function
int partition(vector<int>& arr, int left, int right) {
    int pivot = arr[right];
    int i = left;

    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[right]);
    return i;
}

// Quick Select
int quickSelect(vector<int>& arr, int left, int right, int k) {
    if (left == right) return arr[left];

    int pivotIndex = partition(arr, left, right);

    if (pivotIndex == k) return arr[pivotIndex];
    else if (pivotIndex < k) return quickSelect(arr, pivotIndex + 1, right, k);
    else return quickSelect(arr, left, pivotIndex - 1, k);
}

int main() {
    vector<int> arr = {3, 2, 1, 5, 4};
    int k = 3; // Find 3rd smallest element
    cout << "The " << k << "rd smallest element is: " << quickSelect(arr, 0, arr.size() - 1, k - 1) << endl;

    return 0;
}
//Finding medians or percentile values.
//Efficiently solving problems with randomized selection.