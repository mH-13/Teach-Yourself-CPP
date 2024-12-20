#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int val) : data(val), next(nullptr) {}
};

// Linked List class
class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    // Add node at the end
    void append(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Display the linked list
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Reverse the linked list
    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;

        while (current) {
            next = current->next;   // Save the next node
            current->next = prev;  // Reverse the link
            prev = current;        // Move the `prev` pointer forward
            current = next;        // Move the `current` pointer forward
        }
        head = prev; // Update the head pointer
    }
};

int main() {
    LinkedList ll;

    ll.append(1);
    ll.append(2);
    ll.append(3);

    cout << "Original List: ";
    ll.display();

    ll.reverse();

    cout << "Reversed List: ";
    ll.display();

    return 0;
}


//Useful for dynamic memory allocation.
//Efficient insertion and deletion operations compared to arrays.
//Solves problems like reversing a list, detecting cycles, merging sorted lists, etc.