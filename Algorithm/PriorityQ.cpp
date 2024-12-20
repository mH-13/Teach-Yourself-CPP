#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Max-Heap (Default)
    priority_queue<int> maxHeap;

    maxHeap.push(10);
    maxHeap.push(20);
    maxHeap.push(5);

    cout << "Top of Max-Heap: " << maxHeap.top() << endl;

    // Min-Heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(10);
    minHeap.push(20);
    minHeap.push(5);

    cout << "Top of Min-Heap: " << minHeap.top() << endl;

    return 0;
}
//Efficient element access based on priority
//Scheduling tasks, Dijkstra's algorithm