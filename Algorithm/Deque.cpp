#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    // Insert elements
    dq.push_back(10);
    dq.push_front(5);
    dq.push_back(15);

    // Access elements
    cout << "Front: " << dq.front() << ", Back: " << dq.back() << endl;

    // Remove elements
    dq.pop_front();
    dq.pop_back();

    return 0;
}


//Double-ended operations
//Sliding window problems