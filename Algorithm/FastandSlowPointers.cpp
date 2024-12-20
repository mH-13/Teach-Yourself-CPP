/*5. Fast and Slow Pointers (Tortoise and Hare)
This pattern uses two pointers moving at different speeds to detect cycles or find specific elements.

Problem: Detect a cycle in a linked list.*/


#include <iostream>
using namespace std;

// Node structure
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;          // Move slow pointer one step
        fast = fast->next->next;    // Move fast pointer two steps

        if (slow == fast) {         // Cycle detected
            return true;
        }
    }
    return false;                   // No cycle
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = head; // Creating a cycle

    if (hasCycle(head)) {
        cout << "Cycle detected in the linked list." << endl;
    } else {
        cout << "No cycle in the linked list." << endl;
    }
    return 0;
}
//Detecting cycles in linked lists or graphs.
//Finding the middle of a linked list efficiently.